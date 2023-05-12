#include <stdio.h>

/**
 * main - checks if a number can be divided by 5 and 11
 *
 * Return: 0
 */

int main(void)
{
	int x = 22;

	if ((x % 5 == 0) && (x % 11 == 0))
	{
		printf("%d is divisible by 5 and 11\n", x);
	}
	else
	{
		printf("%d is not divisible by 5 and 11\n", x);
	}
	return (0);
}
