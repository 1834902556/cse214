/*Delete a value X(take input X from user)from the array shift all other value to left. If X
   is not present in the given array print Element Not Found. Delete all the occurrence of the value.
   And print the whole array */
#include<stdio.h>
int main ()
{
    int arr[100];
    int x, size, i, j, k;
    int tag = 0;

    for(i = 0; scanf("%d",&arr[i])!=EOF; i++)
    size = i;

    scanf("%d",&x);

    for( k=0; k<=size; k++){
        printf("%d ",arr[k]);
    }

    for( j=0; j<= size; j++)
        {
        if(x == arr[j])
        {
            for(k=j; k<=size; k++)
            {
                arr[k] = arr[k+1];
            }
            size--;
            tag++;
            j--;
        }
    }
    if(tag == 0)
    {
        printf("\nNot Found.");
    }
    else
    printf("\n");
    {
        for( k=0; k<=size; k++){
             printf("%d ",arr[k]);
        }
    }

    return 0;
}
