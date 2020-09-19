#include <stdio.h>
#include <string.h>
int main()
{
	void sort(char *p[]);
	char *p[5],str[5][10];
	int i;
	for(i=0;i<5;i++)
	{
		p[i]=str[i];
	}
	printf("input 5 strings:\n");
	for(i=0;i<5;i++)
	{
		scanf("%s",p[i]);
	}
	sort(p);
	printf("New array:\n");
	for(i=0;i<5;i++)
	{
		printf("%s\n",p[i]);
	}
	return 0;
}
void sort(char *p[])
{
	char *t;
	int i,j;
	for(i=0;i<4;i++)
	{
		for(j=0;j<4-i;j++)
		{
			if(strcmp(*(p+i),*(p+i+1))>0)
			{
				t=*(p+i);
				*(p+i)=*(p+i+1);
				*(p+i+1)=t;
			}
		}
	}
}