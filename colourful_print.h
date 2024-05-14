#ifndef COLOURFUL_PRINT_H
#define COLOURFUL_PRINT_H

#include <string>
#include <unordered_set>

namespace colourful_print {
  enum Colour {
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

  std::unordered_set<std::string> successPatterns = {"success", "ok"};
  std::unordered_set<std::string> errorPatterns = {"error", "fail"};

  void set_colour(Colour colour);
  void reset_colour();
  void print(const std::string& text, Colour colour = Colour::DEFAULT);
} 

#endif // COLOURFUL_PRINT_H

