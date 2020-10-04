#include <stdio.h>
#include <string.h>
int main()
{
	int a[100], i, m, n, flag = 0, t;
	printf("Enter people's number:\n");
	scanf("%d", &n);
	t = n;
	for (i = 0; i < n; i++)
	{
		a[i] = i + 1;
	}
	i = 0;
	while (n > 1)
	{
		if (a[i] != 0)
		{
			flag++;
		}
		if (flag == 3)
		{
			a[i] = 0;
			flag = 0;
			n--;
		}
		i++;
		if (i == t)    //新一轮叫3的人
		{
			i = 0;
		}
	}
	for (i = 0; i < t; i++)
	{
		if (a[i] != 0)
		{
			printf("No.%d\n",a[i]);
		}
	}
}