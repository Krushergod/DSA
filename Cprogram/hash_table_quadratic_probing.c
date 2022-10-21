#include<stdio.h>

#define SIZE 10

int hash_table[SIZE];
int q_value = -1;
// int q_value_search = -1;
int q_code(int item) {  // generating quadratic hash code for a specefic value
    q_value++;
    return (item + q_value*q_value) % SIZE;
}

void insert(int item) {  // insert an item in the hash table
    int index = q_code(item);
    while(hash_table[index] != -1) index = q_code(index);
    hash_table[index] = item;
    printf("%d inserted at %d position\n", item, index);
}

void display() {  // display all item from hash table
    printf("Printng the quadratic hash table : ");
    for(int i = 0; i < SIZE; i++) {
        if(hash_table[i] != -1) printf("%d ", hash_table[i]);
        else printf(" ~ ");
    }
    printf("\n");
}

int search(int item) {  // search an item in the hash table
    int index = item % SIZE;
    int i;
    for(i = 0; i < SIZE; i++) {
        index = (index + i*i) % SIZE;
        if(hash_table[index] == item) return index;
    }
    if(i == SIZE) return -1;
}

void delete(int item) {  // delete an item from the hash table
    int x = search(item);
    if(x != -1) {
        printf("%d deleted\n");
        hash_table[x] = -1;
    }
    else printf("Element not found!\n");
}


int main() {
    for(int i = 0; i < SIZE; i++) hash_table[i] = -1;
    
    int item[10] = {445, 587, 889, 590, 748, 490, 245, 712, 533, 457};
    for(int i = 0; i < SIZE; i++) {
        insert(item[i]);
    }
    display();

    printf("Enter an element to search : ");
    int n; 
    scanf("%d",&n);
    int found = search(n);
    if(found != -1) printf("%d found at %dth index\n", n, found);
    else printf("%d not found in the hash table\n", n);

    printf("Enter an element to delete : ");
    int del;
    scanf("%d", &del);
    delete(del);

    display();

    printf("Enter an element to search : ");
    scanf("%d",&n);
    found = search(n);
    if(found != -1) printf("%d found at %dth index\n", n, found);
    else printf("%d not found in the hash table\n", n);

    return 0;

}
