//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int* p = calloc(10, sizeof(int));//申请空间+数据初始化；
//	if (p == NULL)
//	{
//		printf("calloc申请内存失败\n");
//		return -1;
//	}
//
//	int* pp = realloc(p,20*sizeof(int));//修改空间大小；
//	if (pp == NULL)
//	{
//		printf("realloc扩容失败\n");
//		free(p);//realloc失败时，原来的p没有被释放，必须手动free;
//		return -1;
//	}
//	//到这里，pp就是扩容后的新内存，p已经被realloc自动处理了；
//
//	free(pp);
//	pp = NULL;
//	return 0;
//}