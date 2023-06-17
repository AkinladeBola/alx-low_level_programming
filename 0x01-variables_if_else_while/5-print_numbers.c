#include <stdio.h>
/**
 *main - main entry
 *
 * Return: returns 0 if program is run
 */
int main(void)
{
	int k;

	for (k = 0; k < 10; k++)
	{
		putchar(k + '0');
	}
	putchar('\n');
	return (0);
}
