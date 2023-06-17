#include <stdio.h>
/**
 *main - main function
 *
 *Return: returns 0 when ran
 */
int main(void)
{
	int i;
	char w;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
	}
	for (w = 'a'; w <= 'f'; w++)
	{
		putchar(w);
	}
	putchar('\n');
	return (0);
}
