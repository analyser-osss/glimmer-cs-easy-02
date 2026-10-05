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




//头插
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

// void insert_head(Node** head, int value) {
//     Node* p = create_node(value);
//     if (p == NULL) 
//     {
//         return;
//     }
//     p->next = *head;
//     *head = p;
// }

// int main() 
// {
//     Node* head = NULL;
    
//     insert_head(&head, 10); 
//     insert_head(&head, 20); 

//     Node*p=head;
//     while(p!=NULL)
//     {
//         printf("%d->",p->data);
//         Node*temp=p;
//         p=p->next;
//         free(temp);
//     }
//     printf("NULL\n");
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

// Node* insert_head(Node*head,int value)//Node*返回一个指向Node的指针,括号中Node*head意思为第一个节点为head
// {
//     Node *p=create_node(value);                                   
//     if(p==NULL) 
//     {
//         return head;
//     }
//     p->next=head;
//     return p;//p即为指向Node的指针
// }

// int main()
// {
//     Node*head=NULL;//Node*head声明head是一个指向Node的指针，并将其初始化为NULL(空指针)
//     head=insert_head(head,10);//等价于Node* newhead=insert_head(head,10);head=newhead;
//     head=insert_head(head,20);

//     Node*p=head;
//     while(p!=NULL)
//     {
//         printf("%d->",p->data);
//         Node*temp=p;
//         p=p->next;
//         free(temp);
//     }
//     printf("NULL\n");
//     return 0;

// }








//尾插
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

void insert_tail(Node**head,int value)
{
    Node*p=create_node(value);
    if (p==NULL)
    return;
    else if(*head==NULL)
    {
        *head=p;
        return;
    }
    else
    {
        Node*current=*head;
        while(current->next!=NULL)
        {
            current=current->next;
        }
        current->next = p;
    }
}




void printf_list(Node*head)
{
    Node*current=head;
    while(current!=NULL)
    {
        printf("%d->",current->data);
        current=current->next;
    }
    printf("NULL\n");
}

void free_list(Node*head)\
{
    Node* current=head;
    while(current!=NULL)
    {
        Node*temp=current;
        current=current->next;
        free(temp);
    }
}

int find_node(Node*head,int a)
{
    Node*current=head;
    int b=1;
    while(current!=NULL)
    {
        if(current->data==a)
        {
        return b;
        }
        else 
        {
            b++;
            current=current->next;
        }
    }
    return -1;
}


int delete_node(Node**head,int n)
{
    if(*head==NULL||n<1)
    {
        return 0;
    }
    if(n==1)
    {
        Node*temp=*head;
        *head=(*head)->next;
        free(temp);
        return 1;
    }
    Node*a=*head;
    Node*b=(*head)->next;
    int x=2;
    while(b!=NULL&&x<n)
    {
        a=b;
        b=b->next;
        x++;
    }
    if(b==NULL)
    {
        return 0;
    }
    a->next=b->next;
    free(b);
    return 1;
}




int main()
{
    Node*head=NULL;
    insert_tail(&head,10);
    insert_tail(&head,20);
    insert_tail(&head,30);


    printf_list(head);



    if(delete_node(&head,2))
    {
        printf("删除成功，链表变成：\n");
        printf_list(head);
    }


    delete_node(&head,1);
    printf("删除头节点：\n");
    printf_list(head);


    // int c=find_node(head,20);
    // if(c!=-1)
    // {
    //     printf("找到了，是第%d个节点\n",c);
    // }
    // else
    // {
    //     printf("没有这个数据");
    // }


    // int d=find_node(head,100);
    // if(d!=-1)
    // {
    //     printf("找到了，是第%d个节点\n",c);
    // }
    // else
    // {
    //     printf("没有这个数据");
    // }

    free_list(head);

    return 0;

}