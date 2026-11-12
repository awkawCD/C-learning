#include<stdio.h>
int judge(int num);
int main()
{
	//写一个判断素数的函数:
	int num;
	printf("请输入一个素数：\n");
	scanf_s("%d",&num);
	if (judge(num) == 1)
	{
		printf("%d是一个素数\n",num);
	}
	else
	{
		printf("%d不是一个素数\n", num);
	}
	return 0;
}
int judge(int num)
{
	if (num <= 1)
	{
		return 0;
	}
	else
	{
		for (int i = 2;i * i <= num;i++)
		{
			if (num % i == 0)
			{
				return 0;
			}
		}
		return 1;
	}
}