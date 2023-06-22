#include <unistd.h>

/**
 * _putchar - print char to stdout
 * @c: character to print
 *
 * Return: success 1
 * on error, -1 is returned
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
