#include <stdio.h>
int main()
{
	void move(int *p);
	int a[3][3],*p,i;
	printf("input 3x3 array:\n");
	for(i=0;i<3;i++)
		scanf("%d %d %d",&a[i][0],&a[i][1],&a[i][2]);
	p=*a;
	move(p);
	printf("New array:\n");
	for(i=0;i<3;i++)
	{
		printf("%d %d %d\n",a[i][0],a[i][1],a[i][2]);
	}
	return 0;
}
void move(int *p)
{
	int i,j,t;
	for(i=0;i<3;i++)
	{
		for(j=i;j<3;j++)
		{
			t=*(p+3*i+j);
			*(p+3*i+j)=*(p+3*j+i);
			*(p+3*j+i)=t;
		}
	}
}