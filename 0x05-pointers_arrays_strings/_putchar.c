#include <unistd.h>
/**
 * _putchar - prints char to stdout
 * @c: character
 * Return: 0
 * .
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
