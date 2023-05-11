#include <stdio.h>

/**
 * main - swicth statement helps to reduce the normal
 * way of writing if statement code in a long form
 * @case: Uses case to choose which of the code
 * switch is matched to the requirement
 * @break: Uses it switch between any case or code
 * block that match and execute
 * Return: 0
 */

int main(void)
{
	int age = 15;


	switch (age)
	{
	case 1:
		printf("He is 14\n");
		break;

	case 2:
		printf("He is 15\n");
		break;
	case 3:
		printf("He is 12\n");
		break;
	}

}
