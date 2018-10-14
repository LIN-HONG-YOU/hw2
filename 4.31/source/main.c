#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i, j;
	for (i = 1; i <= 9; i++){
		for (j = 1; j <= 9; j++){
			if (i + j <= 5 || i - j <= -5 || i - j >= 5 || i + j >= 15){
				printf(" ");
			}
			else{ printf("*"); }

		}
		printf("\n");
	}
	system("pause");
	return 0;
}