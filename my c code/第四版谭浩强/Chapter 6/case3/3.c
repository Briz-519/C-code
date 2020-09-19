#include <stdio.h>
int main()
{
	int a[3][3],i,j,sum=0;
	printf("Enter 3x3 array:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<3;i++)
	{
		sum+=a[i][i];
	}
	printf("sum=%d",sum);
}