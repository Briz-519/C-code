#include <stdio.h>            
struct Student
{
	int num;
	char name[10];
	int score[2];
	float aver;
}stu[3];
int main()
{
	int i, j;
	float max=0,sum=0,average=0;
	for (i = 0; i < 3; i++)
	{
		printf("Input num:\n");
		scanf("%d", &stu[i].num);
		printf("Name:\n");
		scanf("%s",&stu[i].name);
		for (j = 0; j < 2; j++)
		{
			printf("Score:\n");
			scanf("%d",&stu[i].score[j]);
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<2;j++)
		{
			sum+=stu[i].score[j];
			if(stu[i].score[j]>max)
			{
				max=stu[i].score[j];
			}
		}
		stu[i].aver=sum/3;
		sum=0;
		average+=stu[i].aver;
	}
	average/=3;
	for (i = 0; i < 3; i++)
	{
		printf("No.%d Name:%s Average:%f ",stu[i].num,stu[i].name,stu[i].aver);
		for (j = 0; j < 2; j++)
		{
			printf("Score:%d ",stu[i].score[j]);
		}
		printf("\n");
	}
	printf("All score's average:%f\nMax score:%f\n",average,max);
	return 0;
}
