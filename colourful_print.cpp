#include <iostream>
#include <sstream>
#include <algorithm>
#include "colourful_print.h"

namespace colourful_print {
  void set_colour(Colour colour_code) {
    std::cout << ANSI_ESCAPE_PREFIX << colour_code << ANSI_ESCAPE_SUFFIX;
  }

  void reset_colour() {
    set_colour(Colour::DEFAULT);
  }
  
  bool contain_keyword(const std::string& text, const std::string& keyword) {
    return text.find(keyword) != std::string::npos;
  }

  bool contain_number(const std::string& text) {
    for (char c : text) {
      if (isdigit(c)) {
        return true;
      }
    }
    return false;
  }

  // FIXME: It doesn't print spaces or special symbols like '\n'
  void print(const std::string& text, Colour colour) {
    if (colour != Colour::DEFAULT) {
      set_colour(colour);
      std::cout << text;
      reset_colour();
      return;
    }

    std::stringstream ss(text);
    std::string word;
    while (ss >> word) {
      std::string tmp;
      std::transform(word.begin(), word.end(), tmp.begin(), ::tolower);

      if (contain_number(tmp)) {
        set_colour(Colour::YELLOW);

      } else if (successPatterns.find(tmp) != successPatterns.end()) {
        set_colour(Colour::GREEN);

      } else if (errorPatterns.find(tmp) != errorPatterns.end()) {
        set_colour(Colour::RED);
      
      }

      std::cout << word;
      reset_colour();
    }

  }

} // namespace colourful_print

