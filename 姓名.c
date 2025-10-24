#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	char firstname[40];
	char lastname[40];
	printf("Enter your firstname:");
	scanf("%s", firstname);
	printf("Enter your lastname:");
	scanf("%s", lastname);
	printf("%s %s\n", firstname, lastname);
    return 0;
}