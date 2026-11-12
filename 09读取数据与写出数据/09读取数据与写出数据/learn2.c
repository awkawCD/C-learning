#include<stdio.h>
int main()
{
	FILE* file = fopen("C:\\Users\\CD\\Desktop\\CÓïÑÔÑ§Ï°\\test2.txt", "w");

	fputc(97,file);//·µ»Øint£¬´íÎó£º-1£»

	fputs("nihao",file);//·µ»Øint£¬´íÎó£º-1£»

	char arr[] = { 97,98,99,100,101 };//·µ»Øint£¬´íÎó£º-1£»
	fwrite(arr,1,5,file);
	return 0;
}