#include "main.h"

/**
 * _isdigit - checks if numbers are 0-9
 *@c: char to check
 *
 * Return: 0 or 1 if numbers are 0-9
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

