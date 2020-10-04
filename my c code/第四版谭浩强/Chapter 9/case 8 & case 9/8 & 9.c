#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LEN sizeof(struct Student)
struct Student *creat();
struct Student *insert(struct Student *head, struct Student *stud);
struct Student *del(struct Student *head, int num);
void print(struct Student *p);
struct Student
{
	int num;
	char name[10];
	int score;
	struct Student *next;
};
int n;
int main()
{
	struct Student *pt, stu;
	char c;
	int num;
	pt = creat();
	printf("Do you want to delete a data?(Y/N)\n");
	getchar();
	scanf("%c", &c);
	if (c == 'y' || c == 'Y')
	{
		printf("Please input the number which you want to delete:\n");
		scanf("%d", &num);
		pt = del(pt, num);
		print(pt);
	}
	else
	{
		print(pt);
	}
	printf("Do you want to insert a data?(Y/N)\n");
	getchar();
	scanf("%c", &c);
	if (c == 'y' || c == 'Y')
	{
		printf("Please input the number,name and score that you want to insert:\n");
		scanf("%d %s %d", &stu.num, stu.name, &stu.score);
		print(insert(pt, &stu));
	}
	else
	{
		print(pt);
	}
	return 0;
}
struct Student *creat()
{
	struct Student *head, *p1, *p2;
	n = 0;
	p1 = p2 = (struct Student *)malloc(LEN);
	printf("Enter students' number,name and score and enter number from small to large:\n");
	scanf("%d %s %d", &p1->num, p1->name, &p1->score);
	head = NULL;
	while (p1->num != 0)
	{
		++n;
		if (n == 1)	//说明此时输入了非0的数字，将第一组数据的地址赋给head作为第一个结点
		{
			head = p1;
		}
		else			//此时将p1的数据赋给p2的next成员
		{
			p2->next = p1;
		}
		p2 = p1;	//将p2指向p1的数据，此时next成员准备接收下一组数据的地址
		p1 = (struct Student *)malloc(LEN);
		scanf("%d %s %d", &p1->num, p1->name, &p1->score);
	}
	p2->next = NULL;
	return head;
}
struct Student *insert(struct Student *head, struct Student *stud)
{
	struct Student  *p1, *p2;
	p1 = head;
	if (head == NULL)
	{
		head = stud;
		stud->next = NULL;
	}
	else
	{
		while ((stud->num > p1->num) && (p1->next != NULL))
		{
			p2 = p1;
			p1 = p1->next;
		}
		if (stud->num <= p1->num)
		{
			if (head == p1)
			{
				head = stud;
				stud->next = p1;
			}
			else
			{
				p2->next = stud;
				stud->next = p1;
			}
		}
		else
		{
			p1->next = stud;
			stud->next = NULL;
		}
	}
	n += 1;
	return head;
}
struct Student *del(struct Student *head, int num)
{
	struct Student *p1, *p2;
	if (head == NULL)
	{
		printf("List null!\n");
		return head;
	}
	p1 = head;
	while (num != p1->num&&p1->next != NULL)
	{
		p2 = p1;
		p1 = p1->next;
	}
	if (num == p1->num)
	{
		if (p1 == head)
		{
			head = p1->next;
		}
		else
		{
			p2->next = p1->next;
		}
		printf("Delete:%d\n", num);
		n -= 1;
	}
	else
	{
		printf("Couldn't find this number!\n");
	}
	return head;
}
void print(struct Student *p)
{
	printf("There %d records are:\n", n);
	while (p != NULL)
	{
		printf("%d %s %d\n", p->num, p->name, p->score);
		p = p->next;
	}
}