#include<stdio.h>
/*
#include<string.h>
int main()
{
	struct Student
	{
		int num;
		char name[10];
		char sex;
		int grade;
	};
	struct Student stu;
	struct Student *p;
	p=&stu;
	stu.num=1;
	strcpy(stu.name,"Brizy");
	stu.sex='M';
	stu.grade=100;
	printf("No.%d\nName:%s\nSex:%c\nGrade:%d\n",stu.num,(*p).name,p->sex,p->grade);
}
*/

/*
struct Student
{
	int num;
	char name[20];
	char sex;
	int age;
};
struct Student stu[3]={{1,"Briz",'M',19},{2,"Jixy",'M',18},{3,"Re",'F',18}};
int main()
{
	struct Student *p;
	for(p=stu;p<stu+3;p++)
	{
		printf("No.%d\tName:%s\tSex:%c\tAge:%d\n",p->num,p->name,p->sex,p->age);
	}
	return 0;
}
*/

#include <stdio.h>
#include <string.h>
struct Student
{
	char name[10];
	int count[3];
	double aver;
};
int main()
{
	int i, maxi;
	struct Student stu[3], *pt, max;
	double s = 0;
	pt = stu;
	for (i = 0; i < 3; i++)
	{
		printf("Enter student's grade:\n");
		scanf("%s %d %d %d", stu[i].name, &stu[i].count[0], &stu[i].count[1], &stu[i].count[2]);
	}
	for (i = 0; i < 3; i++)
	{
		stu[i].aver = (stu[i].count[0] + stu[i].count[1] + stu[i].count[2]) / 3.0;
		s = 0;
	}
	max = stu[0];
	for (i = 0; i < 3; i++)
	{
		if (stu[i].aver>max.aver)
		{
			maxi = i;
		}
	}
	printf("The max average:\n%s %d %d %d %lf\n", stu[maxi].name, (pt + maxi)->count[0], (pt + maxi)->count[1], (pt + maxi)->count[2], (pt + maxi)->aver);
	return 0;
}