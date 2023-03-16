#include <stdio.h>
#include <string.h>
// int main() {
// 	char name[50] = "Manish Uday Uskaikar";
// 	char *ch;

// 	printf("%c %c %s\n", name[0], *name, name);
// 	ch = name;
// 	ch++;
// 	printf("%c %c %c %s\n", *ch, name[0], *name, name);
// 	return 0;
// }

// 1
// 2 3
// 4 5 6
// 7 8 9 10
// 11 12 13 14 15

int main() {
	int itr, itr_row, itr_col, itr_val=1;
	printf("Enter the no=");
	scanf("%d",&itr);

	for (itr_row = 1; itr_row <= itr; itr_row++) 
	{
		for (itr_col = 1; itr_col <= itr_row; itr_col++) 
		{
			printf("%d\t", itr_val++);
		}
		printf("\n");
	}
	return 0;
}

