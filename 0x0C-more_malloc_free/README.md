# 0x0C. C - More malloc, free

## Overview
The goal of this project was to learn how to use the `exit` function and how to use the function `calloc` and `realloc`

## Requirements
### C Scripts
* Allowed editors: `vi`, `vim`, `emacs`
* All your files will be compiled on Ubuntu 14.04 LTS
* Your programs and functions will be compiled with gcc 4.8.4 using the flags `-Wall -Werror -Wextra and -pedantic`
* All your files should end with a new line
* Your code should use the Betty style. It will be checked using `betty-style.pl` and `betty-doc.pl`
* You are not allowed to use global variables
* No more than 5 functions per file
* You are not allowed to use the standard library. Any use of functions like `printf`, `puts`, etc… is forbidden
* You are allowed to use [`_putchar`](https://github.com/holbertonschool/_putchar.c/blob/master/_putchar.c)
* The prototypes of all your functions should be included in your header file called `holberton.h`
* All your header files should be include guarded

## Tasks
### Mandatory
**[0-malloc_checked.c](0-malloc_checked.c)** - This function allocates a space in memory with malloc
```
$ gcc -Wall -pedantic -Werror -Wextra 0-main.c 0-malloc_checked.c -o a
$ ./a 
0x1e39010
0x1e39830
0x7f31f6c19010
$ echo $?
98
```

**[1-string_nconcat.c](1-string_nconcat.c)** - Concatenates two strings
```
$ gcc -Wall -pedantic -Werror -Wextra 1-main.c 1-string_nconcat.c -o b
$ ./b 
Holberton School
```

**[2-calloc.c](2-calloc.c)** - Allocates memory using malloc for an array of elements of a specific size each and initializes the memory locations to zero
```
$ gcc -Wall -pedantic -Werror -Wextra 2-main.c 2-calloc.c -o c
$ ./c
0x48 0x6f 0x6c 0x62 0x65 0x72 0x74 0x6f 0x6e 0x20
0x53 0x63 0x68 0x6f 0x6f 0x6c 0x21 0x20 0x3a 0x29
0x0a 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x21
```

**[3-array_range.c](3-array_range.c)** - Creates an array of integers from minimum to maximum ordered from minimum to maximum
```
$ gcc -Wall -pedantic -Werror -Wextra 3-main.c 3-array_range.c -o d
$ ./d 
0x00 0x01 0x02 0x03 0x04 0x05 0x06 0x07 0x08 0x09
0x0a
```

### Advanced
**[100-realloc.c](100-realloc.c)** - Reallocates a memory block using malloc and free
```
$ gcc -Wall -pedantic -Werror -Wextra 100-main.c 100-realloc.c -o e
$ ./e 
0x62 0x62 0x62 0x62 0x62 0x62 0x62 0x62 0x62 0x62
0x62 0x62 0x62 0x62 0x62 0x62 0x62 0x62 0x62 0x62
0x62 0x62 0x62 0x62 0x62 0x62 0x62 0x62 0x62 0x62
0x62 0x62 0x62 0x62 0x62 0x62 0x62 0x62 0x62 0x62
0x62 0x62 0x62 0x62 0x62 0x62 0x62 0x62 0x62 0x62
0x62 0x62 0x62 0x62 0x62 0x62 0x62 0x62 0x62 0x62
0x62 0x62 0x62 0x62 0x62 0x62 0x62 0x62 0x62 0x62
0x62 0x62 0x62 0x62 0x62 0x62 0x62 0x62 0x62 0x62
0x62 0x62 0x62 0x62 0x62 0x62 0x62 0x62 0x62 0x62
0x62 0x62 0x62 0x62 0x62 0x62 0x62 0x62
```

2020 - All programs written by Juan Granada ([@juangraram](https://twitter.com/JuanGraRam)) at [Holberton School](https://www.holbertonschool.com/)