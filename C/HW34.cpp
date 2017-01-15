#include<stdio.h>
#include<stdlib.h>
int menu();
void openFan(unsigned char *, int);
void offFan(unsigned char *, int);
void reverseFan(unsigned char *);
void displayFan(unsigned char);
int input(char *);
void myfflush();
int main()
{
	int selection, num, quit = 0;
	unsigned char fan=0x00;
	while (1) {
		selection = menu();
		switch (selection) {
		case 1:
			num=input("* OPEN할 FAN 번호를 입력하시오(1-8) : ");
			openFan(&fan, num);
			break;
		case 2:
			num = input("* CLOSE할 FAN 번호를 입력하시오(1-8) : ");
			offFan(&fan, num);
			break;
		case 3:
			reverseFan(&fan);
			break;
		case 4:
			quit++;
			break;
		}
		if (quit != 0)
			break;
		displayFan(fan);
	}
	return 0;
}
int menu()
{
	int selection;
	while (1) {
		printf("1. 환풍구 열기 / 2. 환풍구 닫기 / 3. 환풍구 전체 전환 / 4. 종료 :");
		scanf("%d", &selection);
		printf("------------------------------------------------------------------\n");
		if ((0 < selection && selection <=4) && getchar() == '\n') {
			if (selection == 1)
				printf("\t Fan 열기 작업 실행 화면\n");
			else if(selection==2)
				printf("\t Fan 닫기 작업 실행 화면\n");
			else if (selection == 3)
				printf("\t Fan 전체 전환 작업 실행 화면\n");
			else 
				return selection;
			printf("------------------------------------------------------------------\n");
			return selection;
		}
		myfflush();
	}
}
void openFan(unsigned char * fan, int num)
{
	unsigned char check = 0x01;
	check <<= (num-1);
	*fan = *fan|check;
}
void offFan(unsigned char * fan, int num)
{
	unsigned char check = 0x01, check1=0xff;
	check <<= (num - 1);
	check1 -= check;
	*fan = *fan & check1;
}
void reverseFan(unsigned char * fan)
{
	unsigned char check = 0xff;
	*fan = *fan^check;
}
void displayFan(unsigned char fan)
{
	int num=8;
	unsigned char check = 0x80;

	printf("%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\n", "8번 FAN", "7번 FAN", "6번 FAN", "5번 FAN", "4번 FAN", "3번 FAN", "2번 FAN", "1번 FAN");
	while (num--) {
		if ((fan&check) == check)
			printf("%5s\t","ON");
		else
			printf("%4s\t","OFF");
		check >>= 1;
	}
	printf("\n");
}
int input(char * message)
{
	int num;
	while (1) {
		printf(message);
		scanf("%d",&num);
		if (0 < num && num <= 8 && getchar() == '\n')
			return num;
		myfflush();
	}
}
void myfflush()
{
	while (getchar() != '\n')
	{
		;
	}
}