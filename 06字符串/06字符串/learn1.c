//#include<stdio.h>
//int main()
//{
//	//"zifucuan"-->'z''i''f''u''c''u''a''n''\0'
//	
//	//定义方式1：字符数组
//	char str1[] = "abc";
//
//	//定义方式2：不可修改，定义的字符串可复用，内存地址一样
//	char* str2 = "def";
//	printf("%s\n", str1);//%s只认指针，str1已经退化为指针了，*str1不行
//	printf("%s\n", str2);
//
//	//键盘录入并遍历：
//	char str3[100];
//	scanf_s("%s",str3);//&str3不行，因为str3本身已经退化为指针了
//	printf("%s\n",str3);
//	
//	char* p = str3;
//	while (1)
//	{
//		char c = *p;//不能直接char c=*str3
//		if (c == '\0')
//		{
//			break;
//		}
//		printf("%c\n",c);
//		p++;
//	}
//	return 0;
//}