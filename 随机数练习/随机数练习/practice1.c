#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main()
{
	//猜大小：
	int num1;
	srand(time(NULL));
	int num2 = rand() % 100 + 1;
	for (;;)
	{
		printf("请从1到100输入要猜的数字喵:");
		scanf("%d", &num1);
		if (num1 < 1 || num1 > 100)
		{
			printf("超出范围了喵");
		}

		if (num1 < num2)
		{
			printf("小了喵\n");
		}
		else if (num1 > num2)
		{
			printf("大了喵\n");
		}
		else
		{
			printf("猜对了喵\n");
			break;
		}
	}
	
	

}