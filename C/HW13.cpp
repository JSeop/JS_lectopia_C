#include<stdio.h>
#include<string.h>

int main()
{
	char firstName[1000], lastName[1000];
	int firstNameLen, lastNmaeLen;
	printf("#���� �Է��Ͻÿ� : ");
	scanf("%s", firstName);
	printf("#�̸��� �Է��Ͻÿ� : ");
	scanf("%s", lastName);
	printf("%s %s\n", firstName, lastName);
	firstNameLen = strlen(firstName);
	lastNmaeLen = strlen(lastName);
	printf("%*d %*d\n", firstNameLen, firstNameLen, lastNmaeLen, lastNmaeLen);
	return 0;
}