/*
解:魔方阵中各数的排列规律如下:
(1)将1放在第1行中间一列。
(2)从2开始直到nXn止各数依次按下列规则存放:每一个数存放的行比前一个数的
行数减1,列数加1(例如上面的三阶魔方阵,5在4的上- -行后- -列)。
(3)如果上一数的行数为1,则下一个数的行数为n(指最下一行)。例如,1在第1行，
则2应放在最下一行,列数同样加1。
(4)当上一个数的列数为η时，下一个数的列数应为1,行数减1。例如,2在第3行最
后- -列，则3应放在第2行第1列。
(5)如果按上面规则确定的位置上已有数,或上一个数是第1行第n列时,则把下一个
数放在上一个数的下面。例如,按上面的规定,4应该放在第1行第2列,但该位置已被1
占据,所以4就放在3的下面。由于6是第1行第3列(即最后- -列),故7放在6下面。
*/
#include <stdio.h>
int main()
{ int a[15][15],i,j,k,p,n;
  p=1;
  while(p==1)
    {printf("enter n(n=1--15):");	
     scanf("%d",&n);
     if ((n!=0) && (n<=15) && (n%2!=0))
       p=0;
    }
  for (i=1;i<=n;i++)
     for (j=1;j<=n;j++)
       a[i][j]=0;
  j=n/2+1;
  a[1][j]=1;
  for (k=2;k<=n*n;k++)
    {i=i-1;
     j=j+1;
     if ((i<1) && (j>n))
       {i=i+2;
        j=j-1;
       }
     else
       {if (i<1) i=n;
	    if (j>n) j=1;
       }
     if (a[i][j]==0)
       a[i][j]=k;
     else
       {i=i+2;
	    j=j-1;
	    a[i][j]=k;
       }
    }
  for (i=1;i<=n;i++)
    {for (j=1;j<=n;j++)
       printf("%5d",a[i][j]);
     printf("\n");
    }
  return 0;
 }
