#include <stdio.h>

/**
 * main - prints out all alphabets from a to z
 *
 * Return: 0
 */

int main(void)
{
	char ch = 'a';

	printf("Alphabets a - z are: \n");
	while (ch <= 'z')
	{
		if (ch == 'c')
		{
			ch++;
			continue;
		}
		printf("%c\n", ch);
		ch++;
	}
	return (0);
}
