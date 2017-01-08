#include<stdio.h>
#include<string.h>

int main()
{
	char firstName[1000], lastName[1000];
	int firstNameLen, lastNmaeLen;
	printf("#성을 입력하시오 : ");
	scanf("%s", firstName);
	printf("#이름을 입력하시오 : ");
	scanf("%s", lastName);
	printf("%s %s\n", firstName, lastName);
	firstNameLen = strlen(firstName);
	lastNmaeLen = strlen(lastName);
	printf("%*d %*d\n", firstNameLen, firstNameLen, lastNmaeLen, lastNmaeLen);
	return 0;
}