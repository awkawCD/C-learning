#include<stdio.h>
int main()
{
	//键盘录入数据：
	int arr[10];
	for (int i = 0;i < 10;i++)
	{
		scanf_s("%d",&arr[i]);
	}

	for (int i = 0;i < 10;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
	return 0;
}