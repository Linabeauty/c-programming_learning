#include <stdio.h>

/**
 * main - prints out all even numbers from 1 to 100 using while loop
 *
 * Return: Always 0
 */

int main(void)
{
	int number = 1;

	while (number <= 100)
	{
		if ((number % 2) == 0)
		{
			printf("%d\n", number);
		}
		number++;
	}
	return (0);
}
