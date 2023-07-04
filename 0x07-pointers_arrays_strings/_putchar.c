#include <unistd.h>

/**
 * _putchar - writes the char c to stdout
 * @c: character being print
 *
 * Return: 1
 * on error, -1 returned, errno is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
