/*3.Reverse the given array within the same array.*/

#include<stdio.h>
int main ()
{
    int arr[50];
    int i=0,j,size,temp = 0;
    while(scanf("%d",&arr[i])==1){
        i++;
    }
    size = i;
    printf("Original Array\n");
    for(i = 0; i < size; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");

    for(i = 0, j = size - 1; i < size/2; i++, j--)
    {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    printf("Reverse Array\n");
    for(i = 0; i < size; i++)
    {
        printf("%d ",arr[i]);
    }

    return 0;
}
