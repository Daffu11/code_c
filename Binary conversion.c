#include <stdio.h>
//十进制转换2进制
int main() {
    int a=123;
    int arr[8]={0};
    for(int i=0;a>0&&i<8;i++){
        arr[i]=a%2;
        a/=2;
    }
    int l=sizeof(arr)/sizeof(arr[0]);
    if(arr[l-1]==1){
        printf("%d",arr[l-1]);
    }
    for(int i=l-2;i>=0;i--){
        printf("%d",arr[i]);
    }
    return 0;
}
