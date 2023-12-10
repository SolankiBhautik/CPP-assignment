#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

typedef struct node node;
node *head = NULL,*new, *temp;

void insert_at_first();
void insert_at_last();
void delet_at_first();
void delet_at_last();
void display();

int main()
{

    int i, j = 1;

    while(j)
    {
        printf("\ntype 1 for insert at first");
        printf("\ntype 2 for insert at last");
        printf("\ntype 3 for delet at first");
        printf("\ntype 4 for delet at last");
        printf("\ntype 5 for exit");
        scanf("\n%d", &i);

        switch(i)
        {
            case 1:
                insert_at_first();
                break;
            case 2:
                insert_at_last();
                break;
            case 3:
                delet_at_first();
                break;
            case 4:
                delet_at_last();
                break;
            case 5:
                j = 0;
                break;
        }
    }
    display();
    return 0;
}

void insert_at_first()
{   
    new = (node *)malloc(sizeof(node));
    printf("\nenter data at first :");
    scanf("\n%d", &new->data);
    new->next = NULL;

    if (head == NULL)
    {
        head = new;
    }
    else
    {
        new->next = head;
        head = new;
    }
}

void insert_at_last()
{
    new = (node *)malloc(sizeof(node));
    printf("\nenter data at last:");
    scanf("\n%d \n", &new->data);
    new->next = NULL;

    temp = head;
    if (head == NULL)
    {
        head = new;
    }
    else
    {
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = new;
    }
        printf("\n at last finish");
}

void display()
{
        printf("\n");
    temp = head;
    while(temp != NULL)
    {
        printf("%d", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

void delet_at_first()
{
    if(head == NULL)
    {
        printf("list is empty");
    }
    else
    {
    temp = head;
    head = head->next;
    free(temp);
    }
}

void delet_at_last()
{
    
    temp = head;
    if (head == NULL)
    {
        printf("list is empty");
    }
    else
    {
        while (temp->next->next != NULL)
        {
            temp = temp->next;
        }
        node *newtemp = temp->next;
        temp->next = NULL;
        free(newtemp);
    }
}