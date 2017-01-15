#include<stdio.h>
void myfflush();
int inputUnit(char *,int);
int transNumber(int);
void output(int);
int main()
{
	int firstNum, lastNum, num, res=967, count,sum=0, check=0;
	firstNum = inputUnit("시작 값(P1) : ",check);
	lastNum = inputUnit("끝 값(P2) : ", check);
	num = inputUnit("고집수(N) : ", ++check);
	printf("고집수가 %d인 숫자 출력\n", num);
	while (firstNum != lastNum) {
		count = 0;
		res = firstNum;
		while (1) {
			res = transNumber(res);
			count++;
			if (0<=res && res<=9)
				break;
		}
		if (count == num) {
			output(firstNum);
			sum++;
		}
		firstNum++;
	}
	printf("총 개수 : %d\n", sum);
	return 0;
}
int inputUnit(char * message,int check) 
{
	int num;
	while (1) {
		printf(message);
		scanf("%d", &num);
		if (check == 0) {
			if ((100<=num&&num<=10000) && getchar() == '\n') // 시작 값, 끝 값 100~10000 이외의 값 입력시 다시 입력받도록 설정
				return num;
		}
		else
			if ((1 <= num&&num <= 10) && getchar() == '\n') // 고집수 1~10 이외의 값 입력시 다시 입력받도록 설정
				return num;
		myfflush();
	}
}
int transNumber(int num)//분할해서 곱한 결과 리턴
{
	int a, b, c, d;
	if (num == 10000)
		return 1;
	else if (1000 <= num)
	{
		a = num / 1000;
		b = (num % 1000) / 100;
		c = ((num % 1000) % 100) / 10;
		d = (((num % 1000) % 100) % 10) ;
		return a*b*c*d;
	}
	else if(100<=num)
	{
		a = num / 100;
		b = (num % 100) / 10;
		c = (num % 100) % 10;
		return a*b*c;
	}
	else {
		a = num / 10;
		b = num % 10;
		return a*b;
	}
}
void output(int num)
{
	printf("%d\n",num);
}
void myfflush()
{
	while (getchar() != '\n')
	{
		;
	}
}