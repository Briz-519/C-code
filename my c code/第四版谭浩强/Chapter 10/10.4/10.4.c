#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 5
void save();
struct Student
{
	char name[10];
	int age;
	char addr[15];
}stud[N];
int main()
{
	int i;
	printf("Enter data of students:\n");
	for (i = 0; i < N; i++)
	{
		scanf("%s %d %s", stud[i].name, &stud[i].age, stud[i].addr);
	}
	save();
	return 0;
}
void save()
{
	FILE *fp;
	int i;
	if ((fp = fopen("stu.dat", "wb")) == NULL)
	{
		printf("Can't open file!\n");
		exit(0);
	}
	for (i = 0; i < N; i++)
	{
		if (fwrite(&stud[i], sizeof(struct Student), 1, fp) != 1)
		{
			printf("File write error!\n");
		}
	}
	fclose(fp);
	printf("Save scussfully!\n");
}