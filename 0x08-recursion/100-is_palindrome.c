#include "main.h"

int check_pal(char *s, int i, int lngth);
int _strlen_recursion(char *s);

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to reverse
 *
 * return: 1 if its successful, 0 if it isnt
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_pal(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - return length of a string
 * @s: string to calculate the length
 *
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * check_pal - checks the character by recursion for palindrome
 * @s: string to be checked
 * @i: iterator
 * @lngth: length of the string
 *
 * Return: 1 if palindrome is successful, 0 if it isnt
 */
int check_pal(char *s, int i, int lngth)
{
	if (*(s + i) != *(s + lngth - 1))
		return (0);
	if (i >= lngth)
		return (1);
	return (check_pal(s, i + 1, lngth - 1));
}

