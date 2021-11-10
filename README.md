# _printf
```_printf``` is a replica of the printf function of C. It was created as a side project for Holberton School Uruguay by 2 students from cohort 16, Santiago Goyret and Mateo Victorica on november 2021.

**Prototype:** ```int _printf(const char *, ...);```

## Examples
**String and Decimal**
* Input: ```_printf("%s, %s %d, %d\\n", tuesday, november, 10, 2021);```
* Output: ```tuesday, november, 10, 2021```

**Character**
* Input: ```_printf("The first letter in Holberton is %c\n", 'H');```
* Output: ```The first letter in Holberton is H```

**Integer**
* Input: ```_printf("Size of an int is: %i\n", 4);```
* Output: ```Size of an int is: 4```

## Project Requirements
* All files were compiled on Ubuntu 20.04.3 LTS
* Programs and functions were compiled with gcc 9.3.0
* Compilation flags were -Wall -Werror -Wextra -pedantic and -Wno-format
* Authorized functions and macros:
  * ```write``` (man 2 write)
  * ```malloc``` (man 3 malloc)
  * ```free``` (man 3 free)
  * ```va_start``` (man 3 va_start)
  * ```va_end``` (man 3 va_end)
  * ```va_copy``` (man 3 va_copy)
  * ```va_arg``` (man 3 va_arg)
## Mandatory Tasks
-  Write function that produces output with conversion specifiers ```c```, ```s```, and ```%```.
-  Handle conversion specifiers ```d```, ```i```.
-  Create a man page for your function.
## Advanced Tasks
-  Handle conversion specifier ```b```.
-  Handle the conversion specifier ```r``` that prints the reversed string.
-  Handle the conversion specifier ```R``` that prints rot13 string.
## File Descriptions
* **_putchar.c:** - contains the function _putchar which writes a character to stdout
* **_printf.c:** - contains the fucntion _printf which produces output acccording to a format specifier
* **main.h:** - header file that contains all function prototypes used for _printf
* **man_3_printf:** - manual page for our _printf implementation
* **get_func.c:** - function that selects the correct output function based on the format specifier
* **functions.c:** - contains the functions print_d, recursive_d, print_c, print_s and print_r to handle said specifiers
## Authors
[Mateo Victorica](https://github.com/Ual97)

[Santiago Goyret](https://github.com/BergeDios)

