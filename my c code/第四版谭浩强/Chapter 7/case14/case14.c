#include <stdio.h>
#define N 2
#define M 5
double stu[N],a[N][M],subj[M];
int stu_,subj_;
int main()
{
	int i,j;
	void input_stu();
	void aver_stu();
	void aver_subj();
	double highest();
	double variance();
	input_stu();
	aver_stu();
	aver_subj();
	for(i=0;i<N;i++)
	{
		printf("student%d's average is %lf\n",i+1,stu[i]);
	}
	for(j=0;j<M;j++)
	{
		printf("subject%d's average is %lf\n",j+1,subj[j]);
	}
	highest();
	printf("highest:%lf\tstudent%d\tsubject%d\n",highest(),stu_,subj_);
	printf("variance:%lf\n",variance());
	return 0;
}


void input_stu()
{
	int i,j;
	for(i=0;i<N;i++)
	{
		printf("input student%d's grades:\n",i+1);
		for(j=0;j<M;j++)
		{
			scanf("%lf",&a[i][j]);
		}
	}
}


void aver_stu()
{
	int i,j;
	double sum;
	for(i=0;i<N;i++)
	{   sum=0;
		for(j=0;j<M;j++)
		{
			sum+=a[i][j];
		}	
	stu[i]=sum/M;
	}
}


void aver_subj()
{
	int i,j;
	double sum;
	for(j=0;j<M;j++)
	{   sum=0;
		for(i=0;i<N;i++)
		{
			sum+=a[i][j];
		}	
	subj[j]=sum/N;
	}
}


double highest()
{
	double high;
	int i,j;
	high=a[0][0];
	for(i=0;i<N;i++)
	{
		for(j=0;j<M;j++)
		{
			if(a[i][j]>high)
			{
				high=a[i][j];
				stu_=i+1;
				subj_=j+1;
			}
		}
	}
	return high;
}


double variance()
{
	double sum1=0,sum2=0;
	int i;
	for(i=0;i<N;i++)
	{
		sum1+=(stu[i])*(stu[i]);
		sum2+=stu[i];
	}
	return sum1/N-(sum2/N)*(sum2/N);
}