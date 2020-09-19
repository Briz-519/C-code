#include <stdio.h>            //该程序仅在vc++可运行，vs会报错
struct Student
{
	int num;
	char name[10];
	int score[3];
}stu[3];
int main()
{
	void print(struct Student stu[3]);
	int i, j;
	for (i = 0; i < 3; i++)
	{
		printf("Input num:\n");
		scanf_s("%d", &stu[i].num);
		printf("Name:\n");
		scanf_s("%s",&stu[i].name);
		for (j = 0; j < 3; j++)
		{
			printf("Score:\n");
			scanf_s("%d",&stu[i].score[j]);
		}
	}
	print(stu);
	return 0;
}
void print(struct Student stu[3])
{
	int i, j;
	for (i = 0; i < 3; i++)
	{
		printf("No.%d\tName:%s",stu[i].num,stu[i].name);
		for (j = 0; j < 3; j++)
		{
			printf("Score:%d",stu[j].score[j]);
		}
		printf("\n");
	}
}