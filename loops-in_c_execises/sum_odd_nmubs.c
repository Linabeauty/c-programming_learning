#include <stdio.h>

/**
 * main - find the sum of all odd numbers from 1 to n
 *
 * Return: Always
 */

int main(void)
{
	int i, n, sum = 0;

	printf("Enter any number: ");
	scanf("%d", &n);

	for (i = 1; i <= n; i += 2)
	{
		sum += i;
	}
	printf("Sum of odd numbers = %d\n", sum);
	return (0);
}
