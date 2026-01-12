#include <stdio.h>
int main()
{
    int a[5];
    int i,ch;
    char x;
    int max,min;
    int index;

    do
    {
        printf("1.Array Creation\n");
        printf("2.Display Array\n");
        printf("3.maximun number\n");
        printf("4.minmun number\n");
        printf("5.Array indexing\n");
        printf("6.Exist Program\n");
        printf("Enter your choice:");
        scanf("%d",&ch);

       switch(ch)
       {

        case 1:
        printf("Enter 5 elements:");
        for(i = 0; i < 5; i++)
        {
            scanf("%d", &a[i]);
        }
        break;

        case 2:
        printf("\nArray elements:");
        for(i = 0; i < 5; i++)
        {
            printf("%d ", a[i]);
        }
        break;

        case 3:
        max = a[0];
        for(i = 1; i < 5; i++)
        {
            if(a[i] > max)
            {
                max = a[i];
            printf("Maximum is: = %d", max);
            }
        }      
            break;

        case 4:
        min = a[0];
            for(i = 1; i < 5; i++)
                if(a[i] < min)
                   min = a[i];
            printf("Minimum number = %d", min);   
            break;    

        case 5:
                printf("Enter index (0 to 4): ");
                scanf("%d", &index);

                if(index >= 0 && index < 5)
                    printf("Element at index %d = %d", index, a[index]);
                else
                    printf("Invalid Index!");
                break;
                
        case 6:
        printf("Exist Program");
        break;        

        default:
                printf("Invalid choice");
       }
    // printf("Do you want to continue (y/n)? ");
    // scanf(" %c", &x);  
    } while(ch!=6);

}