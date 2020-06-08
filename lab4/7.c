/*7.Split the Array at Kth(take input K from user)index into two different arrays.*/

#include <stdio.h>
int main ()
{

    int arrA[50]={1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int arrB[50];
    int i=0,size=10,k;

    for (i = 0; i < size; i++)
    {
        printf("%d ", arrA[i]);
    }
    printf("\n");
    scanf("%d", &k);
    for (i = 0; i < k; i++)
    {
        arrB[i] = arrA[i];
    }
    for (i = 0; i < k; i++)
    {
        printf("%d ", arrB[i]);
    }
    printf("\n");
    for (i = k; i < size; i++)
    {
        printf("%d ", arrA[i]);
    }

    return 0;
}
