#include <stdio.h>
#include <math.h>

/**
 * main - count the number of digit in a given selection of data set
 *
 * Return: Always 0
 */

int main(void)
{
	int count = 0;
	long long num;

	printf("Enter a number: ");
	scanf("%lld", &num);

	count = (num == 0) ?1 : (log10(num) + 1);

	printf("Total digits: %d\n", count);
	return (0);
}
