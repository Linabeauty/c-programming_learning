#include <stdio.h>

/* main - program that convert temp. in fahrenheit to celsius */

int main()
{
	float Fahrenheit, Celsius;
	Fahrenheit = 1000;

	Celsius = ((Fahrenheit-32)*5)/9;
	printf("\nTemperature in Celsius is : %f\n", Celsius);
	return (0);
}
