#include <unistd.h>

/**
 * _putchar - writes the c character to stdout
 * @c: character to print
 *
 * Return: 1
 * on error, -1 is returned, errno is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
