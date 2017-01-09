#include<stdio.h>

double inputWeight();
double inputHeight();
void output(double);
double calBmi(double, double);
int main()
{
	double weight, height, bmi;
	weight = inputWeight();
	height = inputHeight();
	bmi = calBmi(weight, height);
	output(bmi);

	return 0;
}
double inputWeight() {

	double weight;
	printf("�����Ը� �Է��ϼ���(kg): ");
	scanf("%lf", &weight);
	return weight;
}
double inputHeight() {

	double height;
	printf("Ű�� �Է��ϼ���(m): ");
	scanf("%lf", &height);
	return height;
}
void output(double bmi)
{
	if (bmi < 18.5)
		printf("����� BMI�� %.1lf���� ��ü���Դϴ�.", bmi);
	else if (bmi < 25.0)
		printf("����� BMI�� %.1lf���� ����ü���Դϴ�.", bmi);
	else if (25.0 <= bmi && bmi< 30.0)
		printf("����� BMI�� %.1lf���� ��ü���Դϴ�.", bmi);
	else if (30.0 <= bmi && bmi< 40.0)
		printf("����� BMI�� %.1lf���� ���Դϴ�.", bmi);
	else if (40.0 <= bmi)
		printf("����� BMI�� %.1lf���� �����Դϴ�.", bmi);
}
double calBmi(double weight, double height)
{
	double bmi = weight / (height*height);
	return bmi;
}