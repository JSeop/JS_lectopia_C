#include<stdio.h>

double input();
void output(double);
int main()
{
	int baseCost = 660;
	double kwCost = 88.5, totalCost, tax, kwAmount;

	kwAmount = input();
	totalCost = baseCost + kwCost*kwAmount;
	tax = totalCost + totalCost*0.09;
	output(tax);
	return 0;
}
double input()
{
	double kwAmount;
	printf("전기 사용량을 입력하세요(kw): ");
	scanf("%lf", &kwAmount);
	return kwAmount;
}
void output(double tax)
{
	printf("전기 사용요금은 %lf원 입니다.\n", tax);
}