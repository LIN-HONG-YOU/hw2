#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a;
	double b, c, d, e,f;
	for (;;){
		printf("Enter account number(-1 to end):");
		scanf_s("%d", &a);
		if (a == -1){ exit(0); }
		else{
			printf("Enter begining account:");
			scanf_s("%lf", &b);
			printf("Enter total charges:");
			scanf_s("%lf", &c);
			printf("Enter total credits:");
			scanf_s("%lf", &d);
			printf("Enter total limits:");
			scanf_s("%lf", &e);
		}
		f = b + c - d;
		if (f > e){
			printf("Account:     %d\n", a);
			printf("Credit limit:%.2lf\n", e);
			printf("Blance:      %.2lf\n", f);
			printf("Credit Limit Exceeded.\n\n");
		}
		else{ printf("\n"); }
	}
	system("pause");
	return 0;
}