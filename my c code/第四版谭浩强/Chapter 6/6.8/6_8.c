#include <stdio.h>
#include <string.h>
int main()
{
	char str[20],i,n=1;
	printf("Enter a string:\n");
	gets(str);
	for(i=0;i<strlen(str);i++)
	{
		if(str[i]==' ')
		{
			n++;
		}
	}
	printf("String has %d words\n",n);
}