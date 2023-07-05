#include "main.h"

int actual_prime(int n, int i);

/**
 * is_prime_number - function that checks if an is also a prime number
 * @n: number to be evaluated
 *
 * Return: 1 if n is a prime number and 0 if it is not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}

/**
 * actual_prime - calculates if a number is prime by recursion
 * @n: number to evaluate
 * @i: iterator
 *
 * Return: 1 if n is prime, 0 if it isnt
 */
int actual_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (actual_prime(n, i - 1));
}