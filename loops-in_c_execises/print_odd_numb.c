#include <stdio.h>

/**
 * main - print odd number from 1 to 100
 *
 * Return: Always 0
 */

int main(void)
{
	int n = 1;

	printf("Enter the value of n: ");
	scanf("%d", &n);
	while (n <= 100)
	{
		if (n % 2 == 1)
		{
			printf("%d\n", n);
		}
		n++;
	}
	return (0);
}
