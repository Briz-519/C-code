#include <stdio.h>
#define N 5
int main()
{
	int a[N],i,n,flag=1,top,bot,mid,sign,loc;
	char c;
	printf("Enter data:\n");
	scanf("%d",&a[0]);
	i=1;
	while(i<N)
	{
		scanf("%d",&a[i]);
		if(a[i]>=a[i-1])
		{
			i++;
		}
		else
		{
			printf("Enter this data again:\n");
		}
	}
	for(i=0;i<N;i++)
	{
		printf("%d ",a[i]);
	}
	while(flag)//flag�����Ƿ����ѭ��
	{
		printf("\nEnter a number you want to find:\n");
		scanf("%d",&n);
		top=0;
		bot=N-1;
		sign=0;//sign��ʾ�Ƿ��ҵ�����
		if(n<a[0]||n>a[N-1])
		{
			loc=-1;
		}
		while((!sign)&&(top<=bot))  //�˴�top<=bot����������ᵼ��top����+1��bot����-1������ѭ��
		{
			mid=(top+bot)/2;
			if(n==a[mid])
			{
				sign=1;
				loc=mid;
				printf("Has found %d ,its position is %d\n",n,loc+1);
			}
			else if(n<a[mid])
			{
				bot=mid-1;
			}
			else
			{
				top=mid+1;
			}
		}
		if(!sign||loc==-1)
		{
			printf("Can't find this number!\n");
		}
		printf("Continue or not(Y/N)?\n");
		getchar();//%c���ڻ��������ҵ�һ���ַ���ֵ���������������ʱһ���ûس�������Ҳ���ǡ�\n������Ҳ����һ���ַ���д���˻����������Ա���ֵ�������ˣ����Ե����޷���ֵ��c
				  //���ʹ��getchar()��ջس�����Ϊ������������c��ֵ��׼��
		scanf("%c",&c);
		if(c=='N'||c=='n')
		{
			flag=0;
		}
	}
	return 0;
}