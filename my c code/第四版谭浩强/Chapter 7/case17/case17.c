#include <stdio.h>
int main()
{
	void convert(int);
	int n;
	printf("input an integer:\n");
	scanf("%d",&n);
	if(n<0)
	{
		putchar('-');
		putchar(' ');
		n=-n;
	}
	convert(n);
	printf("\n");
	return 0;
}
void convert(int n)
{
	int i;
	if((i=n/10)!=0)
	{
		convert(i);
	}
	putchar(n%10+'0');
	putchar(32);
}