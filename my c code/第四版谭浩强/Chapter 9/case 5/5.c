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
	for (int i = 0; i < 3; i++)
	{
		stu[i].aver = (stu[i].score[0] + stu[i].score[1] + stu[i].score[2]) / 3;
	}
	for (int i = 0; i < 3; i++)
	{
		s = 0;
		max = 0;
		for (int j = 0; j < N; j++)
		{
			s += stu[j].score[i];
			if (stu[j].score[i]>max)
			{
				max = stu[j].score[i];
				maxi = j;
			}
		}
		aver[i] = s / 3;
		printf("Course%d's average:%lf\n",i+1,aver[i]);
		printf("This course's max score is student%d:\n%d %s %d %d %d %lf\n",maxi+1, stu[maxi].num, stu[maxi].name, stu[maxi].score[0], stu[maxi].score[1], stu[maxi].score[2],stu[maxi].aver);
	}
}
void input(struct Student stu[])
{
	for (int i = 0; i < N; i++)
	{
		printf("Input student%d's data:\n", i + 1);
		scanf("%d %s %d %d %d", &stu[i].num, stu[i].name, &stu[i].score[0], &stu[i].score[1], &stu[i].score[2]);
	}
}
