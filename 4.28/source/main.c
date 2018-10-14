#include <stdio.h>
#include <stdlib.h>

int main()
{
	int manger, hourlyworker, commissionworker, pieceworker,i;
	double a,b, c, d,e;
		printf("請輸入每周固定工資:");
		scanf_s("%d", &manger);

		printf("請輸入每小時固定工資:");
		scanf_s("%lf", &b);

		printf("請輸入工作幾小時 :");
		scanf_s("%lf", &a);

		printf("請輸入一星期的總銷售額:");
		scanf_s("%d", &commissionworker);

		printf("請輸入pieceworker生產一個物品可得金額:");
		scanf_s("%d", &pieceworker);

		printf("請輸入代碼:");
		scanf_s("%d", &i);
	
		c = a*b;
		d = 40 * b + (a - 40)*b*1.5;
		e = 250 + (commissionworker*5.7) / 100;

		switch (i)
		{
		case 1:printf("manger每周薪水:$%d\n",manger);
			break;

		case 2:
			if(a <= 40){
				   printf("hourlyworker每周薪水:$%.2lf\n", c);
		}
			   else{ printf("hourlyworker每周薪水:$%.2lf\n", d); }
			break;

		case 3:printf("commissionworker每周薪水:$%lf\n", e);
			break;

		case 4:printf("pieceworker每周薪水:$%d\n", pieceworker);
			break; 

		default:printf("你輸入的代碼不存在!!\n");
		}
		system("pause");
		return 0;

}