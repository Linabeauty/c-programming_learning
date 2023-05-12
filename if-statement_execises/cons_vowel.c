#include <stdio.h>

/**
 * main - checks if a character is vowel or consonant sound
 * @author: Caroline Abamiyo
 * Return: 0
 */

int main(void)
{
	char x;

	printf("Enter any character: ");
	scanf("%c", &x);

	if (x == 'a' || x == 'i' || x == 'e' || x == 'o' || x == 'u' || x == 'A' || x == 'I' || x == 'E' || x == 'O' || x == 'U')
	{
		printf("%c is a vowel sound\n", x);
	}
	else
	{
		printf("%c is a consonant sound\n", x);
	}
	return (0);
}
