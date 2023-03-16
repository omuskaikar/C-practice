#include<stdio.h>

int main() {
	float Principle, Period, ROI;
	float simple_intrest;

	printf("Enter the principle amount = ", Principle); 
	scanf("%f",&Principle);
	printf("Enter tne No of years = ",Period); 
	scanf("%f",&Period);
	printf("Enter the rate of intrest = ",ROI); 
	scanf("%f",&ROI);
	
	simple_intrest = Principle * Period * ROI / 100;
	
	printf("the value of simple intrest is =%f",simple_intrest);
	
	return 0;
}