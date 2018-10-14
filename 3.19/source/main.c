#include <stdio.h>
#include <stdlib.h>

int main()
{
	int c;
	double a, b, d;

	for (;;){
		printf("Enter loan principal(-1 to end):");
		scanf_s("%lf", &a);
		if (a == -1)exit(0);
		printf("Enter interest rate:");
		scanf_s("%lf", &b);
		printf("Enter term of the loan in days:");
		scanf_s("%d", &c);
		d = (a*b*c) / 365;
		printf("The interest charge is $%.2lf\n\n", d);
	}
	system("pause");
	return 0;
}