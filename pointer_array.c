#include <stdio.h>

int main()
{
    int arr[5]={10,20,30,40,50};
    int* p=arr;
    int sum=0;
    for(int i=0;i<5;i++)
    {
        printf("%d ",*p);
        sum=sum+*p;
        p++;
    }
    printf("总和:%d",sum);
    return 0;
}