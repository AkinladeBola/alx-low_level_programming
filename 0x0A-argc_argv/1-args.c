#include <stdio.h>
#include "main.h"

/**
 * main - prints number of argument passed to program
 * @argc: number of argument
 * @argv: array of argument
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
(void) argv; /*ignore argv*/
	printf("%d\n", argc - 1);

	return (0);
}
