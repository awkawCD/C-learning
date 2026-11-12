#include<stdio.h>
int main()
{
	//if和switch的使用：
	//if的使用：一般是对一个范围进行判断
	if (1)
	{
		printf("1\n");
	}
	else
	{
		printf("0\n");
	}
	//switch的使用：有限个case进行匹配的情况
	switch (0)
	{
	case 1:
		printf("1\n");
		break;
	case 0:
		printf("0\n");
		break;
	}


	//for和while的使用：
	//for的使用：知道循环次数或循环范围（吃10个包子）
	for (int i = 1;i <= 5;i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	//while的使用：不知道循环的次数或范围，只知道结束条件（吃包子吃到撑）
	int j = 1;
	while(j <= 5)
	{
		printf("%d ",j);
		j++;
	}
	printf("\n");


	//跳转控制语句：
	//break的使用：
	for (int i = 1;i <= 100;i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("%d\n",i);
			break;
		}
	}
	//continue的使用：
	for (int i = 1;i <= 5;i++)
	{
		if (i == 3)
		{
			continue;
		}
		printf("%d ",i);
	}
	printf("\n");
	return 0;
}
