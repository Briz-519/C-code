#include <stdio.h>

int main()
{
	enum  Color { red, yellow, blue, white, black };
	int i, j, k, pri;    //vc 6.0++����ʹ��ö�����ͱ�������vs2019�лᵼ�±�����˽�������Ϊint��
	int n, loop;
	n = 0;
	for (i = red; i <= black; i++)
	{
		for (j = red; j <= black; j++)
		{
			if (i != j)
			{
				for (k = red; k <= black; k++)
				{
					if ((i != k) && (k != j))
					{
						n = n + 1;
						for (loop = 1; loop <= 3; loop++)
						{
							switch (loop)
							{
							case 1:pri = i; break;
							case 2:pri = j; break;
							case 3:pri = k; break;
							default:break;
							}
							switch (pri)
							{
							case red:printf("%s", "red\t"); break;
							case yellow:printf("%s", "yellow\t"); break;
							case blue:printf("%s", "blue\t"); break;
							case white:printf("%s", "white\t"); break;
							case black:printf("%s", "black\t"); break;
							}
						}
						printf("\n");
					}
				}
			}
		}
	}
	printf("Total:%d\n",n);
	return 0;
}