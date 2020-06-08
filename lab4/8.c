/*8.Cyclically permute the elements of an array*/

#include <stdio.h>
int main ()
{
    int arr[50];
    int i=0,size;
    while(scanf("%d",&arr[i])==1){
        i++;
    }
    size = i;
    for (i = 0; i < size; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    arr[size] = arr[0];
    for (i = 0; i < size; i++)
    {
        arr[i] = arr[i+1];
    }
    for (i = 0; i < size; i++)
        printf ("%d ", arr[i]);

    return 0;
}
