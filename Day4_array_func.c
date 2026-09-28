#include <stdio.h>

//1.
// int main()
// {
//     int arr [5];
//     printf("请输入5个数据");
//     for(int i=0;i<5;i++)
//     {
//         scanf("%d",&arr[i]);
//     }
//     int max =arr[0];
//     for(int i=1;i<5;i++)
//     {
//         if(arr[i]>max)
//         {
//             max=arr[i];
//         }
//     }
//     printf("%d",max);
//     return 0;
// }


//2.
// int find_max(int arr[],int size)
// {
//     int max =arr[0];
//     for(int i=1;i<size;i++)
//     {      
//         if(arr[i]>max)     
//         {
//             max=arr[i];
//         }
//     }
//     return max;
// }


// int main()
// {
//     int arr [5];
//     printf("请输入5个数据");
//     for(int i=0;i<5;i++)
//     {
//         scanf("%d",&arr[i]);
//     }
//     int result=find_max(arr,5);
//     printf("%d",result);
//     return 0;
// } 


//3.
void reverse_array(int arr[],int size)
{
    for( int i=0 , j=size-1 ; i<j ; i++ , j--)
    {
    int temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
    }
}

int arr[5];
int main()
{
    printf("请输入5个数据");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    reverse_array(arr,5);
    for(int i=0;i<5;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}



