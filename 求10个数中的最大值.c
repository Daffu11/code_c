#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int arr[10] = { 11,33,22,55,100,44,66,88,99,77 };
	int max= arr[0];
	for (int i = 1;i <= 10;i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
			
	}
	printf("%d\n", max);
	
	return 0;
}