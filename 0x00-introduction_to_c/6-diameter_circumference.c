#include <stdio.h>

/* program to calculate the diameter, area and circumference */

int main()
{
	int radius, diameter, circumference, area;
	/* r = radius, d = diameter, c = circumference, a = area */

	printf("Enter the radius of the circle\n");
	scanf("%d", &radius);

	/* Calculate the diameter, circumference and the area and print final output */
	printf("\n");
	printf("Diameter :: = %d units \n");
	printf("Circumference :: = %d units \n");
	printf("Area :: = %d sq. units ");
	return (0);
}
