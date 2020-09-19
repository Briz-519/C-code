#include <stdio.h>
int main()
{
	int a,n,sa=0,i=1,an;
	printf("Enter a:\n");
	scanf("%d",&a);
	printf("Enter n:\n");
	scanf("%d",&n);
	an=a;
	while(i<=n)
	{
		i++;
		sa+=a;
		a=a*10+an;
	}
	printf("%d\n",sa);
}