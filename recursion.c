#include <stdio.h>

func(int n)
{
    if(n==1)
    {
        return n;
    }
    return n*func(n-1);
}
int main() {
    int n;
    scanf("%d",&n);
    printf("f(%d)=%d\n",n,func(n));
}
