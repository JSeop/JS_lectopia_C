#include<stdio.h>

void printAge(int);
void printHeight(double);

int main()
{
	char name[20] = "ȫ�浿";
	int age = 500;
	double height = 170.8;

	printf("����: %s\n", name);
	printAge(age);
	printHeight(height);

	return 0;
 }

void printAge(int Age)
{
	printf("����: %d\n", Age);
	return;
}

void printHeight(double Height)
{
	printf("����: %0.1lf\n", Height);  // �Ҽ��� ù°�ڸ����� ��Ÿ���� ���ؼ� ����
	return;
}