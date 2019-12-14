#include<stdio.h>

struct node
{
    int data;
    node* next;
};

node* head = NULL;
int main()
{
    int d, n, i;

    printf("How many data want to input : ");
    scanf("%d", &n);

    printf("Input data : ");
    scanf("%d", &d);

    node* temp = new node();
    temp-> data = d;
    temp->next = NULL;

    head = temp;
    print();

    for(i = 0; i < n-1; i++)
    {
        printf("Input data : ");
        scanf("%d", &d);

        node* temp = new node();
        temp-> data = d;
        temp->next = NULL;

        head = temp;
        print();
    }

    return 0;
}

void prin();
{
    node* temp = head;

    while(temp != NULL)
    {
        printf("[%d] [%d]", temp, temp->data);
        temp = temp->next;
    }
}
