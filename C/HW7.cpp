#include<stdio.h>

int main()
{
	double distance, kmh, second;
	int hour, minute;
	printf("�Ÿ��� �Է��Ͻÿ�(km����) :");
	scanf("%lf", &distance);
	printf("�ü��� �Է��Ͻÿ�(km/h����) :");
	scanf("%lf", &kmh);
	hour = distance / kmh;
	minute = (distance / kmh - hour) * 60;
	second = ((distance / kmh - hour) * 60 - minute) * 60;
	printf("%0.2lf km = > %d�ð� %d�� %0.3lf �� �ҿ��\n", distance, hour, minute, second);
	return 0;
}