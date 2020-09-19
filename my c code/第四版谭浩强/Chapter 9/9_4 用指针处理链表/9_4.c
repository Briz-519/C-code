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

#include <stdlib.h>
#define LEN sizeof(struct Student)
struct Student
{
	long num;
	float score;
	struct Student* next;
};
int n;
int main()
{
	void print(struct Student* head);
	struct Student* creat(void);
	struct Student* head;
	head = creat();
	print(head);
	return 0;
}
struct Student* creat(void)
{
	struct Student* head;
	struct Student *p1, * p2;
	p1 = p2 = (struct Student*)malloc(LEN);
	scanf_s("%ld%f",&p1->num,&p1->score);
	head = NULL;
	for (n = 0; p1->num != 0; )
	{
		n = n + 1;
		if (n == 1)
		{
			head = p1;
		}
		else
		{
			p2->next = p1;
		}
		p2 = p1;
		p1 = (struct Student *)malloc(LEN);
		scanf_s("%ld%f",&p1->num,&p1->score);
	}
	p2->next = NULL;
	return head;
}

void print(struct Student* head)
{
	struct Student* p;
	p = head;
	printf("These %d records are:\n",n);
	if (head != NULL)
	{
		while (p != NULL)
		{
			printf("%ld\t%f\n",p->num,p->score);
			p = p->next;
		}
	}
}