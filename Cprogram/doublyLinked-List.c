// INSERTION AT BEGINNING, END, INSERT AT POSITION (OPTIMIZED) IN DOUBLY LINKED LIST
#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* prev;
    struct Node* next;
};
struct Node* head, *tail;
void create(){
    head = 0;
    struct Node* newnode;
    int choice = 1;
    while(choice){
        newnode = (struct Node* )malloc(sizeof(struct Node));
        printf("Enter data: ");
        scanf("%d", &newnode->data);
        newnode->prev = 0;
        newnode->next = 0;
        
        if(head == 0){
            head = tail = newnode;
        }
        else{
            tail->next = newnode;
            newnode->prev = tail;
            tail = newnode;
        }
        printf("\nDo you want to continue (1, 0): ");
        scanf("%d", &choice);
    }
}

void insertatbeg(){
    struct Node* newnode;
    newnode = (struct Node* )malloc(sizeof(struct Node));
    printf("\nEnter data that you want to insert at the beginning of the doubly linked list: ");
    scanf("%d", &newnode->data);
    newnode->prev = 0;
    newnode->next = 0;

    // if list is empty
    if(head == 0){
        head = newnode;
    }
    // if list is not empty
    else{
        head->prev = newnode;
        newnode->next = head;
        head = newnode;
    }
}

void insertatend(){
    struct Node* newnode;
    newnode = (struct Node* )malloc(sizeof(struct Node));
    printf("\nEnter data that you want to insert at the end of doubly linked list: ");
    scanf("%d", &newnode->data);
    newnode->prev = 0;
    newnode->next = 0;

    // if list is empty
    if(head == 0){
        head = newnode;
    }
    // if list is not empty
    else{
        tail->next = newnode;
        newnode->prev = tail;
        tail = newnode;
    }
}

void insertAtPos(int ct){
    int pos, i = 1;
    printf("\nEnter position where you want to insert data in doubly linked list: ");
    scanf("%d", &pos);
    if(pos < 1 || pos > ct + 1){
        printf("INVALID POSITION\n");
    }
    else if(pos == 1){
        insertatbeg();
    }
    else if(pos == ct + 1){
        insertatend();
    }
    else{
        struct Node* newnode, *temp;
        temp = head;
        newnode = (struct Node* )malloc(sizeof(struct Node));
        printf("\nEnter data that you want to insert at position \"%d\" in doubly linked list: ", pos);
        scanf("%d", &newnode->data);
        newnode->prev = 0;
        newnode->next = 0;
        
        while(i < pos - 1){
            temp = temp->next;
            i++;
        }

        newnode->prev = temp;
        newnode->next = temp->next;
        temp->next = newnode;
        newnode->next->prev = newnode;
    }
}

void display(){
    struct Node* temp;
    temp = head;
    while(temp != 0){
        printf("%d - ", temp->data);
        temp = temp->next;
    }
    printf("NULL");

}

int count(){
    struct Node* temp;
    int count = 0;
    temp = head;
    while(temp != 0){
        count++;
        temp = temp->next;
    }
    printf("\nTotal number to element in the doubly linked list: %d", count);
    return count;
}

void main(){
    printf("Enter value one by one. Add enter after entering every value\n '0' means End & '1' Continue\n\n");
    create();
    display();
    count();

    insertatbeg();
    display();
    count();

    
    insertatend();
    display();

    int ct = count();
    insertAtPos(ct);
    display();
    count();
}


// time complexity
// Insert at beginning: O(1)
// Insert at end: O(1)
// Insert at any specific position: O(n)