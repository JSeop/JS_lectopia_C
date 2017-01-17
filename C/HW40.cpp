#include<stdio.h>
void myfflush();
int main()
{
	int money, bread = 500, snack = 700, coke=400,a=1,b=1,c=1;
	while (1) {
		printf("현재 당신의 소유 금액 입력 : ");
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
						printf("크림빵(%d개), 새우깡(%d 봉지), 콜라(%d 병)\n", a, b, c);
					c++;
				}
				b++;
			}
			a++;
		}
		printf("어떻게 구입하시겠습니까?\n");
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