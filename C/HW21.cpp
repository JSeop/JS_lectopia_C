#include<stdio.h>

int main()
{
	double height[5], sum = 0;
	int i = 0;
	while (i < 5) {
		printf("- %d�� �л��� Ű��? ", i + 1);
		scanf("%lf", &height[i]);
		sum += height[i++];
	}
	printf("�ټ� ���� ��� Ű�� %.1lf �Դϴ�.\n", sum / 5);
	return 0;
}