#include <stdio.h>
#include <string.h>
#define N 5
int main()
{
	void sort(char a[N][4]);
	char a[N][4];
	int i;
	printf("Enter %d array:\n",N);
	for(i=0;i<N;i++)
	{
		scanf("%s",a[i]);
	}
	sort(a);
	for(i=0;i<N;i++)
	{
		printf("%s\n",a[i]);
	}
	return 0;
}
void sort(char a[N][4])
{
	char *p,t[N];
	int i,j;
	p=t;
	for(i=0;i<N-1;i++)
	{
		for(j=0;j<N-1-i;j++)
		{
			if(strcmp(a[j],a[j+1])>0)
			{
				strcpy(p,a[j]);
				strcpy(a[j],a[j+1]);
				strcpy(a[j+1],p);
			}
		}
	}
}