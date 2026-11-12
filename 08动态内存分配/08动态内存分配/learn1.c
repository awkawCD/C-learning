#include<stdio.h>
#include<stdlib.h>
int main()
{	
	int* p = malloc(100 * sizeof(int));//返回这片空间的首地址;
									   //malloc返回void类型的指针，这里自动强转了；
	if (p == NULL)
	{
		printf("malloc申请内存失败\n");
		return -1;
	}

	for (int i = 0;i < 100;i++)
	{
		*(p + i) = 10 * (i+1);//或者p[i]=10*(i+1);
		printf("%d ",*(p+i));//或者p[i]；
	}

	free(p);
	p = NULL;
	return 0;
}