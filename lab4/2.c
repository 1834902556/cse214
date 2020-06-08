/*2.Reverse the given array and store it in another array.*/
#include<stdio.h>
int main ()
{
    int arrA[50];
    int arrB[50];
    int i=0,size,j;
    while(scanf("%d",&arrA[i])==1){
        i++;
    }
    size = i;
    printf("Original Array\n");
    for(i = 0; i < size; i++)
    {
        printf("%d ",arrA[i]);
    }
    printf("\n");

    for(i = 0, j = size - 1; i <= size; i++, j--)
    {
        arrB[i] = arrA[j];
    }
    printf("Reverse Array\n");
    for(i = 0; i < size; i++)
    {
        printf("%d ",arrB[i]);
    }

    return 0;
}
