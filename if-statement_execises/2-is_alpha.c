#include <stdio.h>
#include <ctype.h>

/**
 * main - check if a character is lowercase or uppercase
 *
 * Return: Always successful 0
 */

int main(void)
{
	char b;

	printf("Enter a character : ");
	scanf("%c", &b);

	/* checks if a character is upper case */
	if (isupper(b))
	{
		printf("%c is uppercase alphabet\n", b);
	}
	/* check if a character is lower case */
	else if (islower(b))
	{
		printf("%c is lowercase alphabet\n", b);
	}
	/* otherwise, the character is not an alphabet */
	else
	{
		printf("%c is not an alphabet\n", b);
	}
	return (0);
}
