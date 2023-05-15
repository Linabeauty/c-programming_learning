#include <stdio.h>

/**
 * main - print natural numbers from 1 to n
 *
 * Return: Always 0
 */

int main(void)
{
	int n;
	int x = 1;

	printf("Enter the value of n: ");
	scanf("%d", &n);

	while (x <= n)
	{
		printf("%d\n", x);
		x++;
	}
	return (0);
}
