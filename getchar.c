#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{
//	char password[20] = { 0 };
//	printf("�����������:>");
//	scanf("%s",password );
//	printf("ȷ������(Y/N):>");
//	int ret = getchar();
//	int ch = 0;
//    while((ch=getchar())!='\n')
//	{
//		;
//	}
//	if ("Y" == ret)
//	{
//		printf("Yes\n");
//	}
//	else
//	{
//		printf("No\n");
//	}
//
//	return 0;
//}
int main()
{
	char ch = '\0';
	while ((ch = getchar()) != EOF)
	{
		if (ch < '0' || ch>'9')
			continue;
			putchar(ch);
	}
	return 0;
}