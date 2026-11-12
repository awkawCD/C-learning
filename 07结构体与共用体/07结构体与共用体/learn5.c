#include<stdio.h>

typedef union
{
	double mond;
	int moni;
	char mons;
}Money;

int main()
{
	//共用体：一个属性中有多种类型
	Money m;
	m.moni = 100;
	printf("%d\n", m.moni);
	return 0;
}