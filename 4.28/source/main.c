#include <stdio.h>
#include <stdlib.h>

int main()
{
	int manger, hourlyworker, commissionworker, pieceworker,i;
	double a,b, c, d,e;
		printf("�п�J�C�P�T�w�u��:");
		scanf_s("%d", &manger);

		printf("�п�J�C�p�ɩT�w�u��:");
		scanf_s("%lf", &b);

		printf("�п�J�u�@�X�p�� :");
		scanf_s("%lf", &a);

		printf("�п�J�@�P�����`�P���B:");
		scanf_s("%d", &commissionworker);

		printf("�п�Jpieceworker�Ͳ��@�Ӫ��~�i�o���B:");
		scanf_s("%d", &pieceworker);

		printf("�п�J�N�X:");
		scanf_s("%d", &i);
	
		c = a*b;
		d = 40 * b + (a - 40)*b*1.5;
		e = 250 + (commissionworker*5.7) / 100;

		switch (i)
		{
		case 1:printf("manger�C�P�~��:$%d\n",manger);
			break;

		case 2:
			if(a <= 40){
				   printf("hourlyworker�C�P�~��:$%.2lf\n", c);
		}
			   else{ printf("hourlyworker�C�P�~��:$%.2lf\n", d); }
			break;

		case 3:printf("commissionworker�C�P�~��:$%lf\n", e);
			break;

		case 4:printf("pieceworker�C�P�~��:$%d\n", pieceworker);
			break; 

		default:printf("�A��J���N�X���s�b!!\n");
		}
		system("pause");
		return 0;

}