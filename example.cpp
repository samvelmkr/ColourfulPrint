#include "colourful_print.h"

namespace cp = colorful_print;

int main() {
  cp::print("This is a default text.");
  cp::print("This is a blue text.", cp::Color::BLUE);
  cp::print("This is a cyan text.", cp::Color::CYAN);
  cp::print("This is a green text. success OK Success SUCCESS.");
  cp::print("This is a red text. error FAIL Error FAIL.");
  cp::print("This text contains a number: 123 and 456.");

  return 0;
}

