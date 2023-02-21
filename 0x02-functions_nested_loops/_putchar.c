#include <unistd.h>

/**
 *  _putchar - writes the characters c to stdout
 *  @c: the character to print.
 *  Return: on success 1.
 *  on error: -1 is returned, and the error is set approprately.
 */

int _putchar(char c)
{
	return(write(1, &c, 1));
}
