#include <stdio.h>
/**
 *main - main entry point
 *Program that prints alphabets
 *
 * Return: returns xero always
 */
int main(void)
{
	char b;

	for (b = 'a'; b <= 'z'; b++)
	{
		putchar(b);
	}
	for (b = 'A'; b <= 'Z'; b++)
	{
		putchar(b);
	}
	putchar('\n');
	return (0);
}
