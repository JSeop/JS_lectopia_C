#include<stdio.h>

double input();
void output(double);
int main()
{
	double c, f;

	f = input();
	c = (double)5 / (double)9 * (f - 32);
	output(c);
	return 0;
}
double input()
{
	double f;
	printf("화씨 온도를 입력하세요: ");
	scanf("%lf", &f);
	return f;
}
void output(double c)
{
	printf("섭씨 온도는 %.1lf 도 입니다.\n", c);
}