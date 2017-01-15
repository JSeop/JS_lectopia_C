#include<stdio.h>
#include<stdlib.h>
void testProgram(int);
int input(char *);
void myfflush();
int square(int);
int getBit(int, int);
int setBit(int, int);
int clearBit(int, int);
int clearBitsMSBthroughI(int, int);
int clearBitsIthrough0(int, int);
int updateBit(int, int, int);
int main()
{
	int selection;
	while(1){
		system("cls");
		printf("#######################################################\n");
		printf("1. getBit\n");
		printf("2. setBit\n");
		printf("3. clearBit\n");
		printf("4. clearBitsMSBthroughI\n");
		printf("5. clearBitsIthrough0\n");
		printf("6. updateBit\n");
		printf("7. Exit\n");
		printf("#######################################################\n");
		printf("사용할 bit 조절 함수 번호를 입력하세요 : ");
		scanf("%d", &selection);
		myfflush();
		if (selection == 7)
			break;
		testProgram(selection);
	}
	return 0;
}
void testProgram(int selection)
{
	int num, i, identity, value, j=32;
	unsigned int check = 0x80000000;
	if (selection != 7){
		num = input("* 정수를 입력하세요 : ");
		i = input("* 2의 i승 bit를 선택하세요 : ");
	}
	switch (selection){
		case 1: 
			identity = getBit(num, i); 
			break;
		case 2: 
			identity = setBit(num, i);
			break;
		case 3: 
			identity = clearBit(num, i);
			break;
		case 4: 
			identity = clearBitsMSBthroughI(num, i);
			break;
		case 5: 
			identity = clearBitsIthrough0(num, i);
			break;
		case 6: 
			value = input("* 업데이트할 bit를 1 or 0 선택하세요 : "); 
			identity = updateBit(num, i, value);
			break;
	}
	if (selection != 1) {
		printf("%s\t : ","base");
		while (j--) {
			if ((num&check) == check)
				printf("1");
			else
				printf("0");
			check >>= 1;
		}
		j = 32;
		check = 0x80000000;
		printf("(2), %d(10)\n%s\t : ",num,"result");
		while (j--) {
			if ((identity&check) == check)
				printf("1");
			else
				printf("0");
			check >>= 1;
		}
		printf("(2), %d(10)\n",identity);
	}
	else
		printf("%d\n", identity);
	system("pause");
}
int input(char *message)
{
	int num;
	while (1) {
		printf(message);
		scanf("%d", &num);
		if (getchar() == '\n')
			return num;
		myfflush();
	}
}
int square(int i)
{
	int num=1, j=0;
	while (j!=i) {
		num <<= 1;
		j++;
	}
	return num;
}
void myfflush()
{
	while (getchar() != '\n')
	{
		;
	}
}
int getBit(int num, int i)
{
	int choice;
	choice = square(i);
	if ((num&choice) == choice)
		return 1;
	else
		return 0;
}
int setBit(int num, int i)
{
	int choice;
	choice = square(i);
	if (2147483648 == choice)
		return -choice + num;
	else if ((num&choice) == choice)
		return num;
	else
		return num+choice ;
}
int clearBit(int num, int i)
{
	int choice;
	choice = square(i);
	if (2147483648 == choice)
		return choice + num;
	else if ((num&choice) == choice)
		return num-choice;
	else
		return num ;
}
int clearBitsMSBthroughI(int num, int i)
{
	int choice=0,sum=0, sq=1;
	while (i != choice)
	{
		sum += sq;
		sq <<= 1;
		choice++;
	}
	return (num&sum);
}
int clearBitsIthrough0(int num, int i)
{
	int choice, sum = 0;
	choice = square(i);
	while (i != 31)
	{
		choice <<= 1;
		sum += choice;
		i++;
	}
	return (sum&num);
}
int updateBit(int num, int i, int value)
{
	int choice;
	choice = square(i);
	if (i == 31) {
		if (value == 0){
			if ((num&choice) == choice)
				return num +choice;
			else
				return num;
		}
		else {
			if ((num&choice) == choice)
				return num;
			else
				return num+choice;
		}
	}
	else if(value==0){
		if ((num&choice) == choice)
			return num - choice;
		else
			return num;
	}
	else{
		if ((num&choice) == choice)
			return num;
		else
			return num+choice;
	}
}