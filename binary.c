#include<stdio.h>
int main()
{
    int a[20];
    int low;
    int upper;
    int n,mid,sea,flag;

    printf("Enter no. of elements:");
    scanf("%d",&n);

    printf("Enter Elements:");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    
    printf("Enter Number to search:");
    scanf("%d",&sea);

    low=0;
    upper=n-1;

    while (low<=upper)
    {
        mid=(low+upper)/2;

        if (a[mid]==sea)
        {
            printf("Element %d found at position %d\n",sea, mid+1);
            flag=1;
            break;
        }

        else if (sea<a[mid])
        {
            upper=upper-1;
        }
        else if(sea>a[mid])
        {
            low=low+1;
        }
        else
        {
            printf("Element not found");
        }  
    }

        
    



}