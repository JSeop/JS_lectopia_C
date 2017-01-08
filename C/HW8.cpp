#include<stdio.h>

int main()
{
	unsigned int history, literature, talent, total;
	double avg;

	printf("역사, 문학, 예능 점수를 입력하세요 : ");
	scanf("%d %d %d", &history, &literature, &talent);
	total = history + literature + talent;
	avg = (double)total / 3;
	printf("총점은 %d 이고 평균은 %0.2lf 입니다.", total, avg);
	return 0;
}