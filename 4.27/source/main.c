#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a, b,c,d;
	printf("�Ҧ�����p��500�B�ŦX�Īѩw�z���T���\n");
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