#include <stdio.h>
#include <stdlib.h>

int main()
{
    //数组与指针1:基本特性


    //1.数组名在绝大多表达式中，会自动“退化”为指向其首地址的指针
    //2.用sizeof计算时，不会退化，仍为整体
    int arr[] = { 10,20,30,40,50 };
    int len = sizeof(arr) / sizeof(int);
    int* p1 = arr;//这里arr“退化“成了指针
    for (int i = 0;i < len;i++)
    {
        printf("%d ", *p1);
        p1++;
    }//遍历数组,printf("%d ",*p1);可以用printf("%d ",arr[i]);替代
     //arr[i]等效于*(arr+i)


     //3.用&arr获取自己地址时，不会退化
    int arr1[] = { 1,2,3,4,5 };
    int* p2 = arr1;
    int* p3 = &arr1;
    //  1    2     3     4     5
    // arr  arr+1
    //&arr                       %arr+1
    return 0;
}
