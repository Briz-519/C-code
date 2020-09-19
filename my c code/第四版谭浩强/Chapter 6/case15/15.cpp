#include <stdio.h>
#include <string.h>
int main()
{
	char s1[10],s2[10];
	int i;
	printf("Enter s2:\n");
	gets(s2);
	for(i=0;i<=strlen(s2);i++)
	{
		s1[i]=s2[i];
	}
	printf("%s\n",s1);
}