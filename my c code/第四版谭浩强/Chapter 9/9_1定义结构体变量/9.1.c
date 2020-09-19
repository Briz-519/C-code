#include<stdio.h>
/*
int main()
{
	struct Student
	{
		long int num;
		char name[20];
		char sex;
		char addr[20];
	}
	a={10101,"Briz",'M',"bengbu"};
	printf("No.%ld\nName:%s\nSex:%c\nAddress:%s\n",a.num,a.name,a.sex,a.addr);
	return 0;
}
*/

int main()
{
	struct Student
	{
		int num;
		char name[10];
		float grade;
	}Student1,Student2;
	printf("Please enter Stu1's data,Enter key to enter next data:\n");
	scanf("%d\n%s\n%f",&Student1.num,Student1.name,&Student1.grade);
	printf("Please enter Stu2's data,Enter key to enter next data:\n");
	scanf("%d\n%s\n%f",&Student2.num,Student2.name,&Student2.grade);
	if(Student1.grade>Student2.grade)
	{
		printf("Student1's grade higher:%d %s %f\n",Student1.num,Student1.name,Student1.grade);
	}
	else if(Student1.grade<Student2.grade)
	{
		printf("Student2's grade higher:%d %s %f\n",Student2.num,Student2.name,Student2.grade);
	}
	else
	{
		printf("Student1's grade is equal to Student2's grade!\n");
	}
	return 0;
}