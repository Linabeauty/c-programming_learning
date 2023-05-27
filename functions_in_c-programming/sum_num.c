#include <stdio.h>

/**
 * main - how to declare a function in c programming
 * @a: First integar
 * @b: Second integar
 *
 * Return: Always successful
 */

int sum(int a, int b)
{
	int ans = a + b;

	return (ans);
}
int main(void)
{
	int a = 30, b = 50, result;

	result = sum(a, b);
	printf("Result = %d\n", result);

	return (0);
}
