#include <stdio.h>

/**
 * main - this repeatedly execute a targeted statement
 * as long as a given condition is true
 * Return: 0 upon success
 */

int main(void)
{
	int x = 1;

	while (x <= 50)
	{
		printf("%d\n", x);

		x++;
	}
}
