//#include<stdio.h>
//int binarySearch(int arr[], int len, int num);
//int main()
//{
//	//二分查找（折半查找）
//	//数组中的数据必须是有序的
//	int arr[] = { 1,3,4,5,7,9};
//	int len = sizeof(arr) / sizeof(int);
//	int num = 7;
//	int index = binarySearch(arr, len, num);
//	printf("%d\n", index);
//	return 0;
//}
//int binarySearch(int arr[], int len, int num)
//{
//	int left = 0;
//	int right = len - 1;
//	while (left <= right)
//	{
//		int mid = left + (right - left) / 2;
//		if (arr[mid] == num)
//		{
//			return mid;
//		}
//		else if (arr[mid] < num)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			right = mid - 1;
//		}
//	}
//	return -1;
//}
////  1  3  5  7  9  
//// (0)(1)(2)(3)(4) 
////
////left=0    mid=2     right=4