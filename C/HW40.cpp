#include<stdio.h>
void myfflush();
int main()
{
	int money, bread = 500, snack = 700, coke=400,a=1,b=1,c=1;
	while (1) {
		printf("���� ����� ���� �ݾ� �Է� : ");
		scanf("%d", &money);
		if (getchar() != '\n')
			break;
		a = 1;
		for (bread = 500; bread < money; bread += 500) {
			b = 1;
			for (snack = 700; snack < money; snack += 700) {
				c = 1;
				for (coke = 400; coke < money; coke += 400) {
					if (bread + snack + coke == money)
						printf("ũ����(%d��), �����(%d ����), �ݶ�(%d ��)\n", a, b, c);
					c++;
				}
				b++;
			}
			a++;
		}
		printf("��� �����Ͻðڽ��ϱ�?\n");
	}
	return 0;
}
void myfflush()
{
	while (getchar() != '\n')
	{
		;
	}
}