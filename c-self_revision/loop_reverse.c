#include <stdio.h>

/**
 * main - print natural numbers in reversed order
 *
 * Return: Always 0
 */

int main(void)
{
	int x;

	printf("Enter the value of x: ");
	scanf("%d", &x);
	while (x >= 0)
	{
		if (x == 10)
		{
			x--;
			continue;
		}
		printf("%d\n", x);
		x--;
	}
	return (0);
}
