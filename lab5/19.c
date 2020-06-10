/*19.Split an Array after Kth (take input K from user) elements
    into two different Arrays. Access the array using pointer */

#include <stdio.h>
int main()
{
    int arr1[50] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int arr2[50];
    int arr3[50];
    int i, K;
    int j = 0;
    int *p, *q, *r;
    int size1 = 10;
    int size2 = 0;
    int size3 = 0;

    p = &arr1[0];
    q = &arr2[0];
    r = &arr3[0];

    scanf("%d",&K);

    for(i=0; i<size1; i++)
        printf("%d ",*(p+i));

    for(i=0; i<size1; i++)
    {
        if(i<K)
        {
            *(q+i) = *(p+i);
            size2++;
        }
        else
        {
            *(r+j++) = *(p+i);
            size3++;
        }
    }

    printf("\n");

    for(i=0; i<size2; i++)
        printf("%d ",*(q+i));

    printf("\n");

    for(i=0; i<size3
; i++)
        printf("%d ", *(r+i));

    return 0;
}
