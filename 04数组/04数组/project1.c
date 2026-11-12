//#include<stdio.h>
//int main()
//{
//	int arr[11] = { 100000,2,3,4,5,6,7,8,9,10 };//arr的类型是指针
//
//	/*printf("%d\n",arr);
//	不可以直接这么搞，因为数组名在表达式中会退化为
//	指向其首元素的指针，即它的类型为int*，数据类型不匹配*/
//
//	arr[0] = 1;//修改数组内数据
//	int len = sizeof(arr) / sizeof(int);
//	for (int i = 0;i < len;i++)//数组的遍历
//	{
//		printf("%d ",arr[i]);//数组下标访问，arr[i]的类型是int
//	}
//	printf("\n");
//
//	printf("%p\n", &arr);//相当于走廊的整体编号，它加1，就是直接到下一条走廊
//	printf("%p\n", &arr[0]);//相当于一个房间，它加1，就是到下一个房间
//
//
//	return 0;
//}
