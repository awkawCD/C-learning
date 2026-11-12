//#include<stdio.h>
//int main()
//{
	//野指针：指针指向的空间未分配
	/*int* p;
	*p = 10;*/

	//悬空指针：指针指向的空间已分配，但是被释放了
	/*int* pp = malloc(sizeof(int));
	*pp = 10;
	free(pp);
	*pp = 20;*/


//	return 0;
//}