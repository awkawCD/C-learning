//#include<stdio.h>
//int binarySearch(int arr[], int len, int num);
//int main()
//{
//	//插值查找（二分查找进阶,在其基础上改mid）
//	//数组数据要均匀有序才更快
//	int arr[] = { 1,3,4,5,7,9 };
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
//		int mid = left + (num - arr[left]) / (arr[right] - arr[left]) * (right - left);
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
