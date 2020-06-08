/*4.Declare another array with ten[10] values and compare both arrays
whether they are same or not.*/

#include<stdio.h>
int main ()
{
    int arrA[10];
    int arrB[10];
    int i, count = 0, size = 10;
    printf("Enter first Array :");
    for(i = 0; i < size; i++)
    {
        scanf("%d ",&arrA[i]);
    }

    printf("\nEnter Second Array :");
    for(i = 0; i < size; i++)
    {
        scanf("%d ",&arrB[i]);
    }

    for(i = 0; i < size; i++)
    {
        printf("%d ",arrA[i]);
    }
    printf("\n");
    for(i = 0; i < size; i++)
    {
        printf("%d ",arrB[i]);
    }
        printf("\n");
    for(i = 0; i < size; i++)
    {
        if(arrA[i] == arrB[i])
        {
            count++;
        }
    }
    if(count == size)
    {
        printf("\nBoth arrays are same\n");
    }
    else
    {
        printf("\nBoth arrays aren't same\n");
    }

    return 0;
}

