#include<stdio.h>

int main()
{
	double year = 365.2422;
	int day = (int)year;
	double hour = (year - day) * 24;
	double minute = (hour-(int)hour)*60;
	double second = (minute - (int)minute) * 60;

	printf("%0.4lf���� %d�� %d�ð� %d�� %0.2lf�� �Դϴ�\n", year, day, (int)hour, (int)minute, second);

	return 0;
 }
