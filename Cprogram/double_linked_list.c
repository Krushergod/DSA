#include<stdio.h>
#include<stdlib.h>
struct node{
 int data;
 struct node *prev;
 struct node *next;
};
typedef struct node Node;
// Linked List Creation
Node* create(Node *start){
Node *new_node,*tmp;
int item,i,n;
printf("how many elemnets->");
scanf("%d",&n);
for(i=0;i<n;i++){
new_node=(Node*)malloc(sizeof(Node));
if(new_node==NULL){
  printf("unable to allocate memory");
  exit(0);
}
else{
printf("enter item->");
scanf("%d",&item);
new_node->data=item;
new_node->prev=NULL;
new_node->next=NULL;
//insert first item
if(start==NULL){
  start=new_node;
}
else{
tmp=start;
while(tmp->next!=NULL){
 tmp=tmp->next;
}
tmp->next=new_node;
new_node->prev=tmp;
}
}
}
return start;
}
Node* ins_first(Node* start,int item){
Node *new_node;
new_node=(Node*)malloc(sizeof(Node));
if(new_node==NULL){
 printf("unable to allocate");
 exit(0);
}
else{
new_node->data=item;
new_node->next=NULL;
new_node->prev=NULL;
new_node->next=start;
start=new_node;
}
return start;
}
// instertion at last
Node* ins_last(Node* start,int item){
Node *new_node,*tmp;
new_node=(Node*)malloc(sizeof(Node));
if(new_node==NULL){
 printf("unable to allocate");
 exit(0);
}
else{
 
new_node->data=item;
new_node->next=NULL;
new_node->prev=NULL;
tmp=start;
while(tmp->next!=NULL){
 tmp=tmp->next;
}
tmp->next=new_node;
new_node->prev=tmp;
}
return start;
}
//insertion after a given node
Node *ins_after(Node *start, int item, int key){
Node *new_node,*tmp;
new_node=(Node*)malloc(sizeof(Node));
if(new_node==NULL){
 printf("unable to allocate memory");
 exit(0);
}
else{
new_node->data=item;
new_node->next=NULL;
new_node->prev=NULL;
tmp=start;
while(tmp->data!=key){
 tmp=tmp->next;
}
new_node->next=tmp->next;
tmp->next->prev=new_node;
tmp->next=new_node;
new_node->prev=tmp;
}
return start;
}
//insertion before a given node
Node *ins_before(Node *start, int item, int key){
Node *new_node,*tmp;
new_node=(Node*)malloc(sizeof(Node));
if(new_node==NULL){
 printf("unable to allocate");
 exit(0);
}
else{
new_node->data=item;
new_node->next=NULL;
new_node->prev=NULL;
tmp=start;
while(tmp->data!=key){
 tmp=tmp->next;
}
new_node->next=tmp;
tmp->prev->next=new_node;
new_node->prev=tmp->prev;
tmp->prev=new_node;
 
 
}
return start;
}
//delete first node
Node* del_first(Node *start){
 Node *tmp;
if(start==NULL){
   printf("\n underflow cnt delete");
 
 }
else{
  tmp=start;
 start=start->next;
 start->prev=NULL;
 printf("\ndeleted elemnet is->%d",tmp->data);
 free(tmp);
}
return start;
}
//delete last node
Node* del_last(Node *start){
 Node *tmp;
 if(start==NULL){
   printf("\n underflow cnt delete");
 
 }
else{
tmp=start;
while(tmp->next!=NULL){
 tmp=tmp->next;
}
tmp->prev->next=NULL;
tmp->prev=NULL;
printf("\ndeleted elemnet is->%d",tmp->data);
free(tmp);
}
return start;
}
//delete a node
Node* del_node(Node *start,int key){
Node *tmp;
if(start==NULL){
   printf("\n underflow cnt delete");
 
 }
else{
tmp=start;
while(tmp->data!=key){
 tmp=tmp->next;
}
tmp->next->prev=tmp->prev;
tmp->prev->next=tmp->next;
 
printf("\ndeleted elemnet is->%d",tmp->data);
free(tmp);
}
return start;
}
//Traversing
void traversing(Node *start){
 Node *tmp;
printf("\nlist items are:   ");
tmp=start;
printf("N");
while(tmp!=NULL){
  printf("<-%d->",tmp->data);
  tmp=tmp->next;
}
printf("N");
 
}
 
int main(){
int ch,item,key;
Node *start=NULL;
while(1){
printf("\nmenu for Linked List");
printf("\n1.Create \n2.ins_first\n3.ins_last\n4.ins_after\n5.ins_before \n6.del_first\n7.del_last\n8.del_node\n9. traversing\n");
printf("enter choice->");
scanf("%d",&ch);
switch(ch){
case 1:
start=create(start);
break;
case 2:
printf("\nenter element->");
scanf("%d",&item);
start=ins_first(start,item);
break;
case 3:
printf("\nenter element->");
scanf("%d",&item);
start=ins_last(start,item);
break;
case 4:
printf("\nenter element->");
scanf("%d",&item);
printf("\nenter key->");
scanf("%d",&key);
start=ins_after(start,item,key);
break;
case 5:
printf("\nenter element->");
scanf("%d",&item);
printf("\nenter key->");
scanf("%d",&key);
start=ins_before(start,item,key);
break;
case 6:
start=del_first(start);
break;
case 7:
start=del_last(start);
break;
case 8:
printf("\nenter element you want to del->");
scanf("%d",&key);
start= del_node(start,key);
break;
case 9:
traversing(start);
break;
default:
printf("going to exit from menu");
exit(0);
}
}}
