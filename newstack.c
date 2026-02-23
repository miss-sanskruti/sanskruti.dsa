#include <stdio.h>
int main() {
    int st[100];
    int top = -1;
    int size, n;
    int ch,p,i;

    printf("Enter stack size:");
    scanf("%d", &size);

    printf("Enter no of elements in stack:");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Enter element %d:",i + 1);
        top++;
        scanf("%d", &st[top]);
    }

    printf("\nstack is:\n");
    if (top == -1)
    {
        printf("Stack is empty.\n");
    }
    else
    {
        for (i = top; i >= 0; i--)
        {
            printf("%d\n", st[i]);
        }
    }

    do {
        printf("1.Push\n");
        printf("2.Pop\n");
        printf("3.Peek\n");
        printf("4.Is Empty\n");
        printf("5.Is Full\n");
        printf("6.Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);

        switch (ch)
        {
            case 1:   
                if (top == size - 1)
                {
                    printf("stack is full.Cannot push\n");
                }
                else
                {
                    printf("Enter element to push: ");
                    scanf("%d",&p);
                    top++;
                    st[top] = p;
                    printf("Element %d pushed successfully.\n", p);
                }
                printf("Stack after push an element:\n"); 
                for (i = top; i >= 0; i--) {
                    printf("%d\n", st[i]);
                }
                break;

            case 2:   
                if (top == -1)
                {
                    printf("Stack is empty.Cannot push\n");
                }
                else
                {
                    printf("Popped element: %d\n", st[top]);
                    top--;
                }

                printf("Stack after pop an element:\n"); 
                for (i = top; i >= 0; i--)
                {
                    printf("%d\n", st[i]);
                }
                break;

            case 3:  
                if (top == -1)
                {
                    printf("Stack is empty. No top element.\n");
                }
                else
                {
                    printf("Top element is: %d\n", st[top]);
                }
                break;

            case 4:   
                if (top == -1)
                    printf("Stack is EmptyY.\n");
                else
                    printf("Stack is NOT empty.\n");
                break;

            case 5:   
                if (top == size - 1)
                    printf("Stack is FULL.\n");
                else
                    printf("Stack is NOT full.\n");
                break;

            case 6:
                printf("exit \n");
                break;

            default:
                printf("Invalid choice\n");
        }
    } while (ch!=6);
    return 0;

}
