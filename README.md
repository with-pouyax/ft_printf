# ft_printf

![printf](https://media3.giphy.com/media/v1.Y2lkPTc5MGI3NjExa2JjbDR6dWI4aWRyNmlwNXdkM3dsZmtweWp4eW42enY2cG5hOG5obCZlcD12MV9pbnRlcm5hbF9naWZfYnlfaWQmY3Q9Zw/lXiRLb0xFzmreM8k8/giphy.gif)

## Overview

This project is an implementation of the `printf` function from the C standard library. It aims to replicate the functionality of the original `printf` while learning the inner workings of formatting and variable argument lists. 

The goal of this project is to understand how to handle different types of format specifiers, as well as how to manage variable arguments in a custom function.

## Features Covered

- **Basic Format Specifiers:**
  - `c`: Single character output.
  - `s`: String output.
  - `d`/`i`: Integer output.
  - `u`: Unsigned integer output.
  - `x`/`X`: Hexadecimal output (lowercase/uppercase).
  - `%`: Print the percent symbol.

- **Precision and Width:**
  - Handling field width and precision in output.
  - Correctly formatting numbers with padding (zero-padding and space-padding).
  
- **Handling Negative Numbers:**
  - Proper formatting for negative integers and hexadecimals.

- **Pointer Handling:**
  - Formatting and outputting pointers using `%p`.

## How to Compile and Use

To compile the project, simply run the following command:

```bash
make
```

After compilation, the executable `ft_printf` will be available. To use the function in your code, include the `ft_printf.h` header file and call `ft_printf` instead of `printf`.

### Example:

```c
#include "ft_printf.h"

int main(void)
{
    int num = 42;
    ft_printf("Hello, world! %d
", num);
    return 0;
}
```

## Additional Information

- The project includes tests to check various scenarios and edge cases for each format specifier.
- This implementation was done without the use of `vprintf` or any similar functions. It uses `va_list`, `va_start`, and `va_arg` to handle variable arguments.
