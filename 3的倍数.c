#include<stdio.h>
int main()
{
    int n = 0;
    for(n = 1;n <= 100; n++)
    {
         int i = n % 3;
        if (i == 0)
        {
            printf("%d ", n);
        }

    }

    return 0;

}