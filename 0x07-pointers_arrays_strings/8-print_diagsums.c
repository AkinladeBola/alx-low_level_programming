#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - function that prints sum of the two diagonals
 * of a square matrix of integers
 * @a: input
 * @size: input
 * Return: 0
 */
void print_diagsums(int *a, int size)
{
	int su1, su2, x;

	su1 = 0;
	su2 = 0;

	for (x = 0; x < size; x++)
	{
		su1 = su1 + a[x * size + x];
	}

	for (x = size - 1; x >= 0; x--)
	{
		su2 += a[x * size + (size - x - 1)];
	}

	printf("%d, %d\n", su1, su2);
}
