#include<stdio.h>

int main()
{
	int i, j, k;
	printf("<2�� for���� �̿��� ���>\n");
	for (i = 1; i <= 9; i++) {
		for (j = 2; j <= 5; j++)
			printf("%d*%d= %2d \t", j, i, j*i);
		printf("\n");
	}
	printf("\n");
	for (i = 1; i <= 9; i++) {
		for (j = 6; j <= 9; j++)
			printf("%d*%d= %2d \t", j, i, j*i);
		printf("\n");
	}
	printf("-----------------------------------------------------------------\n");
	printf("\n<3�� for���� �̿��� ���>\n");
	for (i = 1; i <= 2; i++) {
		for (j = 1; j <= 9; j++) {
			for (k = 4*i-2; k <= 4*i+1; k++)
				printf("%d*%d= %2d \t", k, j, j*k);
			printf("\n");
		}
		printf("\n");
	}
	return 0;
}