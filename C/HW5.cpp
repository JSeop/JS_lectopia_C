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
	printf("���� ��뷮�� �Է��ϼ���(kw): ");
	scanf("%lf", &kwAmount);
	return kwAmount;
}
void output(double tax)
{
	printf("���� ������� %lf�� �Դϴ�.\n", tax);
}