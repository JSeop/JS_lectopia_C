#include<stdio.h>
void input(char *, int *, int *, int *);
int checkStr(int, int, int);
int yearCheck(int);
int totalDay(int, int, int);
void output(int, int, int, int);
void myfflush();
int main()
{
	int year, month, day, check, total;
	while (1) {
		input("* 년 월 일을 입력하시오 : ", &year, &month, &day);
		check = checkStr(year, month, day);
		if (check == 1)
			break;
	}
	total=totalDay(year, month, day);
	output(year, month, day, total);
	return 0;
}
void input(char * message, int * year, int * month, int * day)
{
	printf(message);
	while ((scanf("%d%d%d", year, month, day)!=3)){
		printf(message);
		myfflush();
		
	}
}
int checkStr(int year, int month, int day)
{
	int leapYear;
	leapYear = yearCheck(year);
	if (1900 <=year && (1<=month && month <=12) && (1<=day && day<=31)) {
		if (leapYear == 0 && day <= 28)
			return 1;
		else if (leapYear == 1 && day <= 29)
			return 1;
		else
			return 0;
	}
	else
		return 0;
}
int yearCheck(int year)
{
	if (year % 4 == 0) {
		if (year % 100 == 0) {
			if (year % 400 == 0)
				return 1;
			else
				return 0;
		}
		else
			return 1;
	}
	else
		return 0;
}
int totalDay(int year, int month, int day)
{
	int total = 0, i, check, monthList[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	for (i = 1900; i < year; i++) {
		check = yearCheck(i);
		if (check == 1)
			total += 366;
		else
			total += 365;
	}
	for (i = 1; i < month; i++) {
		if (i == 2) {
			check = yearCheck(year);
			total += monthList[i - 1] + check;
		}
		else
			total += monthList[i - 1];
	}
	total += day;

	return total;
}
void output(int year, int month, int day, int total)
{
	int check;
	check = total % 7;
	if (check == 0)
		printf("%d년 %d월 %d일은 일요일입니다.\n", year, month, day);
	else if(check == 1)
		printf("%d년 %d월 %d일은 월요일입니다.\n", year, month, day);
	else if (check == 2)
		printf("%d년 %d월 %d일은 화요일입니다.\n", year, month, day);
	else if (check == 3)
		printf("%d년 %d월 %d일은 수요일입니다.\n", year, month, day);
	else if (check == 4)
		printf("%d년 %d월 %d일은 목요일입니다.\n", year, month, day);
	else if (check == 5)
		printf("%d년 %d월 %d일은 금요일입니다.\n", year, month, day);
	else if (check == 6)
		printf("%d년 %d월 %d일은 토요일입니다.\n", year, month, day);
}
void myfflush()
{
	while (getchar() != '\n')
	{
		;
	}
}
