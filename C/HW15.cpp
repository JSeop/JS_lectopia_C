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
	printf("몸무게를 입력하세요(kg): ");
	scanf("%lf", &weight);
	return weight;
}
double inputHeight() {

	double height;
	printf("키를 입력하세요(m): ");
	scanf("%lf", &height);
	return height;
}
void output(double bmi)
{
	if (bmi < 18.5)
		printf("당신의 BMI는 %.1lf으로 저체중입니다.", bmi);
	else if (bmi < 25.0)
		printf("당신의 BMI는 %.1lf으로 정상체중입니다.", bmi);
	else if (25.0 <= bmi && bmi< 30.0)
		printf("당신의 BMI는 %.1lf으로 과체중입니다.", bmi);
	else if (30.0 <= bmi && bmi< 40.0)
		printf("당신의 BMI는 %.1lf으로 비만입니다.", bmi);
	else if (40.0 <= bmi)
		printf("당신의 BMI는 %.1lf으로 고도비만입니다.", bmi);
}
double calBmi(double weight, double height)
{
	double bmi = weight / (height*height);
	return bmi;
}