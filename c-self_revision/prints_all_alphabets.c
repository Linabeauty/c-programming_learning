#include <stdio.h>

/**
 * main - prints all alphabets from A to Z
 *
 * Return: Always 0 upon success
 */

int main(void)
{
	char ch = 'a';

	printf("Alphabets from a - z are: \n");
	while (ch <= 'z')
	{
		printf("%c\n", ch);
		ch++;
	}
	return (0);
}
