#include <stdio.h>
#define N 3
void print(struct Student stu[]);
struct Student
{
	int num;
	char name[5];
	int score[3];
};
int main()
{
	int i;
	struct Student stu[N];
	for (i = 0; i < N; i++)
	{
		printf("Input student%d's data:\n",i+1);
		scanf("%d %s %d %d %d", &stu[i].num, stu[i].name, &stu[i].score[0], &stu[i].score[1], &stu[i].score[2]);
	}
	print(stu);
}
void print(struct Student stu[])
{
	printf("The data:\n");
	for (int i = 0; i < N; i++)
	{
		printf("%d %s %d %d %d\n", stu[i].num, stu[i].name, stu[i].score[0], stu[i].score[1], stu[i].score[2]);
	}
}