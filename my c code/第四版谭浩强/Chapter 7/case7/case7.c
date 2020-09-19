#include <stdio.h>
void cpy(char a[], char b[]);
int main()
{
	char a[10], b[10];
	printf("Enter array:\n");
	scanf("%s", a);
	cpy(a, b);
	printf("The vowal letter are %s\n", b);
	return 0;
}
void cpy(char a[], char b[])
{
	int i, j = 0;
	for (i = 0; a[i] != '\0'; i++)
	{
		if (a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u')
		{
			b[j++] = a[i];
		}
	}
	b[j] = '\0';
}