#include "main.c"
/**
 * _islower - main function
 *@c: characters to be checked
 * Return: returns 1 in lowercase and 0 for anything else
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
