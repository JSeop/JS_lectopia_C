#include<stdio.h>

int main()
{
	char alpha, i, j;
	while (1) {
		printf("* 영문자 대문자 입력( 'A' ~ 'Z' ) : ");
		scanf("%c", &alpha);
		if (!('A' <= alpha && alpha <= 'Z'))
			return 0;
		else {
			for (i = 0; i <= int(alpha - 'A'); i++) {
				for (j = 0; j <= i; j++) {
					printf("%c", alpha - j);
				}
				printf("\n");
			}
			getchar();
		}
	}
}