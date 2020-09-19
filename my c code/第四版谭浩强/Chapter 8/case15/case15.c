#include <stdio.h>
int main()
{
	void good(float *p);
	void fail(float *p);
	void averc(float *p);
	float a[3][3],*p;
	int i,j;
	printf("enter stu's sorce:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%f",&a[i][j]);
		}
	}
	p=&a[0][0];
	averc(p);
	fail(p);
	good(p);
	return 0;
}
void averc(float *p)
{
	float sum=0,aver;
	int i;
	for(i=0;i<3;i++)
	{
		sum+=*(p+3*i);	
	}
	aver=sum/3;
	printf("Course 1's average:%f\n",aver);
}
void fail(float *p)
{
	int i,j,flag=0;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(*(p+3*i+j)<60)
			{
				flag++;
			}
		}
		if(flag>=2)
			{
				printf("No.%d stu fails two courses!\nAnd grades:\n",i+1);
				for(j=0;j<3;j++)
				{
					printf("%f ",*(p+3*i+j));
				}
				printf("\n");
				flag=0;
			}
	}
}
void good(float *p)
{
	int i,j,flag=0;;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(*(p+3*i+j)>85)
			{
				flag++;
			}
		}
		if(flag==3)
		{
			printf("No.%d stu is good,and the grade:\n",i+1);
			for(j=0;j<3;j++)
			{
				printf("%f ",*(p+3*i+j));
			}
			printf("\n");
			flag=0;
		}
	}
}