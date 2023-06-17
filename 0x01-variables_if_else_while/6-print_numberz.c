#include <stdio.h>
/**
 *main - main entry
 *
 * Return: returns 0 errors if ran successfully
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
