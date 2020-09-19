#include <stdio.h>
int main()
{
	char *month[12]={"January","February","March","April","May","June","July","August","September","October","November","December"};
	int n;
	printf("Please enter month number:\n");
	scanf("%d",&n);
	if((n>1)&&(n<12))
	{
		printf("It's %s!\n",*(month+n-1));
	}
	else
	{
		printf("Enter error!\n");
	}
	return 0;
}