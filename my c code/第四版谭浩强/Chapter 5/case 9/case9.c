#include <stdio.h>
int main()
{
	int i,j,s;
	for(i=1;i<=1000;i++)
	{
		s=0;//算完一次因子和都需要将s清零
		for(j=1;j<i;j++)
		{
			if(i%j==0)
			{
				s+=j;//将所有因子相加，因此此处的j即为所有因子
			}
		}
		if(i==s)
		{
			printf("%d,its factors are ",i);
			for(j=1;j<i;j++)
			{
				if(i%j==0)
				{
					printf("%d ",j);
				}
			}
			printf("\n");
		}
	}
	return 0;
}