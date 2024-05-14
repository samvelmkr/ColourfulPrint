#include "colourful_print.h"

namespace cp = colourful_print;

int main() {
  cp::print("This is a default text.\n");
  cp::print("This is a blue text.\n", cp::Colour::BLUE);
  cp::print("This is a cyan text.\n", cp::Colour::CYAN);
  cp::print("This text contains a number: 123.\n");
  cp::print("This text contains the word success.\n");
  cp::print("This text contains the word Success.\n");
  cp::print("This text contains the word SUCCESS.\n");
  cp::print("This text contains the word error.\n");
  cp::print("This text contains the word Error.\n");
  cp::print("This text contains the word ERROR.\n");
  cp::print("This text contains the word ok.\n");
  cp::print("This text contains the word Ok.\n");
  cp::print("This text contains the word OK.\n");
  cp::print("This text contains the word fail.\n");
  cp::print("This text contains the word Fail.\n");
  cp::print("This text contains the word FAIL.\n");
  
  return 0;
}

