#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};
struct node *head=NULL;

void create(int n)
{
    int value;
    struct node *newnode,*temp;
    for ( int i = 0; i < n; i++)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
    
        printf("Enter Value:");
        scanf("%d",&value);

        newnode->data=value;

        if (head==NULL)
        {
            head=newnode;
            newnode->next=head;
            temp=head;
        }
        else
        {
            newnode->next=head;
            temp->next=newnode;
            temp=newnode;
        }
        
    }
    
} 

void display()
{
    struct node *temp=head;

    if (head==NULL)
    {
        printf("List empty");
    }

    do {
        printf("%d -> ", temp->data);
        temp = temp->next;
    } while (temp != head);

}

int main() {
    int n;

    printf("Enter number of nodes: ");
    scanf("%d", &n);

    create(n);
    display();

    return 0;
}
    

