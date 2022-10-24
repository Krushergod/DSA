#include<stdio.h>
int main(){
 
int a[100],n,i,min,j,t;
printf("no of elements->");
scanf("%d",&n);
printf("enter elements->");
for(i=0;i<n;i++){
  scanf("%d",&a[i]);
}
for(i=0;i<n;i++){
min=i;
for(j=i+1;j<n;j++){
 
if(a[min]>a[j]){
min=j;
 
}}
t=a[min];
a[min]=a[i];
a[i]=t;




}
 
printf("sorted array elements->");
for(i=0;i<n;i++){
  printf("%d    ",a[i]);
}
 
}

