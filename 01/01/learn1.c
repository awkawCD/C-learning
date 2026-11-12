#include<stdio.h>
int main()
{
	//确定数据类型内存：
	signed int a;	//float和double无法使用signed
	printf("int类型占用的字节为：\n");
	printf("%zu\n",sizeof(a));

	//整数long 和long long格式：
	long b = 1000L;
	printf("这是long类型:\n");
	printf("%ld\n",b);

	long long c = 1000LL;
	printf("这是long long类型:\n");
	printf("%lld\n", c);

	//小数float和double格式：
	float d = 3.14F;
	printf("%f\n",d);
	float e = 3.14F;
	printf("%.2f\n", e);

	double f = 4.28;
	printf("%lf\n", f);
	double g= 4.28;
	printf("%.2lf\n", g);

	//char使用格式：
	char c1 = 'a';
	printf("%c\n", c1);
	char str[100] = "严肃学习c语言中...";
	printf("%s\n", str);

	//ASCII码表使用：
	char c2 = 'a';
	int sum = c2 + 1;
	printf("输出结果为：%d\n", sum);

	char c3 = 97;
	printf("%d\n",c3);
	printf("%c\n", c3);

	//隐式转换和强制转换
	int a1 = 10;
	printf("原来占用内存为：\n");
	printf("%zu\n", sizeof(a1));
	double a2 = 0.0;
	double a3 = a1 + a2;	//此刻转化为取值范围大的，即double类型
	printf("此时占用内存为：\n");
	printf("%zu\n", sizeof(a3));
	printf("%.2lf\n", a3);

	int b1 = 10;
	printf("原来占用内存为：\n");
	printf("%zu\n", sizeof(b1));
	short i = (short)b1;
	printf("此时占用内存为：\n");
	printf("%zu\n", sizeof(i));
	printf("%d\n", i);

	//运算符：
	int d1 = 1;
	d1++;
	printf("%d\n",d1);

	int d2 = 1;
	int d3 = 2;
	d2 += d3;
	printf("%d\n", d2);

	int d4= 10;
	int d5 = 20;
	printf("%d\n", d4==d5);

	printf("%d\n",1||0);

	//int d6, d7;
	//printf("请输入两个整数：\n");
	//scanf("%d %d",&d6,&d7);
	//int d8 = d6 > d7 ? d6 : d7;
	//printf("较大的是%d\n",d8);
	return 0;
}