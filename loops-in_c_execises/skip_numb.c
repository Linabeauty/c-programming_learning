#include <stdio.h>

/**
 * main - skip a certian number while printing all natural numbers from 1 to n
 *
 * Return: 0
 */

int main(void)
{
	int n;
	int i = 1;

	printf("Enter the value of n: ");
	scanf("%d", &n);
	while (i <= n)
	{
		if (i == 5)
		{
			i++;
			continue;
		}
	printf("%d\n", i);
	i++;
	}
}
