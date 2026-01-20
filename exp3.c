#include<stdio.h>
int main()
{
    int a[10],n,i,num;

    printf("Enter no. of elements:");
    scanf("%d",&n);
    
    printf("Enter Elements:");
    for ( i = 0; i < n ;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("Elements are:");
    for ( i = 0; i < n ;i++)
    {
        printf("%d",a[i]);
    }
        printf("\nEnter element to search:");
        scanf("%d",&num);

            for ( i = 0; i < n; i++)
            {
                if (num==a[i])
                {
                    printf("Value of %d position is:%d\n",num,a[i]+1);
                    break;
                }
                
            }
            if(num!=a[i])
                {
                    printf("The value is not assigned\n");
                }
            
    }
      
    
    


    
