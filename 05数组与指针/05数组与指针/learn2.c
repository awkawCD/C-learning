#include <stdio.h>
#include <stdlib.h>

int main()
{
    //数组与指针2：二维数组


    //定义方式1：
    int arr[3][5] =
    {
        {1,2,3,4,5},
        {6,7,8,9,10},
        {11,12,13,14,15}
    };//arr[0]二维数组中的第一个一维数组

    //定义方式2：
    int arr1[] = { 1,2,3 };
    int arr2[] = { 1,2,3,4,5 };
    int arr3[] = { 1,2,3,4,5,6,7,8,9 };
    int* arrS[] = { arr1,arr2,arr3 };//指针数组，每个元素是一个int*指针，这里把arr1,arr2,arr3的首地址放进了指针arrS里


    //利用索引遍历1：两次循环完成行列的遍历
    for (int i = 0;i < 3;i++)
    {
        for (int j = 0;j < 5;j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    //利用索引遍历2：当二维数组里的每个数组长度不一定一样
    int len1 = sizeof(arr1) / sizeof(int);
    int len2 = sizeof(arr2) / sizeof(int);
    int len3 = sizeof(arr3) / sizeof(int);
    int lenarr[] = { len1,len2,len3 };
    //这里不能用sizeof(arrS[i])/sizeof(int);因为arrS指向的arr1,arr2.arr3已经退化成指针了，算不出长度
    for (int ii = 0;ii < 3;ii++)
    {
        for (int jj = 0;jj < lenarr[ii];jj++)
        {
            printf("%d ", arrS[ii][jj]);
        }
        printf("\n");
    }


    //利用指针遍历1：使用指针数组
    int arr4[] = { 1,2,3,4,5 };
    int arr5[] = { 6,7,8,9,10 };
    int* arrSS[] = { arr1,arr2 };
    int** p = arrSS;
    for (int iii = 0;iii < 2;iii++)
    {
        for (int jjj = 0;jjj < 5;jjj++)
        {
            printf("%d ", *(*(p + iii) + jjj));//语法糖：p[iii][jjj]
        }
        printf("\n");
    }//和利用索引遍历1：两次循环完成行列的遍历本质是一样的

    //利用指针遍历2：利用数组指针
    int arrA[3][5] =
    {
        {1,2,3,4,5},
        {11,22,33,44,55},
        {111,222,333,444,555}
    };
    int (*pp)[5] = arrA;//数组指针,pp指向一行,每行5个int；p+1会跳过一整行
    for (int iiii = 0;iiii < 2;iiii++)
    {
        for (int jjjj = 0;jjjj < 5;jjjj++)
        {
            printf("%d ", *(*(pp + iiii) + jjjj));//语法糖：p[iiii][jjjj]
        }
        printf("\n");
    }


    return 0;
}
