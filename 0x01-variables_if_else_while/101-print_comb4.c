#include <stdio.h>
/**
 *main - main function
 *
 * Return: returns 0 only when successful
 */
int main(void)
{
	int k, u, n;

	for (k = '0'; k < '9'; k++)
	{
		for (u = k + 1; u <= '9'; u++)
		{
			for (n = u + 1; n <= '9'; n++)
			{
			if ((u != k) != n)
			{
			putchar(k);
			putchar(u);
			putchar(n);
			if (k == '7' && u == '8')
				continue;
			putchar(',');
			putchar(' ');
			}
			}
		}
	}
	putchar('\n');
	return (0);
}
