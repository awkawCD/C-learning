//#include<stdio.h>
////不起别名:
//struct Student
//{
//	char name[100];
//	int age;
//	char gender;
//	double height;
//};
//int main()
//{
//	//结构体：一个事物中包含多个属性
//	//格式一：
//	struct Student s1;
//
//	strcpy(s1.name,"zhangsan");
//	s1.age = 18;
//	s1.gender = 'M';
//	s1.height = 1.68;
//
//	printf("%s\n",s1.name);
//	printf("%d\n",s1.age);
//	printf("%c\n", s1.gender);
//	printf("%.2lf\n\n", s1.height);
//
//	//格式二：
//	struct Student s2 = { "lisi" ,18 ,'M' ,1.70 };
//
//	printf("%s\n", s2.name);
//	printf("%d\n", s2.age);
//	printf("%c\n", s2.gender);
//	printf("%.2lf\n\n", s2.height);
//	return 0;
//}