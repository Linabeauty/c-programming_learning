#include <stdio.h>

/**
 * main - find the sum of all even numbers from 1 to n
 *
 * Return: 0
 */

int main(void)
{
	int x, n, sum = 0;

	printf("Enter the value of n:\n");
	scanf("%d", &n);

	for (x = 2; x <= n; x += 2)
	{
		sum += x;
	}
	printf("Sum of all even numbers from 1 to %d: %d\n", n, sum);
	return (0);
}
