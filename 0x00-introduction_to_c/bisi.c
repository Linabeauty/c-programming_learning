#include <stdio.h>

/* main - write a c program to find which number is the highest */
 
int main(void)
{
	int x = 200, y = 250, z = 50;

	if (x > y || y > z)
		printf("x is the greatest\n");
	if (y > x || y > z)
		printf("y is the greatest\n");
	if (z > x || z > y)
		printf("z is the greatest\n");
	return (0);
}
