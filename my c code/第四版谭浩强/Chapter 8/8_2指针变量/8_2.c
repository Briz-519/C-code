#include <stdio.h>
/*int main()
{
	int a=10,b=100;
	int *a_pointer,*b_pointer;
	a_pointer=&a;
	b_pointer=&b;
	printf("a=%d\t\tb=%d\n*a_pointer=%d\t*b_pointer=%d\n",a,b,*a_pointer,*b_pointer);
	return 0;
}*/
/*int main()
{
	int *p1,*p2,a,b;
	printf("input two integer number:\n");
	scanf("%d%d",&a,&b);
	p1=&a;
	p2=&b;
	if(a<b)
	{
		p1=&b;   //改变了指针，a和b没变
		p2=&a;
	}
	printf("max=%d\tmin=%d\n",*p1,*p2);
	return 0;
}*/
/*int main()
{
	void max(int *p1,int *p2);
	int *p1,*p2,a,b;
	printf("input two integer:\n");
	scanf("%d%d",&a,&b);
	p1=&a;
	p2=&b;
	max(p1,p2);  //与上一例子不同，此例子改变了a和b的值
	printf("max=%d\tmin=%d\n",*p1,*p2);
	return 0;
}
void max(int *p1,int *p2)
{
	int p;
	if(*p1<*p2)
	{
		p=*p1;
		*p1=*p2;
		*p2=p;
	}
}*/
int main()
{
	void exchange(int *pa,int *pb,int *pc);
	int a,b,c,*pa,*pb,*pc;
	printf("input three integer:\n");
	scanf("%d%d%d",&a,&b,&c);
	pa=&a;
	pb=&b;
	pc=&c;
	exchange(pa,pb,pc);
	printf("max=%d\tmid=%d\tmin=%d\n",*pa,*pb,*pc);
	return 0;
}
void exchange(int *pa,int *pb,int *pc)
{
	void swap(int *p1,int *p2);
	if(*pa<*pb)
	{
		swap(pa,pb);
	}
	if(*pa<*pc)
	{
		swap(pa,pc);
	}
	if(*pb<*pc)
	{
		swap(pb,pc);
	}
}
void swap(int *p1,int *p2)
{
	int p;
	p=*p1;
	*p1=*p2;
	*p2=p;
}