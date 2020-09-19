#include <stdio.h>
int main()
{
	int a[3][4],i,j,max,row,colum;
	printf("Enter 12 number:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	max=a[0][0];
	printf("\nThe array:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("%d ",a[i][j]);
			if(max<a[i][j])
			{
				max=a[i][j];
				row=i;
				colum=j;
			}
		}
		printf("\n");
	}
	printf("\nMax:%d\nRow:%d\nColum:%d\n",max,row,colum);
	return 0;
}