#include <stdio.h>

/**
 * main - checks the temputre outside if is too cold or too hot
 *
 * Return: 1 if successful, 0 if it fails
 */

int main(void)
{
	int temp = 12;

	printf("Enter the temperature value: ");
	scanf("%d", &temp);

	if (temp >= 25 && temp <= 35)
	{
		printf("It's a perfect time to go out!\n");
	}
	else if (temp > 35)
	{
		printf("It's too hot to go out now. please stay in doors!\n");
	}
	else if (temp < 25)
	{
		printf("It's freezing and too cold to go out now. stay warm at home!\n");
	}
	return (0);
}
