#include <stdio.h>
int main()
{
	int max(int x,int y);
	int x,y,ma;
	printf("Enter two number to compare:\n");
	scanf("%d %d",&x,&y);
	ma=max(x,y);
	printf("Max=%d\n",ma);
}
int max(int x,int y)
{
	int max;
	max=x>y?x:y;
	return max;
}