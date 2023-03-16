#include <stdio.h>
#include <string.h>
#include <math.h>


// int main() {
// char *str = "Manish Uskaikar", string[50];
//
// printf("Hello World %s\n", str);
// scanf("%s", string);
//
// printf("Power = %f\n", pow(5, 2));
// printf("Hello World %s", string);
// return 0;
// }

// store values in 2 dimensional array

int main()
{
	int length = 30;
	int breadth = 20;
	char c;

	do {
		printf("I am inside\n");

		_flushall();

		printf ("Enter Length and Breath to calculate : ");
		scanf("%d %d", &length, &breadth);
		printf("THE AREA OF THE RECTANGLE IS %d\n", length * breadth);

		_flushall();

		printf("Do you want to continue [Y/N]: ");
		scanf("%c", &c);
	} while (c == 'Y' || c == 'y');	

	return 0;
}