#include <stdio.h>
/*
#include <string.h>
int main()
{
	void sort(char *name[],int n);
	void print(char *name[],int n);
	char *name[]={"Into the unknow","When I am older","The Rook","The end of the fucking world"};
	int n=4;
	sort(name,n);
	print(name,n);
	return 0;
}
void sort(char *name[],int n)
{
	int i,j,k;
	char *t;
	for(i=0;i<n;i++)
	{
		k=i;
		for(j=i+1;j<n;j++)
		{
			if(strcmp(name[j],name[k])<0)
			{
				k=j;
			}
		}
		//if(k!=i)
		{
			t=name[i];
			name[i]=name[k];
			name[k]=t;
		}
	}
}
void print(char *name[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%s\n",name[i]);
	}
}
*/

/*
int main()
{
	char *name[]={"Into the unknow","When I am older","The Rook","The end of the fucking world"};
	int i;
	char **p;
	for(i=0;i<4;i++)
	{
		p=name+i;
		printf("%d\t",*p);
		printf("%s\n",*p);
	}
	return 0;
}
*/

int main()
{
	int a[5]={1,2,3,4,5};
	int *n[5]={&a[0],&a[1],&a[2],&a[3],&a[4]};
	int **p,i;
	for(i=0;i<5;i++)
	{
		p=n+i;
		printf("%d",**p);
	}
	return 0;
}