/*10.Find Minimum from the Array. Access the array using pointer */

#include<stdio.h>
int main()
{
    int arr[50] = {50, 60, 20, 90, 33, 53, 87, 100, 99, 42};
    int i;
    int *min;
    int size = 10;

    min = &arr[0];

    for(i=0; i<size; i++)
        printf("%d ",*(min+i));

    for(i=1; i<size; i++)
        if(*(min+i)<*min)
            *min = *(min+i);

    printf("\nMinimum value :%d",*min);

    return 0;
}
