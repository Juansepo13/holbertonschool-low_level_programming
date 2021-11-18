# 0x14. C - Bit manipulation
***
## This is a README.md for the repository 0x14. C - Bit manipulation

```
For Holberton School
Cohort 16.
```

### General
* Look for the right source of information without too much help.
* How to manipulate bits and use bitwise operators.

### More Info
The prototypes of all your functions and the prototype of the function
_putchar should be included in your header file called main.h

```
Example.
#include <stdio.h>
#include "main.h"

/**
 * main - check the code
  *
   * Return: Always 0.
    */
    int main(void)
    {
        unsigned int n;

    n = binary_to_uint("1");
    printf("%u\n", n);
    n = binary_to_uint("101");
    printf("%u\n", n);
    n = binary_to_uint("1e01");
    printf("%u\n", n);
    n = binary_to_uint("1100010");
    printf("%u\n", n);
    n = binary_to_uint("0000000000000000000110010010");
    printf("%u\n", n);
    return (0);
}
```

## Files included

| File                 | Details                                    |
|--------------------- | ------------------------------------------ |
| [0-binary_to_uint.c](./a) | Write a function that converts a binary number to an unsigned int.  |
| [1-print_binary.c](./b)   | Write a function that prints the binary representation of a number. |
| [2-get_bit.c](.c)         | Write a function that returns the value of a bit at a given index.|
| [3-set_bit.c](./d)        | Write a function that sets the value of a bit to 1 at a given index. |
| [4-clear_bit.c](./e) | Write a function that sets the value of a bit to 0 at a given index. |
| [5-flip_bits.c](./f) | Write a function that returns the number of bits you would need to flip to get from one number to another. |

### Author
***
*Holberton School Student*

Juan Sebastian Posada  - [Github](https://github.com/Juansepo13) - [Twiter](https://twitter.com/@JuanSeb35904130)
