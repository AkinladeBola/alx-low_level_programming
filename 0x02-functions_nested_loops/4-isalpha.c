#include "main.h"
/**
 * _isalpha - checks if its an alphabet
 * @c:character to be checked
 * Return: returns 1 if its an alphabet and 0 if not
 */
int _isalpha(int c)
{
	if ((c >= 65 && 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
