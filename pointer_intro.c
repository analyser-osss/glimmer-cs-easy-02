#include <stdio.h>

int main()
{
    int a=10;
    int* p=&a;

    printf("a的值:%d\n",a);
    printf("a的地址:%d\n",&a);
    printf("p存的的地址:%d\n",p);
    printf("通过p找a:%d\n",*p);
    *p=20;
    printf("改后a的值%d\n",a);
    return 0;
}