#include <stdio.h>

/**
 * main - skip a certain number in the targeted condition given
 *
 * Return: 0
 */

int main(void)
{
	int i = 1;

	while (i <= 25)
	{
		if (i == 20)
		{
			i++;
			continue;
		}
	printf("%d\n", i);
	i++;

	}
	return (0);
}
