#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the c character to stdout
 * @c: character to print
 *
 * Return: 1 on success
 * on error, -1 is returned and errno is set
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
