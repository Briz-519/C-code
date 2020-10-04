#include <stdio.h>
/*
struct Student
{
	int num;
	float score;
	struct Student* next;
};
int main()
{
	struct Student a, b, c, * p, * head;
	a.num = 10101; a.score = 89.5;
	b.num = 10103; b.score = 90;
	c.num = 10107; c.score = 85;
	head = &a;
	a.next = &b;
	b.next = &c;
	c.next = NULL;
	p = head;
	while (p != NULL)
	{
		printf("No.%d\tScore:%f\n",p->num,p->score);
		p = p->next;
	}
	return 0;
}
*/

#include <stdio.h>
#include <stdlib.h>
#define LEN sizeof(struct Student)
struct Student *creat();
void print(struct Student *p);
struct Student
{
	int num;
	int score;
	struct Student *next;
};
int n;
int main()
{
	struct Student *pt;
	pt = creat();
	print(pt);
	return 0;
}
struct Student *creat()
{
	struct Student *head, *p1, *p2;
	n = 0;
	p1 = p2 = (struct Student *)malloc(LEN);
	scanf("%d %d", &p1->num, &p1->score);
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
		scanf("%d %d", &p1->num, &p1->score);
	}
	p2->next = NULL;
	return head;
}
void print(struct Student *p)
{
	printf("There %d records are:\n",n);
	while (p != NULL)
	{
		printf("%d %d\n", p->num, p->score);
		p = p->next;
	}
}