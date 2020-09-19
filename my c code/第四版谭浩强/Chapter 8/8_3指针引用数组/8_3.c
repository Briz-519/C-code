#include <stdio.h>
/*int main()
{
	int a[5],i,*p;
	printf("input 5 integer:\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",a+i);
	}
	for(p=a;p<(a+5);p++)
	{
		printf("%d",*p);
	}
	return 0;
}*/

//逆向输出数组

/*int main()
{
	void inv(int *a,int n);
	int i,a[5]={1,2,3,4,5};
	printf("The original array:\n");
	for(i=0;i<5;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
	inv(a,5);
	printf("New array:\n");
	for(i=0;i<5;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}
void inv(int *a,int n)
{
	int *i,*j,m=(n-1)/2,t;
	j=a+n-1;
	for(i=a;i<=a+m;i++,j--)
	{
		t=*i;
		*i=*j;
		*j=t;
	}
}*/

//从小到大排序

/*#define N 10
int main()
{
	void sort(int a[],int n);
	int a[10],i,*p;
	printf("input N integer(N=%d):\n",N);
	for(i=0;i<N;i++)
	{
		scanf("%d",&a[i]);
	}
	sort(a,N);
	for(p=a;p<a+N;p++)
	{
		printf("%d ",*p);
	}
	return 0;
}
void sort(int a[],int n)
{
	int t,i,j,k;
	for(i=0;i<n-1;i++)
	{
		k=i;
		for(j=i+1;j<n;j++)
		{
			if(*(a+j)<*(a+k))
			{
				k=j;
				t=*(a+k);
				*(a+k)=*(a+i);
				*(a+i)=t;
			}
		}
	}
}*/

//指针输出3x4

/*int main()
{
	int *p,a[3][4]={1,3,5,7,2,4,6,8,9,9,9,9};
	for(p=a[0];p<*a+12;p++)
	{
		if((p-a[0])%4==0)
		{
			printf("\n");
		}
		printf("%d",*p);
	}
	printf("\n");
	printf("%d\n",*(*(a+1)+3));
	p=a[0];
	printf("%d\n",*(p+7));
	return 0;
}*/

/*int main()
{
	int a[3][4]={1,3,5,7,2,4,6,8,9,9,9,9};
	int (*p)[4];
	p=a;
	printf("%d\n",*(*(p+1)+3));
	return 0;
}*/

int main()
{
	void research(float (*p)[4],int n);
	void average(float *p,int n);
	void search(float (*p)[4],int n);
	float a[3][4]={{90,99,96,95},{89,87,90,92},{60,57,78,88}};
	average(*a,12);
	search(a,2);
	printf("\n");
	research(a,3);
	return 0;
}
void average(float *p,int n)
{
	float aver,sum=0,*p_end;
	p_end=p+n-1;
	for(;p<=p_end;p++)
	{
		sum+=(*p);
	}
	aver=sum/n;
	printf("The average is %f\n",aver);
}
void search(float (*p)[4],int n)
{
	int i;
	printf("The No.%d's grade are:\n",n);
	for(i=0;i<4;i++)
	{
		printf("%f ",*((*p+n)+i));
	}
}
void research(float (*p)[4],int n)
{
	int i,j,flag;
	printf("The passed stu's grade is:\n");
	for(i=0;i<3;i++)
	{
		flag=0;
		for(j=0;j<4;j++)
		{
			if((*(*(p+i)+j))<=60)
			{
				flag=1;
			}
			if(flag)
			{
				printf("%f ",*(*(p+i)+j));
			}
		}
	}
}
