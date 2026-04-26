#include<stdio.h>
#include<stdlib.h>

// Node structure
struct node
{
    int data;
    struct node *next;
};

struct node *front = NULL;
struct node *rear = NULL;

// Enqueue operation
void enqueue(int value)
{
    struct node *newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = value;
    newNode->next = NULL;

    if(front == NULL)   // Queue is empty
    {
        front = rear = newNode;
    }
    else
    {
        rear->next = newNode;
        rear = newNode;
    }

    printf("Inserted: %d\n", value);
}

// Dequeue operation
void dequeue()
{
    if(front == NULL)
    {
        printf("Queue is Empty\n");
        return;
    }

    struct node *temp = front;
    printf("Deleted: %d\n", temp->data);

    front = front->next;

    if(front == NULL)   // If queue becomes empty
        rear = NULL;

    free(temp);
}

// Display queue
void display()
{
    if(front == NULL)
    {
        printf("Queue is Empty\n");
        return;
    }

    struct node *temp = front;
    printf("Queue elements: ");

    while(temp != NULL)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main()
{
    int ch, value;

    do
    {
        printf("\n--- Queue Menu ---\n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &ch);

        switch(ch)
        {
            case 1:
                printf("Enter value: ");
                scanf("%d", &value);
                enqueue(value);
                break;

            case 2:
                dequeue();
                break;

            case 3:
                display();
                break;

            case 4:
                printf("Exit\n");
                break;

            default:
                printf("Invalid choice\n");
        }

    } while(ch != 4);

    return 0;
}