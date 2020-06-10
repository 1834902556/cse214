/*16.Declare another array with ten (10) values and compare both
arrays whether they are same or not. Access the array using pointer */

#include <stdio.h>
int main()
{
    int arr1[50] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int arr2[50] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int i, *p, *q;
    int s = 0;
    int size = 10;

    p = &arr1[0];
    q = &arr2[0];

    for(i=0; i<size; i++)
        printf("%d ",*(p+i));

    printf("\n");

    for(i=0; i<size; i++)
        printf("%d ",*(q+i));

    for(i=0; i<size; i++)
        if(*(p+i)==*(q+i))
            s++;

    if(s==size)
        printf("\nTwo array are same\n");
    else
        printf("\nTwo array are not same\n");

    return 0;
}
