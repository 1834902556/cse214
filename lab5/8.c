/*8.Delete a value from Kth index (take input K from user) from the
    array shift all other value to left. And print the whole array.
    Access the array using pointer */

#include<stdio.h>
int main()
{
    int arr[50] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int *p;
    int i, K;
    int size = 10;
    int tag = 0;

    scanf("%d",&K);

    p = &arr[0];

    for (i=K-1; i<size; i++)
        *(p+i) = *(p+i+1);

    size--;

    for(i=0; i<size; i++)
        printf("%d ", *(p+i));

    return 0;
}
