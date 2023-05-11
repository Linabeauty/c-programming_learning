#include <stdio.h>

/**
 * main - skip word in the condition given
 *
 * Return: 0
 */
int main(void)
{
	int j = 1;

	while (j <= 15)
	{
		if (j == 7)
		{
			j++;
			continue;

		}

		printf("%d\n", j);
		j++;
	}
	return (0);
}
