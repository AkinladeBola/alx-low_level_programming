#include <stdio.h>
/**
 *main - main entry
 *
 *Return: returns 0 everytime
 */
int main(void)
{
	int k;

	for (k = '0'; k <= '9'; k++)
	{
		putchar(k);
		if (k != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
