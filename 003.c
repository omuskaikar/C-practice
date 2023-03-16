#include<stdio.h>
int main()
{
	float centigrade;
	float fahrenheit;
	
	printf("Enter degree in centigrade = ");
	scanf("%f",&centigrade);
	
	//fahrenheit = (centigrade*9/5) + 32;
	//fahrenheit = fahrenheit + 32.0;

	printf("The dgrees in fahrenheit is = %lf\n", (centigrade*9/5) + 32);
	return 0;
}