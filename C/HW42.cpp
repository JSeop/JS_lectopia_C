#include<stdio.h>

int main()
{
	int i, j, line;
	while (1) {
		printf("# ��� ���μ��� �Է��Ͻÿ� : ");
		scanf("%d", &line);
		while (getchar() != '\n')
			return 0;
		if (0 < line) { //  0���� ���� �� �Է� �� ���Է� �䱸�ϵ��� ������. (������ ���� ���� ��� ��� ����)
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