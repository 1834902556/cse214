/*11.Delete a value “X” (take input X from user) from the array shift all other value to left. If “X”
   is not present in the given array print Element "Not Found". Delete all the occurrence of the value.
   And print the whole array */
#include<stdio.h>
int main ()
{
    int arr[20] = {1, 2, 3, 4, 5, 6, 4, 7, 8, 9};
    int i, j, x, tag=0, size=10;
    scanf("%d",&x);
    for( i=0; i<size; i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    for( j=0; j<= size; j++)
        {
        if(x==arr[j])
        {
            for(i=j; i<=size; i++)
            {
                arr[i] = arr[i+1];
            }
             size--;
            tag++;
            j--;
        }
    }
    if(tag==0)
    {
        printf("\nNot Found\n");
    }
    else
    {
        for( i=0; i<size; i++){
             printf("%d ",arr[i]);
        }
    }

    return 0;
}
