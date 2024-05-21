# ColourfulPrint

  `ColourfulPrint` is a simple library to print text with color formatting in the console. It detects specific words and patterns, applying different colors to enhance the readability and emphasis of output.

## Features

   - Detects and colors predefined patterns like "success", "ok", "error", "fail" in different colors.
   - Colors numeric values in the text.

## Installation

To build the `ColourfulPrint` library follow these steps:

  1. Clone the repository:

```sh
git clone <repository_url>
cd <repository_url>
```

  2. Build the library:

```sh
make build
```

  3. Build the example:

```sh
make example
```

## Usage

Here’s a simple example of how to use the `ColourfulPrint` library:

`example.cpp:`

```c++
#include "colourful_print.h"

namespace cp = colorful_print;

int main() {

    cp::print("This is a default text.");
    cp::print("This is a green text. success OK Success SUCCESS.");
    cp::print("This is a red text. error FAIL Error.");
    cp::print("This text contains a number: 123 and 456.");

    return 0;
}

```

Compile and run the example:

```sh
make example
./example
```


## Notes

- Ensure that your terminal supports ANSI escape codes to see the colored output.	
- Customize the `colourful_print.h` file to add more patterns or change the colors as needed.


Feel free to contribute to this project by submitting issues or pull requests.

By following this README, you should be able to set up and use the `ColourfulPrint` library effectively in your projects.

