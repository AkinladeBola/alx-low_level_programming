#include <stdio.h>
/**
 * main - main entry
 * This program prints all aphabets except e and q
 *
 *Return: returns 0
 */
int main(void)
{
	char b;

	for (b = 'a'; b <= 'z'; b++)
	{
		if (b != 'e' && b != 'q')
		{
			putchar(b);
		}
	}
	putchar('\n');
	return (0);
}
