/*5.Declare another array with five[5] values and merge two array into one array.*/
#include<stdio.h>
int main ()
{
    int arrA[10] = {1,2,3,4,5,6,7,8,9,10};
    int arrB[5] = {66,85,75,24,13};
    int a[50], i, j, size_a, size_arrA = 10, size_arrB = 5;
    size_a = size_arrA + size_arrB;

    for(i = 0; i < size_arrA; i++)
    {
        printf("%d ",arrA[i]);
    }
    printf("\n");
    for(i = 0; i < size_arrB; i++)
    {
        printf("%d ",arrB[i]);
    }
    printf("\n");
    for(i = 0; i < size_arrA; i++)
    {
        a[i] = arrA[i];
    }
     for(i = 0, j = size_arrA; i < size_arrB; i++,j--)
     {
         a[j] = arrB[i];
     }

    for(i = 0; i < size_a; i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}

