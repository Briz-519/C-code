#include <stdio.h>
int main()
{
	int i,j,cap=0,low=0,dig=0,spa=0,oth=0;
	char a[3][80];
	for(i=0;i<3;i++)
	{
		printf("Enter line %d:\n",i+1);
		gets(a[i]);
		for(j=0;j<80&&a[i][j]!='\n';j++)
		{
			if(a[i][j]>='A'&&a[i][j]<='Z')
				cap++;
			else if(a[i][j]>='a'&&a[i][j]<='z')
				low++;
			else if(a[i][j]>='0'&&a[i][j]<='9')
				dig++;
			else if(a[i][j]==' ')
				spa++;
			else
				oth++;
		}
	}
	printf("Capital:%d\nLowercase:%d\nDigit:%d\nSpace:%d\nOther:%d\n",cap,low,dig,spa,oth);
	return 0;
}