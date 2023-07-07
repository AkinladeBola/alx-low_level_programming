#include <stdio.h>
#include "main.h"

/**
 * _atoi - converts string to integer
 * @s: string to be converted
 *
 * Return: int converted to string
 */
int _atoi(char *s)
{
	int i, a, n, len, j, digit;

	i = 0;
	a = 0;
	n = 0;
	len = 0;
	j = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;

	while (i < len && j == 0)
	{
		if (s[i] == '-')
			++a;

		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';
			if (a % 2)
				digit = -digit;
			n = n * 10 + digit;
			j = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			j = 0;
		}
		i++;
	}

	if (j == 0)
		return (0);

	return (n);
}

/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments4
 *
 * Return: 0 if success, 1 if not
 */
int main(int argc, char *argv[])
{
	int result, num1, num2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);
	result = num1 * num2;

	printf("%d\n", result);

	return (0);
}
