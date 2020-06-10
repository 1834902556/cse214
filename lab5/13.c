/*13.Calculate the summation of all elements of the given array. Access the array using pointer */

#include<stdio.h>
int main()
{
    int arr[100] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int i, *p;
    int sum=0;
    int size=10;

    p = &arr[0];

    for(i=0; i<size; i++)
        printf("%d ",*(p+i));

    for(i=0; i<size; i++)
        sum += *(p+i);

    printf("\nSum = %d", sum);

    return 0;
}
