#include <stdio.h>
#include <string.h>
int main()
{
	char m[20],str[3][20],i;
	for(i=0;i<3;i++)
	{
		printf("Enter a word:\n");
		gets(str[i]);
	}
	if(strcmp(str[0],str[1])<0)
	{
		strcpy(m,str[1]);
	}
	else
		strcpy(m,str[0]);
	if(strcmp(str[2],m)>0)
		strcpy(m,str[2]);
	printf("\nThe largest string is:%s\n",m);
	return 0;
}