#include <stdio.h>
#include <stdlib.h>

int main()
{
//ª½ªº
	int i, j;
	printf("(A)\n");
	for (i = 1; i <= 10; i++){
		for (j = 1; j <= i; j++){
			printf("*");
		}
		printf("\n");
	}
	for (i = 1; i <= 5; i++){
		printf("\n");
	}

	printf("(B)\n");
	for (i = 1; i <= 10; i++){
		for (j = 10; j >= i; j--){
			printf("*");
		}
		printf("\n");
	}
	for (i = 1; i <= 5; i++){
		printf("\n");
	}

	printf("(C)\n");
	for (i = 1; i <= 10; i++){
		for (j = 1; j <= 10; j++){
			if (i > j){
				printf(" ");
			}
			else{ printf("*"); }
		}
		printf("\n");
	}
	for (i = 1; i <= 5; i++){
		printf("\n");
	}

	printf("(D)\n");
	for (i = 1; i <= 10; i++){
		for (j = 1; j <= 10; j++){
			if (i + j >= 11){
				printf("*");
			}
			else{
				printf(" ");
			}
		}
		printf("\n");
	}

//¾îªº
		printf("(A)\t\t");
		printf("(B)\t\t");
		printf("(C)\t\t");
		printf("(D)\n");
		for (i = 1; i <= 10; i++){
			for (j = 1; j <= i; j++){
				printf("*");
			}
			for (j = 10; j >= i; j--){
				printf(" ");
			}
			printf("\t");
			for (j = 10; j >= i; j--){
				printf("*");
			}
			for (j = 1; j <= i; j++){
				printf(" ");
			}
			printf("\t");
			for (j = 1; j <= i; j++){
				printf(" ");
			}
			for (j = 10; j >= i; j--){
				printf("*");
			}
			printf("\t");
			for (j = 10; j >= i; j--){
				printf(" ");
			}
			for (j = 1; j <= i; j++){
				printf("*");
			}
			printf("\n");
		}




		system("pause");
		return 0;
	}