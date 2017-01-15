#include<stdio.h>
void myfflush();
int inputUnit(char *,int);
int transNumber(int);
void output(int);
int main()
{
	int firstNum, lastNum, num, res=967, count,sum=0, check=0;
	firstNum = inputUnit("���� ��(P1) : ",check);
	lastNum = inputUnit("�� ��(P2) : ", check);
	num = inputUnit("������(N) : ", ++check);
	printf("�������� %d�� ���� ���\n", num);
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
	printf("�� ���� : %d\n", sum);
	return 0;
}
int inputUnit(char * message,int check) 
{
	int num;
	while (1) {
		printf(message);
		scanf("%d", &num);
		if (check == 0) {
			if ((100<=num&&num<=10000) && getchar() == '\n') // ���� ��, �� �� 100~10000 �̿��� �� �Է½� �ٽ� �Է¹޵��� ����
				return num;
		}
		else
			if ((1 <= num&&num <= 10) && getchar() == '\n') // ������ 1~10 �̿��� �� �Է½� �ٽ� �Է¹޵��� ����
				return num;
		myfflush();
	}
}
int transNumber(int num)//�����ؼ� ���� ��� ����
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