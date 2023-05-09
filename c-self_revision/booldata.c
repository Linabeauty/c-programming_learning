#include <stdio.h>
#include <stdbool.h>
/**
 * main - compare a boolean variable  of voting ag
 * Return: 1 if successfull, 0 if it fails
 */

int main(void)
{
	int myAge = 33, votingAge = 18;

	if (myAge >= votingAge)
	{
		printf("Wow!!! Old enough to cast your vote.\n");
	}
	else
	{
		printf("Oh No!!! You can try in some years later.\n");
	}
	return (0);
}
