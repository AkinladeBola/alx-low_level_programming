#include "main.h"
/**
 * print_sign - prints number
 * @n: number to be checked
 * Return: returns 1 if positive, -1 if not
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
