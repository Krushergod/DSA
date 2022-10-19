#include<stdio.h>
#include<stdlib.h>
#define MAX 10
int DQ[MAX],f=-1,r=-1;
void ins_front(int item){
if(f==0)
printf("\nunable to inser item");
else if(f==-1){
  f=0;
  r=0;
}
else{
  f=f-1;
}
DQ[f]=item;
}
void ins_rear(int item){
if(r==MAX-1)
  printf("\nunable to insert");
  else if(f==-1){
  f=0;
  r=0;
}
else{
  r=r+1;
}
DQ[r]=item;
}

int del_front(){
  int item;
if(f==-1)
printf("\nunbale to delete from front");
else if(f==r){
  item=DQ[f];
  f=-1;
  r=-1;
  return item;
}
else{
  item=DQ[f];
  f=f+1;
  return item;
}

}

int del_rear(){
  int item;
if(f==-1)
printf("\nunbale to delete from front");
else if(f==r){
  item=DQ[r];
  f=-1;
  r=-1;
  return item;
}
else{
  item=DQ[r];
  r=r-1;
  return item;
}
}

void traversing(){
  int i;
  if(f==-1){
    printf("\nunable to traverse");
  
  }
  else{
    printf("\nQ elents are->");
    for(i=f;i<=r;i++){
      printf("  %d",DQ[i]);
    }
  }

}

int main(){
int ch,item;
while(1){
printf("\nmenu for dqueue\n");
printf("\n1.ins_front\n2.ins_rear\n3.del_front\n4.del_rear\n5. traversing\n");
printf("enter choice->");
scanf("%d",&ch);
switch(ch){
case 1:
printf("\nenter element->");
scanf("%d",&item);
ins_front(item);
break;
case 2:
printf("\nenter element->");
scanf("%d",&item);
ins_rear(item);
break;
case 3:
printf("\ndeleted element from front is->%d",del_front());
break;
case 4:
printf("\ndeleted element from rear is->%d",del_rear());
break;

case 5:
traversing();
break;
default:
printf("going to exit from menu");
exit(0);
}
}
}
