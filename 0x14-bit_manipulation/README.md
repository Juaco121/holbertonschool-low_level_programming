# 0x14. C - Bit manipulation

## Overview
The goal of this project was to learn how to manipulate bits and use bitwise operators

## Requirements
### C Scripts
* Allowed editors: vi, vim, emacs
* All your files will be compiled on Ubuntu 14.04 LTS
* Your programs and functions will be compiled with gcc 4.8.4 using the flags -Wall -Werror -Wextra and -pedantic
* All your files should end with a new line
* A README.md file, at the root of the folder of the project is mandatory
* Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
* You are not allowed to use global variables
* No more than 5 functions per file
* The only C standard library functions allowed are malloc, free and exit. Any use of functions like printf, puts, calloc, realloc etc… is forbidden
* You are allowed to use _putchar
* You don’t have to push _putchar.c, we will use our file. If you do it won’t be taken into account
* In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
* The prototypes of all your functions and the prototype of the function _putchar should be included in your header file called holberton.h
* Don’t forget to push your header file
* All your header files should be include guarded

## Tasks
### Mandatory
**[0-binary_to_uint.c](0-binary_to_uint.c)** - Function converts a binary number to an unsinged int
```
$ gcc -Wall -pedantic -Werror -Wextra 0-main.c 0-binary_to_uint.c -o a
$ ./a 
1
5
0
98
402
```

**[1-print_binary.c](1-print_binary.c)** - Function prints the binary representation of a number
```
$ gcc -Wall -pedantic -Werror -Wextra 1-main.c 1-print_binary.c _putchar.c -o b
$ ./b 
0
1
1100010
10000000000
10000000001
```

**[2-get_bit.c](2-get_bit.c)** - Function returns the value of a bit at a given index
```
$ gcc -Wall -pedantic -Werror -Wextra 2-main.c 2-get_bit.c -o c
$ ./c
1
1
0
```

**[3-set_bit.c](3-set_bit.c)** - Function sets the value of a bit to 1 at a given index
```
$ gcc -Wall -pedantic -Werror -Wextra 3-main.c 3-set_bit.c -o d
$ ./d
1056
1024
99
```

**[4-clear_bit.c](4-clear_bit.c)** - Function sets the value of a bit to 0 at a given index
```
$ gcc -Wall -pedantic -Werror -Wextra 4-main.c 4-clear_bit.c -o e
$ ./e
0
0
96
```

**[5-flip_bits.c](5-flip_bits.c)** - Function returns the number of bits needed to flip to get from one number to another
```
$ gcc -Wall -pedantic -Werror -Wextra 5-main.c 5-flip_bits.c -o f
$ ./f
2
5
3
1
```


2020 - All programs written by Juan Granada ([@juangraram](https://twitter.com/juangraram)) at [Holberton School](https://www.holbertonschool.com/)