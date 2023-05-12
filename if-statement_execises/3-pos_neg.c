#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - prints a random number and decide if is positive, negative or zero
 *
 * Return: 0 upon success
 */

int main(void)
{
	int x;

	srand(time(0));
	x = rand() - RAND_MAX / 2;

	if (x > 0)
	{
		printf("%d is Positive\n", x);
	}

	else if (x < 0)
	{
		printf("%d is Negative\n", x);
	}

	else
	{
		printf("%d is Zero\n", x);
	}
	return (0);
}
