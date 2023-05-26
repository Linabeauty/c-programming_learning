#include <stdio.h>

/**
 * main - print even numbers in a natural selection from 1 to n
 *
 * Return: Always successful
 */

int main(void)
{
	int n = 1;

	printf("Enter the value of n: ");
	scanf("%d", &n);

	while (n <= 100)
	{
		if ((n % 2) == 0)
		{
			printf("%d\n", n);
		}
		n++;
	}
	return (0);
}
