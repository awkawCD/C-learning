//#include<stdio.h>
//void swap(void* p1, void* p2, int len);
//int main()
//{
//	/*void类型指针：不表示任何类型；无法获取数据；无法计算；
//				  可以接收任意类型指针记录的内存地址*/
//	int a = 100;
//	int b = 200;
//	swap(&a,&b,4);
//	printf("a=%d,b=%d\n",a,b);
//	return 0;
//}
//void swap(void* p1, void* p2, int len)
//{
//	char* pc1 = p1;
//	char* pc2 = p2;
//	char temp = 0;
//	for (int i = 0;i < len;i++)
//	{
//		temp = *pc1;
//		*pc1 = *pc2;
//		*pc2 = temp;
//		pc1++;
//		pc2++;
//
//	}
//}