#include <stdio.h>

/**
 * main - prints natural numbers from 1 to n in reversed order
 *
 * Return: Always 0
 */

int main(void)
{
	int n;

	printf("Enter the value of n: ");
	scanf("%d", &n);

	while (n >= 0)
	{
		printf("%d\n", n);
		n--;
	}
	return (0);
}
