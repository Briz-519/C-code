#include <stdio.h>
int main()
{
	int i,j,s;
	for(i=1;i<=1000;i++)
	{
		s=0;//����һ�����ӺͶ���Ҫ��s����
		for(j=1;j<i;j++)
		{
			if(i%j==0)
			{
				s+=j;//������������ӣ���˴˴���j��Ϊ��������
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