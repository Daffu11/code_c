#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct student{
    int num;
    char name[20];
    char sex;
};
int main() {
    struct student s={1001,"lili",'M'};
    struct student sarr[3]={1001,"leilei",'M',1005,"zhangsan",'M',1007,"ww",'M'};
    struct student *p;
    p=&s;
    printf("%d %s %c\n",(*p).num,(*p).name,(*p).sex);
    printf("%d %s %c\n",p->num,p->name,p->sex);
    printf("----------------\n");
    p=&sarr;
    printf("%d %s %c\n",p->num,p->name,p->sex);
    printf("----------------\n");
    p=p+1;
    printf("%d %s %c\n",p->num,p->name,p->sex);
    printf("----------------\n");
    p=(struct student*)malloc(sizeof(struct student));
    p->num=100;
    p->sex='M';
    strcpy(p->name,"www");//不能之间给字符串赋值，要用strcpy
    printf("%d %s %c\n",p->num,p->name,p->sex);
    return 0;
}
