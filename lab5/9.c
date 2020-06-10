/*9.Find Maximum from the Array. Access the array using pointer */

#include<stdio.h>
int main()
{
    int i;
    int *max;
    int arr[50] = {50, 60, 20, 90, 33, 53, 87, 100, 99, 42};
    int size = 10;

    max = &arr[0];

    for(i=0; i<size; i++)
        printf("%d ", *(max+i));

    for(i=1; i<size; i++)
        if(*(max+i)>*max)
            *max = *(max+i);

    printf("\nMaximum value :%d",*max);

    return 0;
}
