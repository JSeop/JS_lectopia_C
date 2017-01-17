#include<stdio.h>
int main()
{
	int i, j;

	for (i = 0; i < 10; i++) {
		for (j = 0; j < 10; j++) {
			if (j == 0)
				printf("%d ", i + j * 10);
			else
				printf("%-2d ", i + j * 10);
		}
		printf("\n");
	}
	return 0;
}