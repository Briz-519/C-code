#include <stdio.h>
struct Days
{
	int year;
	int month;
	int day;
}date;
int main()
{
	int days(int year, int month, int day);
	int sum;
	printf("Enter Year Month Day:\n");
	scanf_s("%d%d%d",&date.year,&date.month,&date.day);
	sum=days(date.year, date.month, date.day);
	printf("This day is the %dth day!",sum);
}
int days(int year,int month,int day)
{
	int sum=0, i;
	int day_tab[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
	for (i = 1; i < month; i++)
	{
		sum += day_tab[i];
	}
	sum += day;
	if ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0) && month >= 3)
	{
		sum += 1;
	}
	return sum;
}