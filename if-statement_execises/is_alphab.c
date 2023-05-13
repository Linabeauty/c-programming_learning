#include <stdio.h>
#include <ctype.h>

/**
 * main - checks if a character is alphabet or not
 *
 * Return: 0
 */

int main(void)
{
	char c;

	printf("Enter a character:");
	scanf("%c", &c);

	/* check if a character is alphabet */
	if (isalpha(c))
	{
		printf("%c is an Alphabet\n", c);
	}
	/*otherwise, the character is not an alphabet */
	else
	{
		printf("%c is not an Alphabet\n", c);
	}
	return (0);
}
