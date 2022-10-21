#include<stdio.h>

#define SIZE 10
int hash_array[SIZE];

int hashCode(int n) {
    return n%SIZE;
}

void insert(int item) {
    int hash_code = hashCode(item);
    while(hash_array[hash_code] != -1) {
        ++hash_code;
        if(hash_code == SIZE) hash_code = 0;
    }
    hash_array[hash_code] = item;
    printf("%d inserted at %d\n", item, hash_code);
}

void display() {
    for(int i = 0; i < SIZE; i++) {
        if(hash_array[i] != -1) printf("%d ", hash_array[i]);
        else printf(" ~ ");
    }
    printf("\n");
}

int search_element(int item) {
    int hash_index = hashCode(item);
    int key = hash_index;

    if(hash_array[hash_index] ==  item) return hash_index;

    while(hash_array[hash_index] != item  && key != ++hash_index) {

        if(hash_index == SIZE) hash_index = 0;
        if(hash_array[hash_index] == item) return hash_index;
    }
    return -1;
}

void delete(int item) {
    int x = search_element(item);
    if(x == -1) printf("Can't delete item was not found!\n");
    else {
        printf("%d deleted\n", hash_array[x]);
        hash_array[x] = -1;
    }
}

int main() {
    int item[10] = {45, 67, 89, 59, 78, 9, 2, 10, 33, 45};
    for(int i = 0; i < SIZE; i++) hash_array[i] = - 1;
    for(int i = 0; i < SIZE; i++) {
        insert(item[i]);
    }
    // display the hash array
    printf("Hash table : ");
    display();
    printf("\n");

    printf("Enter a number to search : ");
    int n;
    scanf("%d", &n);
    int index = search_element(n);
    if(index != -1) printf("%d found at %d index in the hash table\n", n, index);
    else printf("%d not found! in the hash table\n", n);

    int num;
    printf("Enter the number to delete : ");
    scanf("%d", &num);
    delete(num);
    display();


    printf("Enter a number to search : ");
    scanf("%d", &n);
    index = search_element(n);
    if(index != -1) printf("%d found at %d index in the hash table\n", n, index);
    else printf("%d not found! in the hash table\n", n);

    display();

    return 0;
}
