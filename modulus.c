#include <stdio.h>
#include <math.h>
int main()
{
	int num;
	float a = 10.1;

	a++;

	printf("%f\n", a);
	printf("enter the number: ");
	scanf("%d", &num);
	
	if(num%97 == 0) {
		printf("the number %d is divisible by 97",num);
	}
	else {
		printf("the given number %d is not divisible by 97",num);
	}
	return 0;
}