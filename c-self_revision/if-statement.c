#include <stdio.h>

/**
 * main - this to find which is true or false
 * Return: 1 if the condition is true, 0 if false
 */

int main(void)
{
	int love;
	int lust;

	if (love > lust)
	{
		printf("Oh Wow!!! Debo is still faithful.\n");
	}
	else if (love < lust)
	{
		printf("Great!!! Debo is serching for side chic.\n");
	}
	else
	{
		printf("Great!!! Debo is a bloodly cheat.\n");
	}
	return (0);
}
