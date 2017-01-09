#include<stdio.h>

int inputAge();
int inputNum();
void output(int, int, int);

int main()
{
	int age, num, entrance, cost, sale = 0;
	age = inputAge();
	num = inputNum();
	if (age <= 7)
		entrance = 500 * num;
	else if (8 <= age&&age <= 13)
		entrance = 700 * num;
	else if (14 <= age&&age <= 19)
		entrance = 1000 * num;
	else if (20 <= age&&age <= 55)
		entrance = 1500 * num;
	else
		entrance = 500 * num;

	if (5 <= num) {
		sale = entrance*0.1;
		cost = entrance - sale;
	}
	else
		cost = entrance;

	output(cost, entrance, sale);
	return 0;
}
int inputAge()
{
	int age;
	printf("입장객의 나이를 입력하시오 : ");
	scanf("%d", &age);
	return age;
}
int inputNum()
{
	int num;
	printf("입장객의 수를 입력하시오 : ");
	scanf("%d", &num);
	return num;
}
void output(int cost, int entrance, int sale)
{
	printf("입장료 => %d원\n할인금액 => %d원\n결제금액 => %d원", entrance, sale, cost);
}