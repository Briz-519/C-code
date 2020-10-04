#include <stdio.h>
#include <string.h>
void print(char *p, int *a);
int main()
{
	char s[100];
	int a[10];
	printf("Enter a string:\n");
	gets(s);
	print(s, a);
	return 0;
}
void print(char *p, int *a)
{
	int i, flag = 0, t = 0, j = 0;
	for (i = 0; i <= strlen(p); i++)//此处注意循环控制条件，不要遗忘'\0'的存在而导致最后一组数字无法成功获取
	{
		if (*(p + i) >= '0'&&*(p + i) <= '9')//如果为数字，则使flag为1
		{
			flag = 1;
			t = t * 10 + (*(p + i) - '0');//将取得的字符型数字转化为数字以便保存到a数组
		}
		else//如果为非数字则进行判断，如果flag为1，则该非数字之前为数字则将变量t保存的值赋给数组a，如果flag为0则代表之前不存在数字，则继续赋0给flag
		{
			if (flag)
			{
				a[j] = t;
				j++;
				t = 0;
			}
			flag = 0;
		}
	}
	for (i = 0; i < j; i++)
	{
		printf("%d ", a[i]);
	}
}