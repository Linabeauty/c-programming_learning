#include <stdio.h>

/**
 * main - find maximum among three numbers
 *
 * Return: 0 upon successful
 */

int main(void)
{
	int i = 7500;
	int j = 200;
	int k = 700;

	if (i > j)
	{
		printf("The maximum number is %d\n", i);
	}
	else if (j > k)
	{
		printf("The maximum number is %d\n", j);
	}
	else
	{
		printf("The maximum number is %d\n", k);
	}
	return (0);
}
