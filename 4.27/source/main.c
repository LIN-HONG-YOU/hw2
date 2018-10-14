#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a, b,c,d;
	printf("所有斜邊小於500且符合勾股定理的三邊值\n");
	for (c = 1; c <= 500; c++){
		for (a= 1; a<= 500; a++)
			for (b = 1; b <= 500; b++){
			if (c*c == a*a+b*b && a<b){
				printf("%d %d %d\n", a, b, c);
			}
		}
	}
	system("pause");
	return 0;
}