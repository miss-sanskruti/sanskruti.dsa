#include<stdio.h>
int main()
{
    int q[100];
    int front = 0;
    int rear= -1;
    int size, n;
    int ch,p,i;

    printf("Enter queue size:");
    scanf("%d", &size);

    printf("Enter no of elements in queue:");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Enter element %d:",i + 1);
        rear++;
        scanf("%d", &q[rear]);
    }
    do {
        printf("\n1.Display");
        printf("\n2.Insertion");
        printf("\n3.Deletion");
        printf("\n4.Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);

        switch (ch)
        {
            case 1:
                if (front>rear)
                {
                    printf("Queue is empty.\n");
                }
                else
                {
                    printf("queue is:");
                    for (i = front; i <= rear; i++)
                    {
                        printf("%d\t", q[i]);
                    }
                }
                break;

            case 2:   
                if (rear== size - 1)
                {
                    printf("queue is full.Cannot insert\n");
                }
                else
                {
                    printf("Enter element to insert: ");
                    scanf("%d",&p);
                    rear++;
                    q[rear] = p;
                    printf("Element %d inserted successfully.\n", p);
                }
                printf("queue after insert an element:\n"); 
                for (i = front; i <= rear; i++) {
                    printf("%d\t", q[i]);
                }
                break;

            case 3:   
                if (front>rear)
                {
                    printf("queue is empty.Cannot delete\n");
                }
                else
                {
                    printf("Deleted element: %d\n", q[front]);
                    front++;
                }

                printf("queue after delete an element:\n"); 
                for (i = front; i<= rear; i++)
                {
                    printf("%d\t", q[i]);
                }
                break;

                case 4:
                printf("Exit\n");
                break;

                default:
                printf("Invalid choice\n");
        }
    } while (ch!=4);
    return 0;
}


    
