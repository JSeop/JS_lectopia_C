#include<stdio.h>

int main()
{
	int time = 54321, hour, minute, second;
	hour = time / 3600;
	minute = (time - hour * 3600)/60;
	second = time - hour * 3600 - minute * 60;

	printf("%d초는 %d시간 %d분 %d초 입니다.\n", time,hour,minute,second);
	return 0;
 }
