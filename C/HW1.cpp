#include<stdio.h>

void printAge(int);
void printHeight(double);

int main()
{
	char name[20] = "홍길동";
	int age = 500;
	double height = 170.8;

	printf("성명: %s\n", name);
	printAge(age);
	printHeight(height);

	return 0;
 }

void printAge(int Age)
{
	printf("나이: %d\n", Age);
	return;
}

void printHeight(double Height)
{
	printf("나이: %0.1lf\n", Height);  // 소수점 첫째자리까지 나타내기 위해서 설정
	return;
}