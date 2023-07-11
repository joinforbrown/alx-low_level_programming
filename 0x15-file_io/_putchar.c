#include <unistd.h>
#include "main.h"

/***
 * @c: the char to print.
 * putchar - write c to stdout.
 *
 * Return: 1.
 * error, -1 is retured.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
