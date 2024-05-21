#include <iostream>
#include <sstream>
#include <algorithm>
#include "colourful_print.h"

namespace colorful_print {
  std::string get_color_code(Color color) {
    return ANSI_ESCAPE_PREFIX + std::to_string(color) + ANSI_ESCAPE_SUFFIX;
  }

  std::string reset_color() {
    return get_color_code(Color::DEFAULT);
  }
  
  void colorize_pattern(std::string& text, const std::regex& pattern, Color color) {
    std::ostringstream oss;
    std::sregex_token_iterator it(text.begin(), text.end(), pattern, {-1, 0});
    std::sregex_token_iterator end;
    bool color_next = false;
    
    for(; it != end; ++it) {
      if (color_next) {
      	oss << get_color_code(color);
	oss << it->str();
	oss << reset_color();
      }	else {
        oss << it->str();
      }
      color_next = !color_next;
    }
    text = oss.str();
  }

  void print(const std::string& text, Color color) {
    // Color all the text
    if (color != Color::DEFAULT) {
      std::cout << get_color_code(color) << text << reset_color() << std::endl;
      return;
    }

    std::string processed_text = text;

    std::regex digit_pattern("\\b\\d+\\b");
    std::regex success_pattern("\\b(success|ok)\\b", std::regex_constants::icase);
    std::regex error_pattern("\\b(error|fail)\\b", std::regex_constants::icase);

    colorize_pattern(processed_text, digit_pattern, Color::YELLOW);
    colorize_pattern(processed_text, success_pattern, Color::GREEN);
    colorize_pattern(processed_text, error_pattern, Color::RED);
    
    std::cout << processed_text << std::endl;

  }

} // namespace colorful_print

