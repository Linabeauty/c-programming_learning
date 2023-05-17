#include <stdio.h>

/**
 * main - print natural numbers from 1 to n
 *
 * Return: Always 0 if upon success
 */

int main(void)
{
	int i = 1;
	int n;

	printf("Enter the value of n: ");
	scanf("%d", &n);

	while (i <= n)
	{
		printf("%d\n", i);
		i++;
	}
	return (0);
}
