#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

struct Node
{
    int data;
    struct Node *next;
};

typedef struct Node node;

node *head[SIZE] = {NULL};

void insert(int item)
{
    int index;

    index = item % SIZE;

    node *newNode = (node *)malloc(sizeof(node));
    newNode->data = item;
    newNode->next = NULL;
    if (head[index] == NULL)
        head[index] = newNode;

    else
    {
        node *temp = head[index];

        while (temp->next != NULL)
            temp = temp->next;
        temp->next = newNode;
    }
}

void search(int item)
{
    int index = item % SIZE;

    if (head[index] == NULL)
        printf("No such element found!\n");
    else
    {
        int cnt = 0;
        node *temp;
        temp = head[index];
        while (temp != NULL)
        {
            cnt++;
            if (temp->data == item)
            {
                printf("Item found at index %d and Chain -> %d\n", index, cnt);
                break;
            }
            temp = temp->next;
        }
        if (temp == NULL)
            printf("No such element found!\n");
    }
}

void delete (int item)
{
    int index = item % SIZE;

    if (head[index] == NULL)
        printf("item not found for delete...\n");
    else
    {
        if (head[index]->data == item)
        {
            printf("%d deleted from %d index and chain -> 0\n", item, index);
            head[index] = head[index]->next;
        }
        else
        {
            node *temp, *prev;
            int cnt = 1;
            temp = head[index];
            prev = temp;
            while (temp != NULL)
            {
                if (temp->data == item)
                {
                    printf("%d deleted from %d index and chain -> %d\n", item, index, cnt);
                }
                temp = temp->next;
                cnt++;
            }

            if (temp == NULL)
                printf("Item not found! in the hash table\n");
        }
    }
}

void display()
{
    int index;
    for (index = 0; index < SIZE; index++)
    {
        printf("At index %d : ", index);
        if (head[index] == NULL)
            printf("No hash value found! \n");
        else
        {
            node *temp;
            for (temp = head[index]; temp != NULL; temp = temp->next)
            {
                printf("%d ", temp->data);
            }
            printf("\n");
        }
    }
}

int main()
{
    int a[10] = {54, 65, 25, 12, 30, 48, 78, 96, 58, 72};
    for (int i = 0; i < SIZE; i++)
    {
        insert(a[i]);
    }

    display();

    printf("Enter an element to search : ");
    int item;
    scanf("%d", &item);
    search(item);

    printf("Enter an element to delete : ");
    scanf("%d", &item);
    delete (item);

    display();

    return 0;
}
