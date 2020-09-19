#include <stdio.h>
#include <string.h>
/*
struct Person
	{
		char name[10];
		int count;
	}leader[3]={"Briz",0,"Jixy",0,"Re",0};
int main()
{
	int i,j;
	char leader_name[10];
	for(i=0;i<5;i++)
	{
		scanf("%s",leader_name);
		for(j=0;j<3;j++)
		{
			if(strcmp(leader_name,leader[j].name)==0)
			{
				leader[j].count++;
			}
		}
	}
	printf("Consequence:\n");
	for(j=0;j<3;j++)
	{
		printf("%s:%d\n",leader[j].name,leader[j].count);
	}
	return 0;
}
*/

struct Student
{
	int no;
	char name[10];
	int grade;
};
int main()
{
	struct Student stu[3]={{1,"Briz",99},{2,"Jixy",98},{3,"Re",95}};
	struct Student temp;
	int i,j;
	for(i=0;i<2;i++)
	{
		for(j=0;j<2-i;j++)
		{
			if(stu[j].grade<stu[j+1].grade)
			{
				temp=stu[j];
				stu[j]=stu[j+1];
				stu[j+1]=temp;
			}
		}
	}
	printf("From large to small:\n");
	for(j=0;j<3;j++)
	{
		printf("%d %s %d \n",stu[j].no,stu[j].name,stu[j].grade);
	}
	return 0;
}
