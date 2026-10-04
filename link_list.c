#include <stdio.h>
#include <stdlib.h>

// typedef struct Node
// {
//     int data;
//     struct Node *next;
// }Node;

// int main()
// {
//     Node n1;
//     Node n2;
//     n1.data=10;
//     n2.data=20;

//     n1.next=&n2;
//     n2.next=NULL;

//     printf("n1的数据:%d\n",n1.data);
//     printf("通过n1找到n2的数据:%d\n",n1.next->data);
//     return 0;
// }

// typedef struct Node
// {
//     int data;
//     struct Node *next;
// }Node;

// Node* create_node(int value)
// {
//     Node* p=(Node*)malloc(sizeof(Node));
//     if (p==NULL)
//     {
//         return NULL;
//     }
//     p->data=value;
//     p->next=NULL;
//     return p;
// }


// int main()
// {
//     Node *n=create_node(10);
//     if(n!=NULL)
//     {
//         printf("节点的数据:%d\n",n->data);
//     }
//     free(n);
//     return 0;
// }

typedef struct Node
{
    int data;
    struct Node *next;
}Node;


Node* create_node(int value)
{
    Node* p=(Node*)malloc(sizeof(Node));
    if (p==NULL)
    {
        return NULL;
    }
    p->data=value;
    p->next=NULL;
    return p;
}

Node* insert_head(Node*head,int value)//Node*返回一个指向Node的指针,括号中Node*head意思为第一个节点为head
{
    Node *p=create_node(value);                                   
    if(p==NULL) 
    {
        return head;
    }
    p->next=head;
    return p;//p即为指向Node的指针
}

int main()
{
    Node*head=NULL;//Node*head声明head是一个指向Node的指针，并将其初始化为NULL(空指针)
    head=insert_head(head,10);//等价于Node* newhead=insert_head(head,10);head=newhead;
    head=insert_head(head,20);

    Node*p=head;
    while(p!=NULL)
    {
        printf("%d->",p->data);
        Node*temp=p;
        p=p->next;
        free(temp);
    }
    printf("NULL\n");
    return 0;

}