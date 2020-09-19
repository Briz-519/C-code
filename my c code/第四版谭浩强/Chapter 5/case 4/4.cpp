#include <stdio.h>
int main()
{
	int digit=0,capital=0,lowercase=0,other=0,space=0;
	char c;
	printf("Enter strings:\n");
	while((c=getchar())!='\n')
	{
		if(c>='a'&&c<='z')
			lowercase++;
		else if(c>='A'&&c<='Z')
			capital++;
		else if(c>='0'&&c<='9')
			digit++;
		else if(c==' ')
			space++;
		else
			other++;
	}
	printf("Digit:%d\nCapital:%d\nLowercase:%d\nSpace:%d\nOther:%d\n",digit,capital,lowercase,space,other);
	return 0;
}