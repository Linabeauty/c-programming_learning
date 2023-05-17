#include <stdio.h>

/**
 * main - prints all odd numbers between 1 to 100
 *
 * Return: Always 0
 */
int main(void)
{
	int a = 1;

	while (a <= 100)
	{
		if (a % 2 == 1)
		{
			printf("%d\n", a);
		}
		a++;
	}
	return (0);
}
