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
	for (i = 0; i <= strlen(p); i++)//�˴�ע��ѭ��������������Ҫ����'\0'�Ĵ��ڶ��������һ�������޷��ɹ���ȡ
	{
		if (*(p + i) >= '0'&&*(p + i) <= '9')//���Ϊ���֣���ʹflagΪ1
		{
			flag = 1;
			t = t * 10 + (*(p + i) - '0');//��ȡ�õ��ַ�������ת��Ϊ�����Ա㱣�浽a����
		}
		else//���Ϊ������������жϣ����flagΪ1����÷�����֮ǰΪ�����򽫱���t�����ֵ��������a�����flagΪ0�����֮ǰ���������֣��������0��flag
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