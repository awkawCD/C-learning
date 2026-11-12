#include<stdio.h>
int main()
{
	/*纯文本文件： r w a
		windows里面的记事本能打开且能读懂的，就是纯文本文件
	二进制文件： rb wb ab*/

	//数据源：
	FILE* file1 = fopen("C:\\Users\\CD\\Desktop\\C语言学习\\test3.jpg","rb");
	//目的地：
	FILE* file2 = fopen("C:\\Users\\CD\\Desktop\\C语言学习\\新建文件夹\\test3_copy.jpg","wb");

	//读取数据+导出数据
	char arr[1024];
	int n;
	while ((n = fread(arr, 1, 1024, file1))!=0)
	{
		fwrite(arr,1,n,file2);
	}
	
	//关闭文件：
	fclose(file1);
	fclose(file2);
	return 0;
}
