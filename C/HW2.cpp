#include<stdio.h>

int main()
{
	int money = 278970, count;
	
	printf("50,000원권 ==> %d개\n", count=money / 50000);
	money = money - 50000*count;
	printf("10,000원권 ==> %d개\n", count = money / 10000);
	money = money - 10000*count;
	printf("5,000원권  ==> %d개\n", count = money / 5000);
	money = money - 5000*count;
	printf("1,000원권  ==> %d개\n", count = money / 1000);
	money = money - 1000*count;
	printf("500원권    ==> %d개\n", count = money / 500);
	money = money - 500*count;
	printf("100원권    ==> %d개\n", count = money / 100);
	money = money - 100*count;
	printf("50원권     ==> %d개\n", count = money / 50);
	money = money - 50*count;
	printf("10원권     ==> %d개\n", count = money / 10);
	
	return 0;
 }
