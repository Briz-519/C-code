#include <stdio.h>
int main()
{
	int a, b, c, s, t;
	printf("Enter two number:\n");
	scanf("%d%d",&a,&b);
	if (a < b)
	{
		t = a;
		a = b;
		b = t;
	}
	s = a * b;
	while (b != 0)
	{
		c = a % b;
		a = b;
		b = c;
	}
	printf("最大公约数=%d\n",a);
	printf("最小公倍数=%d\n",s/a);
	return 0;
}