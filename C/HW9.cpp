#include<stdio.h>

int input();
int main()
{
	int num;
	num = input();
	printf("�Էµ� ���� 8������ %#o �Դϴ�.\n", num);
	printf("�Էµ� ���� 16������ %#x �Դϴ�.\n", num);
	return 0;
}
int input()
{
	int num;
	printf("�������� �Է��ϼ��� : ");
	scanf("%d", &num);
	return num;
}