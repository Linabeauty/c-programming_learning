#include <stdio.h>

/* A program to find the length and breath of a rectangle and also find the parameters */

int main()
{
	float l, w, p;

	printf("Enter the length & width of the rectangle ::\n");
	scanf("%f", &l);
	scanf("%f", &w);
	/* Calculate the parameters of the rectangle */
	p = 2 * (l + w);
	
	/* it will print the final output */
	printf("\nThe parameter of rectangle = %f units ", p);
	return (0);
}
