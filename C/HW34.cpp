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
			num=input("* OPEN�� FAN ��ȣ�� �Է��Ͻÿ�(1-8) : ");
			openFan(&fan, num);
			break;
		case 2:
			num = input("* CLOSE�� FAN ��ȣ�� �Է��Ͻÿ�(1-8) : ");
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
		printf("1. ȯǳ�� ���� / 2. ȯǳ�� �ݱ� / 3. ȯǳ�� ��ü ��ȯ / 4. ���� :");
		scanf("%d", &selection);
		printf("------------------------------------------------------------------\n");
		if ((0 < selection && selection <=4) && getchar() == '\n') {
			if (selection == 1)
				printf("\t Fan ���� �۾� ���� ȭ��\n");
			else if(selection==2)
				printf("\t Fan �ݱ� �۾� ���� ȭ��\n");
			else if (selection == 3)
				printf("\t Fan ��ü ��ȯ �۾� ���� ȭ��\n");
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

	printf("%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\n", "8�� FAN", "7�� FAN", "6�� FAN", "5�� FAN", "4�� FAN", "3�� FAN", "2�� FAN", "1�� FAN");
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