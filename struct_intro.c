#include <stdio.h>


typedef struct PerInfo
{
    char name[10];
    double height;
    char sex;
    int age;
}M;


void printf_info(M p)
{
    printf("姓名：%s\n",p.name);
    printf("性别：%c\n",p.sex);
    printf("年龄：%d",p.age);
    printf("身高：%lf\n",p.height);
}


int main()
{
    M p1={"MIAO",0.6,'F',8};
    printf_info(p1);
    printf("结构体大小: %d\n", sizeof(M));
    return 0;
}