#include <stdio.h>
#include <stdlib.h>

int main()
{
	int b,c,i,j;
	printf("Please enter the length:");
	scanf_s("%d", &b);
	printf("Please enter the breadth:");
	scanf_s("%d", &c);
	for (j = 1; j <= b; j++){
		for (i = 1; i <= c; i++){
			if (j == 1 || i== c || i == 1 ||j==b){
				printf("+");
			}

			else{
				printf(" ");
			}
		}
		printf("\n");
	}
	system("pause");
	return 0;
}