#include <stdio.h>
void enter_str(char str[]);
void delete_str(char str[], char c);
void print_str(char str[]);
int main()
{
	char c, str[50];
	enter_str(str);
	printf("Enter a char:\n");
	scanf_s("%c",&c);
	delete_str(str, c);
	print_str(str);
	return 0;
}