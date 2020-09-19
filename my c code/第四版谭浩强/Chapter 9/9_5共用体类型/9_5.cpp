#include <stdio.h>
/*
union Stu
{
	int i;
	float f;
	char c;
};
int main()
{
	union Stu a;
	a.i = 14;
	printf("%d\n", a.i);
	printf("%c\n", a.c);
	printf("%f\n", a.f);
}
*/

struct
{
	int num;
	char name[10];
	char sex;
	char job;
	union
	{
		int clas;
		char position[10];
	} catagory;
}person[2];
int main()
{
	int i;
	for (i = 0; i < 2; i++)
	{
		printf("Please enter the data of person:\n");
		scanf_s("%d%s%c%c",&person[i].num,&person[i].name,&person[i].sex,&person[i].job);
		if (person[i].job == 's')
			scanf_s("%d",&person[i].catagory.clas);
		else if (person[i].job == 't')
		{
			scanf_s("%s",&person[i].catagory.position);
		}
		else
		{
			printf("Enter a currect data!\n");
		}
	}
	for (i = 0; i < 2; i++)
	{
		if (person[i].job == 's')
		{
			printf("No.%d\tName:%s\tSex:%c\tJob:%c\tClass:%d\n",person[i].num,person[i].name,person[i].sex,person[i].job,person[i].catagory.clas);
		}
		else if (person[i].job == 't')
		{
			printf("No.%d\tName:%s\tSex:%c\tJob:%c\tPosition:%s\n", person[i].num, person[i].name, person[i].sex, person[i].job,person[i].catagory.position);
		}
	}
	return 0;
}