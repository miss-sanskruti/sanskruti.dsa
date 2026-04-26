#include<stdio.h>
#include<stdlib.h>

// Structure of node
struct node
{
    int data;
    struct node *left, *right;
};

// Create tree using user input
struct node* createTree()
{
    int value;
    printf("Enter value (-1 for no node): ");
    scanf("%d", &value);

    if(value == -1)
        return NULL;

    struct node* newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = value;

    printf("Enter left child of %d\n", value);
    newNode->left = createTree();

    printf("Enter right child of %d\n", value);
    newNode->right = createTree();

    return newNode;
}

// Preorder
void preorder(struct node* root)
{
    if(root != NULL)
    {
        printf("%d ", root->data);
        preorder(root->left);
        preorder(root->right);
    }
}

// Inorder
void inorder(struct node* root)
{
    if(root != NULL)
    {
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
    }
}

// Postorder
void postorder(struct node* root)
{
    if(root != NULL)
    {
        postorder(root->left);
        postorder(root->right);
        printf("%d ", root->data);
    }
}

int main()
{
    struct node* root;

    printf("Create Binary Tree:\n");
    root = createTree();

    printf("\nPreorder Traversal: ");
    preorder(root);

    printf("\nInorder Traversal: ");
    inorder(root);

    printf("\nPostorder Traversal: ");
    postorder(root);

    return 0;
}
