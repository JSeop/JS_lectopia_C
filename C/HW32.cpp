#include<stdio.h>
char menu();
int inputString(char *);
void myfflush();
void deposit(int *, int *);
void withdraw(int *, int *);
int main()
{
	char menuSelection;
	int num, balance=0, i=0;
	printf("* 현재 잔액은 0원 입니다.\n");
	while (1) {
		menuSelection = menu();
		switch (menuSelection)
		{
		case 'i':
			num = inputString("# 입금액을 입력하세요 : ");
			deposit(&num, &balance);
			break;
		case 'o':
			num = inputString("# 출금액을 입력하세요 : ");
			withdraw(&num, &balance);
			break;
		case 'q':
			i = 1;
			break;
		}
		if (i != 0)
			break;
		printf("* 현재 잔액은 %d입니다. \n", balance);
	}
	return 0;
}
char menu()
{
	char selection=0, j=0;
	while (selection != 'i' && selection != 'o' && selection != 'q') {
		if (j != 0)
			printf("잘못 입력하셨습니다. \n");
		printf("# 메뉴를 선택하시오(i-입금, o-출금, q-종료) : ");
		scanf("%c", &selection);
		j++;
		myfflush();
	}
	return selection;
}
int inputString(char * message)
{
	int money;
	printf(message);
	while (1) {
		scanf("%d", &money);

		if (0 < money && getchar() == '\n')
				return money;
		myfflush();
		printf("잘못 입력하셨습니다. ");
		printf("다시 입력 하세요. : ");
	}
}
void deposit(int * num, int * bal)
{
	*bal += *num;
}
void withdraw(int * with, int * balance)
{
	int temp = *balance - *with;
	if (temp < 0)
		printf("* 잔액이 부족합니다. \n");
	else
		*balance -= *with;
}
void myfflush()
{
	while (getchar() != '\n')
	{
		;
	}
}
