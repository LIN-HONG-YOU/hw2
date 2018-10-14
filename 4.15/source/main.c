#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i,j;
	double a,b,c;
	for (i = 1; i <= 5; i++){
		printf("投資金額:$");
		scanf_s("%lf", &a);
		printf("請輸入利率(%%):");
		scanf_s("%lf", &c);
		c = c / 100;
		b = a;
		for (j = 1; j <= 15; j++){
			b = b + (b*c);
		}
		b = b - a;
		printf("15年後可賺$%.2lf\n\n", b);
	}
	system("pause");
	return 0;
}