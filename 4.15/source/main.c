#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i,j;
	double a,b,c;
	for (i = 1; i <= 5; i++){
		printf("�����B:$");
		scanf_s("%lf", &a);
		printf("�п�J�Q�v(%%):");
		scanf_s("%lf", &c);
		c = c / 100;
		b = a;
		for (j = 1; j <= 15; j++){
			b = b + (b*c);
		}
		b = b - a;
		printf("15�~��i��$%.2lf\n\n", b);
	}
	system("pause");
	return 0;
}