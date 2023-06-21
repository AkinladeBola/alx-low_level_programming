#include <stdio.h>
/**
 * main - main function
 *
 * Return: outputs 0 when ran successfulyy
 */
int main(void)
{
	int i, j;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
			j += i;
	}
	printf("%d\n", j);
	return (0);
}
