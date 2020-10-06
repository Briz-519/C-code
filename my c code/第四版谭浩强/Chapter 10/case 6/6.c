#include <stdio.h>
#define N 3
struct Student
{
	int num;
	char name[10];
	int score[3];
	double aver;
}stu[N], t;
int main()
{
	FILE *fp;
	int i, j;
	if ((fp = fopen("stu.txt", "r")) == NULL)
	{
		printf("Can't open file!\n");
		exit(0);
	}
	printf("stu.txt:\n");
	for (i = 0; i < N; i++)
	{
		fread(&stu[i], sizeof(struct Student), 1, fp);
		printf("%d %s %d %d %d %lf\n", stu[i].num, stu[i].name, stu[i].score[0], stu[i].score[1], stu[i].score[2], stu[i].aver);
	}
	for (i = 0; i < N-1; i++)
	{
		for (j = 0; j < N - 1 - i; j++)
		{
			if (stu[j].aver>stu[j + 1].aver)
			{
				t = stu[j];
				stu[j] = stu[j + 1];
				stu[j + 1] = t;
			}
		}
	}
	fclose(fp);
	fp = fopen("stu-sort.txt", "w");
	for (i = 0; i < N; i++)
	{
		fwrite(&stu[i], sizeof(struct Student), 1, fp);
	}
	printf("File 'stu-sort.txt' establishes successfully!\n");
	for (i = 0; i < N; i++)
	{
		fread(&stu[i], sizeof(struct Student), 1, fp);
		printf("%d %s %d %d %d %lf\n", stu[i].num, stu[i].name, stu[i].score[0], stu[i].score[1], stu[i].score[2], stu[i].aver);
	}
	fclose(fp);
	return 0;
}