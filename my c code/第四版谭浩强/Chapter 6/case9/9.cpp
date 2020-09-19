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
	while(flag)//flag控制是否继续循环
	{
		printf("\nEnter a number you want to find:\n");
		scanf("%d",&n);
		top=0;
		bot=N-1;
		sign=0;//sign表示是否找到该数
		if(n<a[0]||n>a[N-1])
		{
			loc=-1;
		}
		while((!sign)&&(top<=bot))  //此处top<=bot不能忘否则会导致top无限+1，bot无限-1进入死循环
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
		getchar();//%c是在缓冲区内找到一个字符赋值给变量。输入变量时一般用回车来结束也就是“\n”，它也属于一个字符被写入了缓冲区内所以被赋值给变量了，所以导致无法赋值给c
				  //因此使用getchar()清空回车符，为接下来给变量c赋值做准备
		scanf("%c",&c);
		if(c=='N'||c=='n')
		{
			flag=0;
		}
	}
	return 0;
}