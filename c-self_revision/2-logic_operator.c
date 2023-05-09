#include <stdio.h>

/**
 * main - confirm the statement of the variables if one the condition
 * is true or not
 *
 * Return: 0 upon successful -1 if it fails
 */

int main(void)
{
	int i = 100, j = 150;

	if (i < 90 || j < 200)
		printf("Wow!!! Great Job, You are Doing Well.\n");
	else
		printf("Oh No!!! You Can Try Some Other Time.\n");
	return (0);
}
