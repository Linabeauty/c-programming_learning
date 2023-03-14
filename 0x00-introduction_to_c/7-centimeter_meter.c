#include <stdio.h>

/* Convert centimeter to meter and kilometer */
int main(void)
{
	float c, m, k;
	/* c= centimeter, m= meter, k = kilometer */
	printf("Enter the length in centimeter ::\n");
	scanf("%f", &c);

	/*  It will convert length in centimeter to meter and kilometer */
	m = (float)(c/100);
	k = (float)(c/100000);
	
	/* Itwill print the final output */
	printf("\nLength in meter = %f meter \n", m);
	printf("Length in kilometer = %f kilometer \n", k);
	return (0);
}
