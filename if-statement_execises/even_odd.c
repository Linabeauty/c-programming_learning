#include <stdio.h>

/**
 * main - checks if number is even or odd
 *
 * Return: o
 */

int main(void)
{
	int n;

	printf("User enter a number :\n");
	scanf("%d", &n);

	if (n % 10 == 0)
	{
		printf("%d is Even\n", n);
	}

	else
	{
		printf("%d is Odd\n", n);
	}
	return (0);
}
