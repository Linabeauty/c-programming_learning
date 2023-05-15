#include <stdio.h>

/**
 * main - print natural number in reversed form from n to 0
 *
 * Return: Successful
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
