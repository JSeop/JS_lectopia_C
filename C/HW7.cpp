#include<stdio.h>

int main()
{
	double distance, kmh, second;
	int hour, minute;
	printf("거리를 입력하시오(km단위) :");
	scanf("%lf", &distance);
	printf("시속을 입력하시오(km/h단위) :");
	scanf("%lf", &kmh);
	hour = distance / kmh;
	minute = (distance / kmh - hour) * 60;
	second = ((distance / kmh - hour) * 60 - minute) * 60;
	printf("%0.2lf km = > %d시간 %d분 %0.3lf 초 소요됨\n", distance, hour, minute, second);
	return 0;
}