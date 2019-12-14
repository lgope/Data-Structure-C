/*
* C program to create a linked list and display the elements in the list
 */
#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>

void main()
{
    struct node
    {
        char data[30], newdata[30];
        int *next;
    };
    typedef struct node NODE;

    NODE *head, *first, *temp = 0;
    int count = 0;
    int choice = 1, i = 1, n, a[30];
    first = 0;

    while (choice)
    {
        head  = (NODE *)malloc(sizeof(NODE));
        a[i] = head;
        i++;

        printf("Enter a data element to insert into the Linked List\n");
        scanf("%s", &head-> data);
        if (first != 0)
        {
            temp->next = head;
            temp = head;
        }
        else
        {
            first = temp = head;
        }

        fflush(stdin);
        printf("Do you want to continue(Type 0 to exit or any integer to continue)?\n");
        scanf("%d", &choice);

    }

    temp->next = 0;
    /*  reset temp to the beginning */
    temp = first;
    printf("\n status of the linked list is\n");

    while (temp != 0)
    {
        printf("[%d]   [%s]",temp,temp->data);
        count++;
        temp = temp->next;
    }

    printf("[NULL]\n");
    printf("No. of nodes in the list = %d\n\n", count);

    for(n = 1; n <= i; n++)
    {
        printf("[%d] ", a[n]);
    }

    printf("\n");
}
