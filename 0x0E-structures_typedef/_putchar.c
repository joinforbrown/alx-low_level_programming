#include <unistd.h>

/**
 * _putchar - write the chareter c to stand out 
 * @C: the chareter to print out 
 *
 * Return: on success 1.
 * on error, -1 is returned and error is set approprately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
