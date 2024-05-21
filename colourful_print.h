#ifndef COLORFUL_PRINT_H
#define COLORFUL_PRINT_H

#include <string>
#include <regex>

namespace colorful_print {
  enum Color {
    BLACK   = 30,
    RED     = 31,
    GREEN   = 32,
    YELLOW  = 33,
    BLUE    = 34,
    MAGENTA = 35,
    CYAN    = 36,
    WHITE   = 37,
    DEFAULT = 39
  };
  
  const std::string ANSI_ESCAPE_PREFIX = "\033[";
  const std::string ANSI_ESCAPE_SUFFIX = "m";

  std::string get_color_code(Color color);
  std::string reset_color();
 
  void colorize_pattern(std::string& text, const std::regex& pattern, Color color);

  void print(const std::string& text, Color color = Color::DEFAULT);
} 

#endif // COLORFUL_PRINT_H

