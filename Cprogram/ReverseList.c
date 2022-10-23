#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
} *first = NULL, *last = NULL;

void create(int A[], int n)
{
    first = (struct node *)malloc(sizeof(struct node));
    first ->data = A[0];
    first->next = NULL;
    last = first;
   

    for(int i = 1; i<n; i++)
    {
        struct node * p = (struct node *)malloc(sizeof(struct node));
        p->data = A[i];
        p->next = NULL;
        last->next = p;
        last = p;
    }

}

void Display(struct node *p)
{
    p = first;
    while(p)
    {
        printf("%d ", p->data);
        p = p->next;
    }
    printf("\n");
}

void Reverse(struct node *p)
{
    struct node *q,*r;          // Sliding Poniter concept
    p = first;
    q = NULL;
    r = NULL;
    while(p)
    {
        r = q;              // r=>q & q=>p & p=>next 
        q = p;              // after one loop, r == NULL, q = first and p = p->next so by 'q->next = r' will get address of prev node
        p = p->next;        // we'll keep on doing this untill p!=NULL. when P == NULL, q would point to last node
        q->next = r;        // So we'll have to make it as first node 
    }
    first = q;              // we made the last node as first node here. 

}


int main(){

    int A[] = {10,20,30,40,50,60,70,80};

    create(A, 8);

    Display(first);

    Reverse(first);

    Display(first);
}
