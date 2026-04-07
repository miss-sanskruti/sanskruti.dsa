#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *top = NULL;

// Push Operation
void push()
{
    struct Node *newnode;
    int value;

    newnode = (struct Node*)malloc(sizeof(struct Node));

    printf("Enter value: ");
    scanf("%d", &value);

    newnode->data = value;
    newnode->next = top;
    top = newnode;

    printf("Element pushed successfully\n");
}

// Pop Operation
void pop()
{
    struct Node *temp;

    if(top == NULL)
    {
        printf("Stack Underflow\n");
        return;
    }

    temp = top;
    printf("Deleted element: %d\n", temp->data);

    top = top->next;
    free(temp);
}

// Display Stack
void display()
{
    struct Node *temp = top;

    if(top == NULL)
    {
        printf("Stack is empty\n");
        return;
    }

    printf("Stack elements:\n");
    while(temp != NULL)
    {
        printf("%d\n", temp->data);
        temp = temp->next;
    }
}

// Main Menu
int main()
{
    int choice;

    while(1)
    {
        printf("\n---- STACK MENU ----\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Display\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                push();
                display();
                break;

            case 2:
                pop();
                display();
                break;

            case 3:
                display();
                break;

            case 4:
                exit(0);

            default:
                printf("Invalid choice\n");
        }
    }

    return 0;
}