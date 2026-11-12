#include<stdio.h>
#include<string.h>
int main()
{
	/*有一篇文章，共有3行文字，每行有5个字符。要求统计出其中英文大小写字母
	数字，空格以及其他字符的个数*/

	char text[3][7+1];//1 2 3 4 5 \n \0占7个位置，多给1个位置
	int upper = 0, lower = 0, digit = 0, space = 0, other = 0;

	printf("请输入3行文字，每行不超过5个字符:\n");

	for (int i = 0;i < 3;i++)
	{
		fgets(text[i], sizeof(text[i]), stdin);
		text[i][strcspn(text[i], "\n")] = '\0';
	}

	for (int i = 0;i < 3;i++)
	{
		for (int j = 0;text[i][j] != '\0';j++)
		{
			char c = text[i][j];
			if (c >= 'A' && c <= 'Z') 
			{
				upper++;
			}
			else if (c >= 'a' && c <= 'z') 
			{
				lower++;
			}
			else if (c >= '0' && c <= '9') 
			{
				digit++;
			}
			else if (c == ' ') 
			{
				space++;
			}
			else
			{
				other++;
			}
		}
	}

	printf("大写字母: %d 个\n", upper);
	printf("小写字母: %d 个\n", lower);
	printf("数字: %d 个\n", digit);
	printf("空格: %d 个\n", space);
	printf("其他字符: %d 个\n", other);

	return 0;
}