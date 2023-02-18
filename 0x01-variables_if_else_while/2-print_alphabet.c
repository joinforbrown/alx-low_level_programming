#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Write a program that prints the alphabet in lowercase, followed by a new line.
 *        
 * 
 * Return: Always 0.
*/

int main() {
    char c;
    for (c = 'A'; c <= 'Z'; ++c)
        printf("%c ", c);
    return 0;
}

