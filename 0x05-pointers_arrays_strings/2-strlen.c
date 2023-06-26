#include "main.h"
/**
 * _strlen - prints string length
 * @s: value
 * Return: 0
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
