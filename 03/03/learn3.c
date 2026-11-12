#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main()
{
	//显示当前时间;
	long long res=time(NULL);
	printf("%lld\n",res);

	//生成随机数:
	srand(time(NULL));
	int num = rand() % 100 + 1;
	printf("%d\n",num);

	return 0;
}