//#include<stdio.h>
//int main()
//{
//	//读取数据：
//	FILE* file = fopen("C:\\Users\\CD\\Desktop\\C语言学习\\test1.txt","r");
//
//	int c;
//	while ((c = fgetc(file)) != -1)
//	{
//		printf("%c",c);
//	}//返回int，错误则返回-1；
//
//	char arr[1024];
//	char* str;
//	while ((str = fgets(arr, 1024, file))!=NULL)//从文件file中读取最多1023个字符到数组arr中
//	{
//		printf("%s",str);
//	}//返回char*,错误：NULL;
//
//	char arr1[1024];
//	int n;
//	while ((n = fread(arr,1,1024,file))!=0);//n记录fread函数这一次到底成功读取了多少个字符；
//	{
//		for (int i = 0;i < n;i++)
//		{
//			printf("%c",arr[i]);
//		}
//	}//不能直接printf("%s",arr)，因为fread最后面没有\0,导致会一直读取垃圾内存；
//
//	fclose(file);
//	return 0;
//}