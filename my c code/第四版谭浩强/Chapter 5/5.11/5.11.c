#include <stdio.h>
int main()
{
	char c;
	c=getchar();
	while(c!='\n')
	{
		if((c>='A'&&c<='Z')||(c>='a'&&c<='z'))
		{
			if((c>='A'&&c<='W')||(c>='a'&&c<='w'))
			{
				c=c+4;
			}
			else
				c=c-22;
		}
		printf("%c",c);
		c=getchar();
	}
	printf("\n");
	return 0;
}