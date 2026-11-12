#include<stdio.h>
#include<string.h>
int main()
{
	char str1[50] = "Hello";
	char str2[50] = "World";
	char str3[50];

	//获取字符串长度：
	printf("strlen(str1)=%zu\n",strlen(str1));

	//拼接两个字符串：
	//strcat(str1,str2)
	strcat_s(str1, sizeof(str1),str2);
	printf("拼接后str1=%s\n",str1);

	//复制字符串：
	//strcpy(str3,str2);
	strcpy_s(str3,sizeof(str3), str2);
	printf("复制后str3=%s\n",str3);

	//比较两个字符串：
	int res = strcmp("apple","banana");
	printf("%d\n",res);

	return 0;
}