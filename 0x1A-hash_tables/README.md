# 0x1A. C - Hash tables

## Overview
This is a project on hash tables, hash functions, collisions, and other topics related to the hash table data structure. Programs will be written in C

## Requirements
### C Scripts
* Allowed editors: `vi`, `vim`, `emacs`
* All your files will be compiled on Ubuntu 14.04 LTS
* Your programs and functions will be compiled with gcc 4.8.4 using the flags `-Wall -Werror -Wextra and -pedantic`
* All your files should end with a new line
* Your code should use the Betty style. It will be checked using `betty-style.pl` and `betty-doc.pl`
* You are not allowed to use global variables
* No more than 5 functions per file
* You are allowed to use the C standard library
* The prototypes of all your functions should be included in your header file called `hash_tables.h`
* All your header files should be include guarded

## Tasks
### Mandatory
**[0-hash_table_create.c](0-hash_table_create.c)** - Creates a has table and returns a pointer to the newly created hash table. The function returns NULL if something went wrong.
```
vagrant:0x19-hash_tables$ ./a
0x709020
```

**[1-djb2.c](1-djb2.c)** - Write a hash function implementing the djb2 algorithm. We can copy and paste the function from [here](https://intranet.hbtn.io/rltoken/ZBHQ6JQMB8OAyxuSPirqxQ)
```
vagrant:0x19-hash_tables$ ./b
6953392314605
3749890792216096085
249897947298854166
```

**[2-key_index.c](2-key_index.c)** - Gives the index of a key. It uses the `hash_djb2` function written earlier and returns the index at which the key/value pair should be stored in the array of the hash table.
```
vagrant:0x19-hash_tables$ ./c
6953392314605
237
3749890792216096085
341
5861846
470
```

**[3-hash_table_set.c](3-hash_table_set.c)** - Adds an element to the hash table - if there is a collision, it adds a new node at the beginning of the list. Otherwise, it returns 1 upon success and 0 otherwise.

**[4-hash_table_get.c](4-hash_table_get.c)** - Function retrieves the value associated with a key and returns it, or NULL if the key is not found.
```
vagrant:0x19-hash_tables$ ./e
python:awesome
Jennie:and Jay love asm
N:queens
Asterix:Obelix
Betty:DHK
98:Battery Street
c:isfun
javascript:(null)
```

**[5-hash_table_print.c](5-hash_table_print.c)** - Function prints the hash table and prints the key/balue pair in the order they appear in the array. If the hash table does not exist, print nothing.
```
vagrant:0x19-hash_tables$ ./f
{}
{'Betty': 'Holberton', 'python': 'awesome', 'Jennie': 'and Jay love asm', '98': 'Battery Street', 'N': 'queens', 'c': 'fun', 'Asterix': 'Obelix'}
```

**[6-hash_table_delete.c](6-hash_table_delete.c)** - Function deletes the hash table
```
vagrant:0x19-hash_tables$ valgrind ./g
==6621== Memcheck, a memory error detector
==6621== Copyright (C) 2002-2013, and GNU GPL'd, by Julian Seward et al.
==6621== Using Valgrind-3.10.1 and LibVEX; rerun with -h for copyright info
==6621== Command: ./g
==6621== 
{'Betty': 'Holberton', 'mentioner': 'Jennie', 'hetairas': 'Jennie Z Chu', 'python': 'awesome', 'Jennie': 'and Jay love asm', '98': 'Battery Street', 'N': 'queens', 'c': 'fun', 'Tim': 'Britton', 'Asterix': 'Obelix'}
==6621== 
==6621== HEAP SUMMARY:
==6621==     in use at exit: 0 bytes in 0 blocks
==6621==   total heap usage: 37 allocs, 37 frees, 8,646 bytes allocated
==6621== 
==6621== All heap blocks were freed -- no leaks are possible
==6621== 
==6621== For counts of detected and suppressed errors, rerun with: -v
==6621== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)
```

2020 - All programs written by Juan Granada ([@juangraram](https://twitter.com/JuanGraRam)) at [Holberton School](https://www.holbertonschool.com/)