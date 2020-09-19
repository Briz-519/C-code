#include <stdio.h>
/*int main()
{
	char *str="I love China!";
	printf("%s\n",str);
	return 0;
}*/

/*
int main()
{
	char *a="into the unknow!",b[20];
	char *p1,*p2;
	p1=a;
	p2=b;
	for(;*p1!='\0';p1++)
	{
		*p2=*p1;
		p2++;
	}
	*p2='\0';
	printf("str1=%s\n",a);
	printf("str2=%s\n",b);
	return 0;
}
*/

/*
int main()
{
	void copy(char from[],char to[]);
	char a[]="into the unknow!";
	char b[]="into the know!";
	printf("copy str_a to str_b:\n");
	copy(a,b);
	printf("str_a:%s\nstr_b:%s\n",a,b);
	return 0;
}
void copy(char from[],char to[])
{
	while(*to++=*from++);
}
*/
int main()
{
	char *a="Fuck you bitch!",*b="%s\n";
	a=a+7;
	printf(b,a);
	return 0;
}