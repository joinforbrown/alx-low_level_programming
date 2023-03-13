# 0x0B. C - malloc, free

## Learning Objectives

1 What is the difference between automatic and dynamic allocation
2 What is malloc and free and how to use them
3 Why and when use malloc
4 How to use valgrind to check for memory leak

## Requirements

+ Allowed editors: vi, vim, emacs
+ All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
+ All your files should end with a new line
+ A README.md file, at the root of the folder of the project is mandatory
+ Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
+ You are not allowed to use global variables
+ No more than 5 functions per file
+ The only C standard library functions allowed are malloc and free. Any use of functions like printf, puts, calloc, realloc etc… is forbidden
+ You are allowed to use _putchar
+ You don’t have to push _putchar.c, we will use our file. If you do it won’t be taken into account
+ In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
+ The prototypes of all your functions and the prototype of the function _putchar should be included in your header file called main.h
+ Don’t forget to push your header file

## Tasks

0. Write a function that creates an array of chars, and initializes it with a specific char.
1. Write a function that returns a pointer to a newly allocated space in memory, which contains a copy of the string given as a parameter.
2. Write a function that concatenates two strings.
3. Write a function that returns a pointer to a 2 dimensional array of integers.
4. Write a function that frees a 2 dimensional grid previously created by your alloc_grid function.
5. Write a function that concatenates all the arguments of your program.
6. Write a function that splits a string into words.
