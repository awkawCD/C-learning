#include<stdio.h>
int main()
{
	//求Sn=a+aa+aaa+...+aa...a(n个a)的值
	int a,n;
	int sum = 0;
	int temp = 0;
	scanf_s("%d %d",&a,&n);
	for (int i = 1;i <= n;i++)
	{
		temp = temp * 10 + a;
		sum += temp;
	}
	printf("%d\n",sum);
}