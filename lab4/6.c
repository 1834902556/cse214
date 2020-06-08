/*6.Merge the elements of two shorted Array.*/
#include<stdio.h>
int main ()
{
    int arrA[10] = {1,2,3,4,5};
    int arrB[10] = {6,7,8,9,10};
    int M[50], i, j, size_m, size_A = 5, size_B = 5;
    size_m = size_A + size_B;

    for(i = 0; i < size_A; i++)
    {
        printf("%d ",arrA[i]);
    }
    printf("\n");
    for(i = 0; i < size_B; i++)
    {
        printf("%d ",arrB[i]);
    }
    printf("\n");
    for(i = 0; i < size_A; i++)
    {
        M[i] = arrA[i];
    }
    for(i = 0, j = size_A; i < size_B; i++,j++)
    {
        M[j] = arrB[i];
    }
    for(i = 0; i < size_m; i++)
    {
        printf("%d ",M[i]);
    }
    return 0;
}
