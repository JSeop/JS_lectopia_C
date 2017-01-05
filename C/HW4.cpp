#include<stdio.h>

int main()
{
	double year = 365.2422;
	int day = (int)year;
	double hour = (year - day) * 24;
	double minute = (hour-(int)hour)*60;
	double second = (minute - (int)minute) * 60;

	printf("%0.4lf일은 %d일 %d시간 %d분 %0.2lf초 입니다\n", year, day, (int)hour, (int)minute, second);

	return 0;
 }
