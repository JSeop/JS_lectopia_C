#include<stdio.h>

int input();
void output(int, int, int);
int calPay(int);
int calTax(int);
int main()
{
	int hour, pay, tax;
	printf("* 1���ϰ��� �ٹ��ð��� �Է��Ͻÿ� : ");
	hour = input();
	pay = calPay(hour);
	tax = calTax(pay);
	output(hour, pay, tax);
	return 0;
}

int input()
{
	int hour;
	scanf("%d", &hour);
	return hour;
}
int calPay(int hour)
{
	int wageHour = 3000;
	int standardWork = 40;
	if (hour <= standardWork)
		return wageHour * hour;
	else
		return int((standardWork * wageHour) + ((hour - standardWork) * wageHour * 1.5));

}
int calTax(int pay)
{
	int taxFirst = 100000;
	double taxRate1 = 0.15, taxRate2 = 0.25;
	if (pay < taxFirst)
		return int(pay*taxRate1);
	else
		return int(taxFirst * taxRate1 + (pay - taxFirst)*taxRate2);
}
void output(int hour, int pay, int tax)
{
	printf("�ٹ��ð� %d �ð� : �Ѽ��� %d, ���� %d, �Ǽ��� %d\n", hour, pay, tax, pay - tax);
}