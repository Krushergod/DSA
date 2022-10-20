// Merge two sorted array...
#include<stdio.h>

int main() {
    
    int a[100], b[100], c[200];
    int n1, n2;
    
    printf("Enter the size of the first array: ");
    scanf("%d", &n1);
    printf("Enter the elements of the first array: ");
    for(int i = 0; i < n1; i++) scanf("%d", &a[i]);

    printf("Enter the size of the second array: ");
    scanf("%d", &n2);
    printf("Enter the elements of the second array: ");
    for(int i = 0; i < n2; i++) scanf("%d", &b[i]);

    int m = n1+n2;

    int index = 0, index_first = 0, index_second = 0;

    while(index_first < n1 && index_second < n2) {
        if(a[index_first] < b[index_second]) {
            c[index] = a[index_first];
            index_first++;
        }
        else {
            c[index] = b[index_second];
            index_second++;
        }
        index++;
    }
    // elements of the first array is over but second array elements are remaind
    if(index_first == n1) {
        while(index_second < n2) {
            c[index] = b[index_second];
            index_second++;
            index++;
        }
    }
    // Elements of the second array is over but first array is remaind
    else if(index_second == n2) {
        while(index_first < n1) {
            c[index] = a[index_first];
            index_first++;
            index++;
    }
    }

    // printing the array...
    for(int i = 0; i < m; i++) printf("%d ", c[i]);

    return 0;
}
