#include "main.h"
#include <stdlib.h>
/**
 * str_concat - gets end of input, add together for size
 * @s1: input one to concatenate
 * @s2: input two to concatenate
 * Return: concat of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *conc;
	int i, ci;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	i = ci = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[ci] != '\0')
		ci++;
	conc = malloc(sizeof(char) * (i + ci + 1));

	if (conc == NULL)
		return (NULL);
	i = ci = 0;
	while (s1[i] != '\0')
	{
		conc[i] = s1[i];
		i++;
	}

	while (s2[ci] != '\0')
	{
		conc[i] = s2[ci];
		i++, ci++;
	}
	conc[i] = '\0';
	return (conc);
}
