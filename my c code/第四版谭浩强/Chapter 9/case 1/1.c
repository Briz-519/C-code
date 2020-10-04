#include <stdio.h>
struct Date
{
	int year;
	int month;
	int day;
};
int main()
{
	struct Date days;
	int d = 0;
	printf("Enter date:\n");
	scanf("%d %d %d", &days.year, &days.month, &days.day);
	for (int i = 1; i < days.month; i++)
	{
		if (i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12)
		{
			d += 31;
		}
		else if (i == 2)
		{
			d += 28;
		}
		else
		{
			d += 30;
		}
	}
	d += days.day;
	if (((days.year % 4 == 0 && days.year % 100 != 0) || (days.year % 400 == 0))&&(days.month>2))
	{
		d += 1;
	}
	printf("Today is the %d \n",d);
}
/*
#include <stdio.h>
struct Day
{
	int year;
	int month;
	int day;
}date;
int main()
{
	int days;
	printf("Enter Year Month Day:\n");
	scanf_s("%d%d%d", &date.year, &date.month, &date.day);
	switch (date.month)
	{
	case 1:days = date.day;
		break;
	case 2:days = date.day + 31;
		break;
	case 3:days = date.day + 59;
		break;
	case 4:days = date.day + 90;
		break;
	case 5:days = date.day + 120;
		break;
	case 6:days = date.day + 151;
		break;
	case 7:days = date.day + 181;
		break;
	case 8:days = date.day + 212;
		break;
	case 9:days = date.day + 243;
		break;
	case 10:days = date.day + 273;
		break;
	case 11:days = date.day + 304;
		break;
	case 12:days = date.day + 334;
		break;
	}
	if ((date.year % 4 == 0) && (date.year % 100 != 0) || (date.year % 400 == 0) && date.month >= 3)
	{
		days += 1;
	}
	printf("This day is the %dth day!",days);
	return 0;
}
*/