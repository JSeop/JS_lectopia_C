#include<stdio.h>
int inputInit(char *);
double inputDouble(char *);
void myfflush();
int ipow(int, int);
double fpow(double, int);
int main()
{
	int num, exponentN, exponentD, resN;
	double dnum,  resD;
	num = inputInit("* 양의 정수 밑을 입력 하시오 : ");
	exponentN = inputInit("* 양의 승을 입력 하시오 : ");
	resN = ipow(num, exponentN);
	printf("%d의 %d승은 %d입니다. \n\n", num, exponentN, resN);
	dnum = inputDouble("* 양의 실수 밑을 입력 하시오 : ");
	exponentD = inputInit("* 양의 승을 입력 하시오 : ");
	resD = fpow(dnum, exponentD);
	printf("%.2lf의 %d승은 %.3lf입니다. \n", dnum, exponentD, resD);
	return 0;	
}
int inputInit(char *message)
{
	int num;
	while (1) {
		printf(message);
		scanf("%d", &num);
		if (num>=0 && getchar() == '\n')
			return num;
		myfflush();
	}
}
double inputDouble(char *message)
{
	double Dnum;
	while (1) {
		printf(message);
		scanf("%lf", &Dnum);
		if (Dnum>=0 && getchar() == '\n')
			return Dnum;
		myfflush();
	}
}
int ipow(int num, int exponentN)
{
	int sum = 1;
	if (num == 0 || exponentN == 0)
		return 1;
	while (exponentN--) 
		sum *= num;
	return sum;
}
double fpow(double num, int exponentD)
{
	double sum = 1;
	if (num == 0 || exponentD == 0)
		return 1;
	while (exponentD--)
		sum *= num;
	return sum;
}
void myfflush()
{
	while (getchar() != '\n')
	{
		;
	}
}
