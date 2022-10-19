/*
Implementaion of circular linked list with single pointer
*/
#include<stdio.h>
#include<stdlib.h>
struct node{
  int data;
  struct node *next;
};
typedef struct node Node;
// Linked List Creation
Node* create(Node *last){
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
 new_node->next=NULL;
 //insert first item
 if(last==NULL){
   last=new_node;
   new_node->next=last;
 }
 else{
new_node->next=last->next;
last->next=new_node;
last=new_node;
 }
 }
}
 return last;
}
Node* ins_first(Node* last,int item){
Node *new_node;
new_node=(Node*)malloc(sizeof(Node));
if(new_node==NULL){
  printf("unable to allocate");
  exit(0);
}
else{
  new_node->data=item;
 new_node->next=NULL;
new_node->next=last->next;
last->next=new_node;
}
return last;
}
// instertion at last
Node* ins_last(Node* last,int item){
Node *new_node,*tmp;
new_node=(Node*)malloc(sizeof(Node));
if(new_node==NULL){
  printf("unable to allocate");
  exit(0);
}
else{
  new_node->data=item;
 new_node->next=NULL;
 new_node->next=last->next;
last->next=new_node;
last=new_node;
 
}
return last;
}
//insertion after a given node
Node *ins_after(Node *last, int item, int key){
Node *new_node,*tmp;
new_node=(Node*)malloc(sizeof(Node));
if(new_node==NULL){
  printf("unable to allocate");
  exit(0);
}
else{
 new_node->data=item;
 new_node->next=NULL;
 tmp=last->next;
while(tmp->data!=key){
  tmp=tmp->next;
}
new_node->next=tmp->next;
tmp->next=new_node;
}
return last;
}
//insertion after a given node
Node *ins_before(Node *last, int item, int key){
Node *new_node,*tmp;
new_node=(Node*)malloc(sizeof(Node));
if(new_node==NULL){
  printf("unable to allocate");
  exit(0);
}
else{
 new_node->data=item;
 new_node->next=NULL;
 tmp=last->next;
while(tmp->next->data!=key){
  tmp=tmp->next;
}
new_node->next=tmp->next;
tmp->next=new_node;
}
return last;
}
//delete first node
Node* del_first(Node *last){
  Node *tmp;
if(last==NULL){
    printf("\n underflow cnt delete");
 
  }
else{
  
  tmp=last->next;
  last->next=last->next->next;
  printf("\ndeleted elemnet is->%d",tmp->data);
  free(tmp);
}
return last;
}
//delete last node efficent one-O(1)
Node* del_last(Node *last){
  Node *tmp;
  int t;
  if(last==NULL){
    printf("\n underflow cnt delete");
 
  }
else{
//swap values of first and last
  t=last->data;
  last->data=last->next->data;
  last->next->data=t;
tmp=last->next;
  last->next=last->next->next;
  printf("\ndeleted elemnet is->%d",tmp->data);
  free(tmp);
}
}
//delete a node
Node* del_node(Node *last,int key){
Node *tmp,*tmp1;
if(last==NULL){
    printf("\n underflow cnt delete");
 
  }
else{
tmp=last->next;
while(tmp->next->data!=key){
  tmp=tmp->next;
}
tmp1=tmp->next;
tmp->next=tmp->next->next;
printf("\ndeleted elemnet is->%d",tmp1->data);
free(tmp1);
}
return last;
}
//Traversing
void traversing(Node *last){
  Node *tmp;
printf("\nlist items are:");
 tmp=last->next;
 do{
printf("%d->",tmp->data);
   tmp=tmp->next;
 } while(tmp!=last->next);
printf("------->");
printf("%d",last->next->data);
 
}
 
int main(){
int ch,item,key;
Node *last=NULL;
while(1){
printf("\nmenu for Linked List");
printf("\n1.Create \n2.ins_first\n3.ins_last\n4.ins_after\n5.ins_before \n6.del_first\n7.del_last\n8.del_node\n9. traversing\n");
printf("enter choice->");
scanf("%d",&ch);
switch(ch){
case 1:
last=create(last);
break;
case 2:
printf("\nenter element->");
scanf("%d",&item);
last=ins_first(last,item);
break;
case 3:
printf("\nenter element->");
scanf("%d",&item);
last=ins_last(last,item);
break;
case 4:
printf("\nenter element->");
scanf("%d",&item);
printf("\nenter key->");
scanf("%d",&key);
last=ins_after(last,item,key);
break;
case 5:
printf("\nenter element->");
scanf("%d",&item);
printf("\nenter key->");
scanf("%d",&key);
last=ins_before(last,item,key);
break;
case 6:
last=del_first(last);
break;
case 7:
last=del_last(last);
break;
case 8:
printf("\nenter element you want to del->");
scanf("%d",&key);
last= del_node(last,key);
break;
case 9:
traversing(last);
break;
default:
printf("going to exit from menu");
exit(0);
}
}}
