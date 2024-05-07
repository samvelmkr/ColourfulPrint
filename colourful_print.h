#ifndef COLOURFUL_PRINT_H
#define COLOURFUL_PRINT_H

#include <string>

namespace colourful_print {
  enum Colour {
    RED           = 31,
    GREEN         = 32,
    BLUE          = 34,
    YELLOW        = 33,
    DEFAULT       = 39
  };
  void set_color(Colour colour);
  void reset_colour();
  void print(const std::string& text);
} 

#endif // COLOURFUL_PRINT_H

