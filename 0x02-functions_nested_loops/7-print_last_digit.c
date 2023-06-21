#include "main.h"
/**
 * print_last_digit - last digit
 * @n: number
 * Return: last digit
 */
int print_last_digit(int n)
{
	int rem;

	rem = n % 10;
	if (rem < 0)
	{
		_putchar(-rem + 48);
		return (-rem);
	}
	else
	{
		_putchar(rem + 48);
		return (rem);
	}
}
