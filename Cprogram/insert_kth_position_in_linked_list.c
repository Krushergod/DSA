#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data; 
   struct Node * next;
} *head;

typedef struct Node node;

void display() {
    node * temp = head;
    if(head == NULL) {
        printf("Nothing to print\n");
        return;
    }
    while(temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

void insertFirst(int item) {
    node * newNode;
    newNode = (node*) malloc(sizeof(node));
    newNode->data = item;
    newNode->next = head;
    head = newNode;
}

void insertLast(int item) {
    node * newNode;
    newNode = (node*) malloc(sizeof(node));
    newNode-> data = item;
    newNode->next = NULL;

    if(head == NULL) head = newNode;
    else {
        node * temp = head;
        while(temp->next != NULL) temp = temp->next;
        temp->next = newNode;
    }

}

void insert_kth_position(int k, int item) 
{
    node * temp, *temp1;
    temp = (node *) malloc(sizeof(node));

    temp->data = item;

     if(head == NULL) {
        head = temp;
        head->next = NULL;
    }
    else if(k == 0) {
        temp->next = head;
        head = temp;
    }
    else {
        temp1 = head;
    while((k - 1) > 0) {
        temp1 = temp1->next;
        k--;
    }
    temp->next = temp1->next;
    temp1->next = temp;   
    } 
}

int main()
{
    insertLast(560);
    insertLast(561);
    insertLast(562);
    insertLast(563);
    insertLast(564);
    insertLast(565);
    insertLast(566);
    insertLast(567);
    insertLast(568);
    insertLast(569);
    insertLast(570);
    insertLast(571);
    insertLast(572);
    insertLast(573);
    insertLast(574);
    insertLast(575);
    insertLast(576);
    insertLast(577);
    insertLast(578);
    insertLast(579);
    insertLast(580);
    display();
    insert_kth_position(0,550);
    insert_kth_position(1,551);
    insert_kth_position(2,552);
    insert_kth_position(3,553);
    insert_kth_position(4,554);
    insert_kth_position(5,555);
    insert_kth_position(6,556);
    insert_kth_position(6,557);
    insert_kth_position(8,558);
    insert_kth_position(9,559);
    display();
    
    return 0;
}
