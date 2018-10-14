#include <stdio.h>
#include <stdlib.h>

int main()
{
	double a, b;
	for (;;)
	{
		printf("Enter sales in dollars(-1 to end):");
		scanf_s("%lf", &a);
		b = 200 + 0.09*a;
		printf("Salary is:%.2lf\n\n",b);
		if (a == -1)exit(0);
	}
	system("pause");
	return 0;
}