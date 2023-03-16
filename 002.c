#include <stdio.h>
#include "customfunction.h"
int main()
{ 
	float radius;
	float pi=3.14;
	float height;

	//char string[50];
	// gets(string);
	// puts(string);

	printf("enter the radius=",radius);
	scanf("%f",&radius);
	printf("enter the height=",height);
	scanf("%f",&height);
	printf("THE AREA OF THE CIRCLE IS =%lf\n", (double)(pi * radius * radius));

	printf("THE VOLUME OF THE GIVEN CYLINDER IS=%lf\n", (double)(pi*radius*radius*height));
	return 0;
} 
