#include <stdio.h>
int main()
{
	int cap=0,low=0,digit=0,space=0,other=0,i;
	char *p,a[20];
	printf("input a string:\n");
	for(i=0;(a[i]=getchar())!='\n';)
	{
		i++;
	}
	for(p=a;*p!='\n';p++)
	{
		if((*p>='A')&&(*p<='Z'))
			++cap;
		else if((*p>='a')&&(*p<='z'))
			++low;
		else if((*p>='0')&&(*p<='9'))
			++digit;
		else if(*p=' ')
			++space;
		else
			++other;
	}
		printf("Captial:%d\tLowercase:%d\t\n",cap,low);
		printf("Digit:%d\tSpace:%d\nOther:%d\n",digit,space,other);
		return 0;
}