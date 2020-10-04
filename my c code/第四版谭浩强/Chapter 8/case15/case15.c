#include <stdio.h>
#include <string.h>
double course1_aver(double(*p)[3]);
void fail(double(*p)[3], int n);
void good(double(*p)[3]);
int main()
{
	double a[3][3];
	int i, j, flag = 0;
	printf("Enter 3 students' grades:\n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			scanf("%lf", &a[i][j]);
		}
	}
	printf("course 1's average:%lf\n", course1_aver(*a));
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			if (a[i][j] < 60)
			{
				flag++;
			}
			if (flag >= 2)
			{
				printf("Student %d has failed:\n", i);
				fail(*a, i);
				flag=0;
				break;
			}
		}
	}
	good(*a);
}
double course1_aver(double(*p)[3])
{
	int i;
	double s = 0.0;
	for (i = 0; i < 3; i++)
	{
		s += *(*p + i);
	}
	return s / 3;
}
void fail(double(*p)[3],int n)
{
	int i;
	for (i = 0; i < 3; i++)
	{
		printf("%lf ", *(*(p + n) + i));
	}
	printf("\n");
}
void good(double(*p)[3])
{
	int i, j, flag;
	double s;
	for (i = 0; i < 3; i++)
	{
		s = 0;
		flag = 0;
		for (j = 0; j < 3; j++)
		{
			s += *(*(p + i) + j);
			if (*(*(p + i) + j) >= 85)
			{
				flag++;
			}
		}
		if ((s / 3) >= 90 || flag == 3)
		{
			printf("Student %d is brilliant:\n",i);
			for (j = 0; j < 3; j++)
			{
				printf("%lf ",*(*(p+i)+j));
			}
			printf("\n");
		}
	}
}