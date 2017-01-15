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
	printf("* ���� �ܾ��� 0�� �Դϴ�.\n");
	while (1) {
		menuSelection = menu();
		switch (menuSelection)
		{
		case 'i':
			num = inputString("# �Աݾ��� �Է��ϼ��� : ");
			deposit(&num, &balance);
			break;
		case 'o':
			num = inputString("# ��ݾ��� �Է��ϼ��� : ");
			withdraw(&num, &balance);
			break;
		case 'q':
			i = 1;
			break;
		}
		if (i != 0)
			break;
		printf("* ���� �ܾ��� %d�Դϴ�. \n", balance);
	}
	return 0;
}
char menu()
{
	char selection=0, j=0;
	while (selection != 'i' && selection != 'o' && selection != 'q') {
		if (j != 0)
			printf("�߸� �Է��ϼ̽��ϴ�. \n");
		printf("# �޴��� �����Ͻÿ�(i-�Ա�, o-���, q-����) : ");
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
		printf("�߸� �Է��ϼ̽��ϴ�. ");
		printf("�ٽ� �Է� �ϼ���. : ");
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
		printf("* �ܾ��� �����մϴ�. \n");
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
