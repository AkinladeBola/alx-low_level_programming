#include <stdio.h>
#include "main.h"
/**
 * main - prints name of the program
 * @argc: arguments
 * @argv: array
 * Return: 0 if its successfully executed
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
