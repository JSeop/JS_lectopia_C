#include<stdio.h>

int main()
{
	unsigned int history, literature, talent, total;
	double avg;

	printf("����, ����, ���� ������ �Է��ϼ��� : ");
	scanf("%d %d %d", &history, &literature, &talent);
	total = history + literature + talent;
	avg = (double)total / 3;
	printf("������ %d �̰� ����� %0.2lf �Դϴ�.", total, avg);
	return 0;
}