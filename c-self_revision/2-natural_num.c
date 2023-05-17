#include <stdio.h>
/**
 * main -print natural numbers in reversed order
 * Return: 0
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
