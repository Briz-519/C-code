#include <stdio.h>
int main()
{
	float i;
	float s1 = 0, s2 = 0,s3 = 0;
	for (i = 1; i <= 100; i++)
	{
		s1 += i;
	}
	for (i = 1; i <= 50; i++)
	{
		s2 += i * i;
	}
	for (i = 1; i <= 10; i++)
	{
		s3 += 1 / i;
	}
	printf("sum=%f",s1+s2+s3);
	return 0;
}