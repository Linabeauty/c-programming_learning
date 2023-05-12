#include <stdio.h>

/**
 * main - checks if the year entered by the user is leap year or not
 *
 * Return: 0
 */

int main(void)
{
	int year;

	printf("Enter a year:");
	scanf("%d", &year);

	if (((year % 4 == 0) && ((year % 400 == 0) || (year % 100 != 0))))
	{
		printf("%d Wow!!! is a leap year\n", year);
	}
	else
	{
		printf("%d Oh no!!! is not leap year\n", year);
	}
	return (0);
}
