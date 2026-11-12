#include<stdio.h>

void right(int* p);
void wrong(int x);

void getTwo(int* a, int* b);

int divide(int a, int b, int* result);

int main()
{
	//区分：
	int a = 10;
	int* p = &a;
	printf("%p\n",p);//a的地址
	printf("%p\n",&a);//a的地址
	printf("%p\n",&p);//p的地址
	printf("%d\n", *p);//a的内容
	printf("\n");

	//指针的作用：
	//1,操作其他函数中的变量：
	int num1 = 10;
	right(&num1);
	printf("%d\n",num1);
	//反例：
	int num2 = 10;
	wrong(num2);//把10复制一份进去进行运算，函数改了复制品没改本体
	printf("%d\n",num2);
	printf("\n");

	//2,函数返回多个值：
	int x, y;
	getTwo(&x, &y);
	printf("%d,%d\n",x,y);
	printf("\n");

	//3，将函数结果与计算状态区分开：
	int res = 0;
	if (divide(10, 2, &res) == 0)
	{
		printf("成功，结果是%d\n",res);
	}
	if (divide(10, 0, &res) == 0)
	{
		printf("失败，除数不能为零，结果无效\n");
	}
	return 0;
}

void right(int* p)
{
	*p = *p + 1;
}
void wrong(int x)
{
	x = x + 1;
}

void getTwo(int *a,int *b)
{
	*a = 100;
	*b = 200;
}

int divide(int a, int b, int* result)
{
	if (b == 0)
	{
		return -1;
	}
	*result = a / b;
	return 0;
}