#include <stdio.h>
#include <ctype.h>

/**
 * main - checks if a number is alphaet, digit or a special character
 * @author: Caroline Abamiyo
 *
 * Return: 0
 */

int main(void)
{
	char ch;

	printf("Enter a character: ");
	scanf("%c", &ch);

	/* checks if a character is an alphabet */
	if (isalpha(ch))
	{
		printf("%c is an alphabet\n", ch);
	}

	/* check if is a digit */
	else if (isdigit(ch))
	{
		printf("%c is a digit\n", ch);
	}

	/* otherwise, the character is a special character */
	else
	{
		printf("%c is a specialcharacter\n", ch);
	}
	return (0);
}
