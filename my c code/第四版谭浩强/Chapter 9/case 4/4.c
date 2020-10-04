#include <stdio.h>
#define N 3
void input(struct Student stu[]);
struct Student
{
	int num;
	char name[5];
	int score[3];
	double aver;
};
int main()
{
	double s;
	double aver[3];
	int max = 0, maxi;
	struct Student stu[N];
	input(stu);
	print(stu);
	
}
void input(struct Student stu[])
{
	for (int i = 0; i < N; i++)
	{
		printf("Input student%d's data:\n", i + 1);
		scanf("%d %s %d %d %d", &stu[i].num, stu[i].name, &stu[i].score[0], &stu[i].score[1], &stu[i].score[2]);
	}
}
void print(struct Student stu[])
{
	for (int i = 0; i < N; i++)
	{
		printf("The data:\n", i + 1);
		printf("%d %s %d %d %d", stu[i].num, stu[i].name, stu[i].score[0], stu[i].score[1], stu[i].score[2]);
	}
}