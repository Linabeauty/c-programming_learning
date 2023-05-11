#include <stdio.h>

/**
 * main - skip a certain number while executing the condition
 * Return: 0
 */

int main(void)
{
	int x = 1;

	while (x <= 20)
	{
		if (x == 10)
		{
			x++;
			continue;
		}
		printf("%d\n", x);
		x++;

	}
	return (0);
}
