#include <stdio.h>
#include <string.h>
int main()
{
	int flag1=0,flag2=0,i,num=2;
	char cname[10]="Briz",cpassword[10]="2000519",name[10],password[10];
	for(i=0;i<3;i++)
	{
		printf("input user name:\n");
		gets(name);
		printf("input password:\n");
		gets(password);
		if(strcmp(name,cname)==0)
		{
			flag1=1;
		}
		if(strcmp(password,cpassword)==0)
		{
			flag2=1;
		}
		if(flag1==1&&flag2==1)
		{
			printf("Welcome!\n");
			break;
		}
		else
		{
			printf("Wrong user name or password!\n");
			printf("You have try %d times and you can try %d times!",num,num--);
		}
	}
	printf("You have entered three times faultly and no more times!Please exit!\n");
	return 0;
}
