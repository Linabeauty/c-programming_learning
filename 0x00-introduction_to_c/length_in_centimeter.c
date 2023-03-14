#include <stdio.h>

int main(void)
{
	float c, m, k;
	/* c = centimeter, m = meter, k = kilometer */

	printf("Enter the length in centimeter::\n");
	scanf("%f", &c);

	/* It will convert centimeters into metres and kilometers */
	m = (float)(c / 100);
	k = (float)(c / 100000);

	/* It will print the final output */
	printf("\nLength in Meter = %f meter \n", m);
	printf("Length in Kilometer = %f kilometer\n", k);
	return (0);
}
