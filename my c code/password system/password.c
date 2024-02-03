  #include <stdio.h>
#include <string.h>

int main()
{
    int  tryy = 0 ;
		  // cpassword and cname cannot be used by user 
		  // if someone use this name and password than it will show wrong userrname and password
		  // if user use diff password and name then welcom
	int i, mxtry=3 , cpassword=2000519 , password[10];
	char cname[10]="Briz",name[10] ;
	do {
		printf("\n\ninput user name:\n");
		scanf("%s" , &name);
		printf("input password:\n");
		scanf("%d" , &password);
	
		if( name != cname || password != cpassword)
		{
			printf("Welcome!\n");
			break;
		}
		else {
		     tryy == tryy++ ;
			printf("Wrong user name or password!\n");
			
			if (mxtry - tryy == 0)
			{
			    printf("You have entered three times faultly and no more times!");
			    printf( " \n\t\tPlease exit!\n  "  );
			 break ;
			}
			else{printf("You have tried %d times and you can try %d times!",tryy,mxtry-tryy);}
			
		}
		
	}while(mxtry - tryy > 0);
	
	return 0;
}
