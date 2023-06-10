#include <stdio.h>

/**
 * main - get a string character from a user and output string
 *
 * Return: Always successsful
 */

int main(void)
{
	char firstname[20];

	printf("Enter your first name: \n");
	scanf("%s", firstname);

	printf("Hello Mr %s\n", firstname);
	return (0);
}
