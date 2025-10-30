#include <stdio.h>

typedef struct student{
    int num;
    char name[20];
    char sex;
}stu,*pstu;

//typedef int，方便做统一修改
typedef int INTEGER;

int main() {
    //struct student s={1001,"wang",'M'};
    //等价于
    stu s={1001,"wang",'M'};
    struct student *p=&s;
    pstu p1=&s;
    INTEGER num=10;//num可以和结构体中的变量重名
    printf("%d %s %c\n",p1->num,p1->name,p1->sex);
    printf("num=%d\n",num);
    return 0;
}
