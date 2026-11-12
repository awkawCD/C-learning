//#include<stdio.h>
//int order(arr,len,num);
//int main()
//{
//	//基本查找(顺序查找)：
//	int arr[] = { 11,22,55,77,44 };
//	int len = sizeof(arr) / sizeof(int);
//	int num = 55;
//	int index = order(arr, len, num);
//	printf("%d\n",index);//输出2，注意不是3
//	return 0;
//}
//int order(int arr[], int len, int num)//为了效率，进行了数组退化，这里arr[]相当于arr*
//{
//	for (int i = 0;i < len;i++)
//	{
//		if (arr[i] == num)
//		{
//			return i;
//		}
//		/*else
//		{
//			return -1;不能这么写，不然第一次循环就直接返回-1了
//		}*/
//	}
//	return -1;
//}