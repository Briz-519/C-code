#include <stdio.h>
#include <string.h>
int main()
{
	void sort(char **p);
	char **p,*pstr[5],str[5][10];
	int i;
	for(i=0;i<5;i++)
	{
		pstr[i]=str[i];
	}
	printf("Please input 5 strings:\n");
	for(i=0;i<5;i++)
	{
		scanf("%s",pstr[i]);
	}
	p=pstr;
	sort(p);
	printf("Sorted array:\n");
	for(i=0;i<5;i++)
	{
		printf("%s\n",pstr[i]);
	}
	return 0;
}
void sort(char **p)
{
	int i,j;
	char *t;
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(strcmp(*(p+i),*(p+j))>0)
			{
				t=*(p+i);
				*(p+i)=*(p+j);
				*(p+j)=t;
			}
		}
	}
}
