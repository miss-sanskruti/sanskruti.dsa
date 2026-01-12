#include<stdio.h>
int main()
{
    int i,j;
    int a[2][2],ta[2][2];
    int b[2][2],tb[2][2];
    int ch;
    int c[2][2];
    char x;

    do{
    printf("1:Create matrix\n");
    printf("2:Display matrix\n");
    printf("3:Add matrix\n");
    printf("4:Subtract matrix\n");
    printf("5:Multiply matrix\n");
    printf("6:Division matrix\n");
    printf("7:Transpose matrix\n");
    printf("8:Program exist\n");
    printf("Enter your choice:");
    scanf("%d",&ch);

    switch (ch)
    {

    case 1:
    printf("Enter Matrix 1 Value:");
    for ( i = 0; i < 2; i++)
    {
        for ( j = 0; j < 2; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    printf("Enter Matrix 2 Value:");
    for ( i = 0; i < 2; i++)
    {
        for ( j = 0; j < 2; j++)
        {
            scanf("%d",&b[i][j]);
        }    
    }
    break;

    case 2:
    printf("----Matrix Value 1----\n");
    for ( i = 0; i < 2; i++)
    {
        for ( j = 0; j < 2; j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");    
    }

    printf("----Matrix Value 2----\n");
    for ( i = 0; i < 2; i++)
    {
        for ( j = 0; j < 2; j++)
        {
            printf("%d\t",b[i][j]);
        }
        printf("\n");   
    }
    break;

    case 3:
    printf("Addition of 2 Matrix\n");
     for ( i = 0; i < 2; i++)
    {
        for ( j = 0; j < 2; j++)
        {
            c[i][j]=a[i][j]+b[i][j];  
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
    break;

    case 4:
    printf("Subtraction of 2 Matrix\n");
     for ( i = 0; i < 2; i++)
    {
        for ( j = 0; j < 2; j++)
        {
            c[i][j]=a[i][j]-b[i][j];  
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
    break;

    case 5:
    printf("Multiplication of 2 Matrix\n");
     for ( i = 0; i < 2; i++)
    {
        for ( j = 0; j < 2; j++)
        {
            c[i][j]=a[i][j]*b[i][j];  
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
    break;

    case 6:
    printf("Division of 2 Matrix\n");
     for ( i = 0; i < 2; i++)
    {
        for ( j = 0; j < 2; j++)
        {
            c[i][j]=a[i][j]/b[i][j];  
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
    break;

    case 7:
    printf("Transpose of 2 Matrix\n");

    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            ta[j][i] = a[i][j];
        }
        printf("\n");
    }

    printf("Matrix 1:\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d\t", ta[j][i]);
        }
        printf("\n");
    }

    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            tb[j][i] = b[i][j];
        }
        printf("\n");
    }

    printf("Matrix 2:\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d\t", tb[j][i]);
        }
        printf("\n");
    }

    case 8:
    printf("Program exist\n");
    break;

    default:
    printf("Invalid Choice\n");

    }

}while (ch!=8);
return 0;
}
