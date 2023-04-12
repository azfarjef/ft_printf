# ft_printf

In this project, you will need to recode the printf function from the C library. Your function will be called "ft_printf" and will be able to handle some of the conversions flags used in the original printf function, including: "cspdiuxX%". Your ft_printf function will also be able to handle some of the flags used in printf, such as: "-", "0" and ".".

## Function Prototype
```bash
int ft_printf(const char *format, ...);
```

## Supported Conversion Flags

- **c**: char
- **s**: string
- **p**: pointer
- **d**: integer
- **i**: integer
- **u**: unsigned integer
- **x**: hexadecimal integer (lowercase)
- **X**: hexadecimal integer (uppercase)
- **%**: percent sign

## Supported Flags

- **-** : left-align output within the field width
- **0** : left-pads the output with zeroes instead of spaces
- **.** : precision field
- **\*** : specifies the width or precision dynamically at runtime using an argument passed to the function

## Return Value
The ft_printf function returns the number of characters printed to the standard output. If an error occurs, ft_printf returns a negative value.

## Usage

Clone the repository and compile the program using `make` command. An executable called `libftprintf.a` will be created.

To use this function in your program, you need to include the "ft_printf.h" header file and call the "ft_printf" function with the desired format string and arguments.

Compile your `main.c` with this program and run it:
```bash
gcc -Wall -Wextra -Werror libftprintf.a main.c
./a.out
```

## Conclusion
Implementing this function will help you understand how to work with variadic arguments, memory allocation, and string manipulation in C.

## Credit
This project was completed as part of the curriculum of the Ecole 42 program. The instructions for the project were provided by the school.
