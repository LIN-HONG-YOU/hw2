#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a;
	double b,c,d;
	for (;;){
		printf("Enter # of hours worked (-1 to end):");
		scanf_s("%d", &a);
		if (a == -1)exit(0);
		printf("Enter hourly rate  of the worker ($00.00):");
		scanf_s("%lf", &b);
		c = a*b;
		d = 40*b + (a - 40)*b*1.5;
		 if (a <= 40){
			printf("Salary is $%.2lf\n\n",c);
		}
		 else{ printf("Salary is $%.2lf\n\n", d); }
	}
	system("pause");
	return 0;
}