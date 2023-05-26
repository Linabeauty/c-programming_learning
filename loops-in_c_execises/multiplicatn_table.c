#include <stdio.h>

/**
 * main - print out multiplication table of any given number
 *
 * Return: Always successful
 */

int main(void)
{
	int i, num;

	printf("Enter number to print table: ");
	scanf("%d", &num);

	for (i = 1; i <= 12; i++)
	{
		printf("%d * %d = %d\n", num, i, (num * i));
	}
	i++;
}
