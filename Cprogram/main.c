#include<stdio.h>  
#include<stdlib.h>  
struct LinkNode   
{  
    int data;  
    struct LinkNode *next;   
};
struct LinkNode *start=NULL; 
struct LinkNode *p,*temp;  
int value; 
void create();  
void display_List();
int main()
{
    int n, i;
    scanf("%d",&n); 
    p=(struct LinkNode*)malloc(sizeof(struct LinkNode));
    scanf("%d",&value);  
    p->data=value; 
    p->next=NULL; 
    start=p;
    temp=p;
    for(i=0;i<n-1;i++)
    {
        create();
    }
    display_List();
    return 0;
}
void create()               
{  
    p=(struct LinkNode*)malloc(sizeof(struct LinkNode));      
    scanf("%d",&value);  
    p->data=value; 
    p->next=NULL; 
    temp->next=p;  
    temp=temp->next;
}
void display_List()    
{  
    struct LinkNode *ptr;  
    ptr=start;   
    printf("List->");   
        while (ptr!=NULL)  
        {  
            printf("%d->",ptr->data);  
            ptr=ptr->next;  
        }
    printf("NULL");
}
