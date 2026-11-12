#include<stdio.h>
int main()
{
	//练习一：打印矩形
	for (int i = 1;i <= 5;i++)
	{
		for (int j = 1;j <= 5; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	printf("\n");

	//练习一：打印直角三角形
	for (int i = 1;i <= 5;i++)
	{
		for (int j = 1;j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	printf("\n");

	//练习三：制作九九乘法表
	for (int i = 1;i <= 9;i++)
	{
		for (int j = 1;j <= i; j++)
		{
			printf("%d*%d=",j,i);
			printf("%d ",i*j);
		}
		printf("\n");
	}
	printf("\n");
	return 0;
}