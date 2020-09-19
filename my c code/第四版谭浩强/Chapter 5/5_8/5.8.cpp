#include <stdio.h>
/*
#include <math.h>
int main()
{
	int sign = 1;
	float pai=0, n=1, t=1;
	while (fabs(t) >= 1e-6)
	{
		pai += t;
		sign = -sign;
		n = n + 2;
		t = sign / n;
	}
	pai = pai * 4;
	printf("Pai=%g\n",pai);
	return 0;
}
*/

/*
int main()
{
	int f1 = 1, f2 = 1,i,f3;
	printf("%d\n%d\n",f1,f2);
	for (i = 0; i <= 38; i++)
	{
		f3 = f1 + f2;
		printf("%d\n",f3);
		f1 = f2;
		f2 = f3;
	}
	return 0;
}
*/

/*
int main()
{
	int f1 = 1, f2 = 1,i;
	for (i = 1; i <= 20; i++)
	{
		printf("%12d %12d",f1,f2);
		if (i % 2 == 0)
		{
			printf("\n");
		}
		f1 = f1 + f2;
		f2 = f2 + f1;
	}
	return 0;
}
*/

/*
int main()
{
	int n, i;
	printf("Enter a number to calculate if it is a prime:\n");
	scanf_s("%d",&n);
	for (i = 2; i <= n - 1; i++)
	{
		if (n % i == 0)
		{
			break;
		}
	}
	if (i < n)
	{
		printf("%d is not a prime!\n", n);
	}
	else
	{
		printf("%d is a prime!\n", n);
	}
	return 0;
}
*/

int main()
{
	char c;
	while ((c=getchar()) != '\n')
	{
		if (c >= 'A' && c <= 'z' || c >= 'a' && c <= 'z')
		{
			if (c >= 'w' && c <= 'z' || c >= 'W' && c <= 'Z')
			{
				c = c - 22;
			}
			else
			{
				c = c + 4;
			}
		}
		printf("%c",c);
	}
	return 0;
}