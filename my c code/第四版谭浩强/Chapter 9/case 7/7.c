#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LEN sizeof(struct Student)
struct Student *creat();
struct Student *del(struct Student *head, int num);
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
	char c;
	int num;
	pt = creat();
	printf("Do you want to delete a data?(Y/N)\n");
	getchar();
	scanf("%c", &c);
	if (c=='y'||c=='Y')
	{
		printf("Please input the number which you want to delete:\n");
		scanf("%d", &num);
		print(del(pt, num));
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
	printf("Enter students' number and score:\n");
	scanf("%d %d", &p1->num, &p1->score);
	head = NULL;
	while (p1->num != 0)
	{
		++n;
		if (n == 1)	//˵����ʱ�����˷�0�����֣�����һ�����ݵĵ�ַ����head��Ϊ��һ�����
		{
			head = p1;
		}
		else			//��ʱ��p1�����ݸ���p2��next��Ա
		{
			p2->next = p1;
		}
		p2 = p1;	//��p2ָ��p1�����ݣ���ʱnext��Ա׼��������һ�����ݵĵ�ַ
		p1 = (struct Student *)malloc(LEN);
		scanf("%d %d", &p1->num, &p1->score);
	}
	p2->next = NULL;
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
		printf("%d %d\n", p->num, p->score);
		p = p->next;
	}
}