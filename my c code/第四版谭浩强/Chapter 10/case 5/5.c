#include <stdio.h>
#define N 3
struct Student
{
	int num;
	char name[10];
	int score[3];
	double aver;
}stu[N];
int main()
{
	FILE *fp;
	int i, j, sum;
	for (i = 0; i < N; i++)
	{
		printf("Enter student%d data:\n",i+1);
		scanf("%d %s %d %d %d", &stu[i].num, stu[i].name, &stu[i].score[0], &stu[i].score[1], &stu[i].score[2]);
	}
	for (i = 0; i < N; i++)
	{
		sum = 0;
		for (j = 0; j < 3; j++)
		{
			sum += stu[i].score[j];
		}
		stu[i].aver = sum / 3.0;
	}
	if ((fp = fopen("stu.txt", "w")) == NULL)
	{
		printf("Can't open file!\n");
		exit(0);
	}
	for (i = 0; i < N; i++)
	{
		if (fwrite(&stu[i], sizeof(struct Student), 1, fp) != 1)
		{
			printf("Write error!\n");
		}
	}
	printf("File 'stu.txt' establishes successfully!\n");
	for (i = 0; i < N; i++)
	{
		fread(&stu[i], sizeof(struct Student), 1, fp);
		printf("%d %s %d %d %d %lf\n", stu[i].num, stu[i].name, stu[i].score[0], stu[i].score[1], stu[i].score[2], stu[i].aver);
	}
	fclose(fp);
	return 0;
}