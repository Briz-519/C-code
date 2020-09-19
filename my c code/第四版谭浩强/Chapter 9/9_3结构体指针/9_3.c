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

struct Student
{
	int no;
	char name[10];
	float score[3];
	float aver;
};
int main()
{
	void input(struct Student stu[]);
	struct Student max(struct Student stu[]);
	void print(struct Student stu1);
	struct Student stu[3],*p;
	p=stu;
	input(p);
	print(max(p));
	return 0;
}
void input(struct Student stu[])
{
	int i;
	printf("Enter Stu's No,name and three courses' score:\n");
	for(i=0;i<3;i++)
	{
		scanf("%d %s %f %f %f",&stu[i].no,stu[i].name,&stu[i].score[0],&stu[i].score[1],&stu[i].score[2]);
		stu[i].aver=(stu[i].score[0]+stu[i].score[1]+stu[i].score[2])/3.0;
	}
}
struct Student max(struct Student stu[])
{
	int i,m=0;
	for(i=0;i<3;i++)
	{
		if(stu[i].aver>stu[m].aver)
		{
			m=i;
		}
	}
	return stu[m];
}
void print(struct Student stu1)
{
	printf("The highest score:\n");
	printf("No:%d\tName:%s\tScore:%f %f %f\tAver:%f\n",stu1.no,stu1.name,stu1.score[0],stu1.score[1],stu1.score[2],stu1.aver);
}