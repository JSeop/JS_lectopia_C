#include<stdio.h>

int main()
{
	int i, j, line;
	while (1) {
		printf("# 출력 라인수를 입력하시오 : ");
		scanf("%d", &line);
		while (getchar() != '\n')
			return 0;
		if (0 < line) { //  0보다 작은 수 입력 시 재입력 요구하도록 설정함. (문제에 음수 관련 얘기 없어서 설정)
			for (i = 1; i <= line; i++) {
				for (j = 0; j < i; j++)
					printf("*");
				printf("%*c", 2 * (line - i) + 1, ' ');
				for (j = 0; j < i; j++)
					printf("*");
				printf("\n");
			}
		}
	}
}