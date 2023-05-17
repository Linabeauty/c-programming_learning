#include <stdio.h>

/**
 * main - sum all the natural numbers in a given selection
 *
 * Return: successful
 */

int main(void)
{
	int n, count = 1, sum = 0;

	printf("Enter a positive number:\n");
	scanf("%d", &n);

	while (count <= n)
	{
		sum = sum + count;
			count++;
	}
	printf("sum = %d\n", sum);
	return (0);
}
