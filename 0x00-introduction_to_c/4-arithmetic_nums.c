#include <stdio.h>

/* c program to perform all arithmetic on two numbers */

int main(void)
{
	int a = 4, b = 5;
	int sum, sub, mul, mod;
	double div;

	/* it will print the final outputof the program */
	printf("\n");
	printf("Addition of %d + %d = %d\n", a, b, sum);
	printf("Subtraction of %d - %d = %d\n", a, b, sub);
	printf("Multiplication of %d * %d = %d\n", a, b, mul);
	printf("Division of %d / %d = %f\n", a, b, div);
	printf("Modulus of %d %% %d = %d\n", a, b, mod);
	return (0);
}
