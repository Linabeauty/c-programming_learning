#include <stdio.h>
#include <stdbool.h>


int main()
{
	int myAge, votingAge = 18;

	printf("Enter age to determine voting age: ");
	scanf("%d", &myAge);

	if (myAge > votingAge)
	{
		printf("Great!!! you are eligible to cast a vote.\n");
	}
	else if (myAge == votingAge)
	{
		printf("Awesome!!! you can cast a vote.\n");
	}
	else
	{
		printf("Oh no!!! you are not eligible to cast a vote. try again in another year!\n");
	}
	return (0);
}
