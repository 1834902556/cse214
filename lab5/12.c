/*12.Find Second Minimum from the Array. Access the array using pointer */

#include<stdio.h>
int main()
{
    int arr[50] = {50, 60, 20, 90, 33, 53, 87, 100, 99, 42};
    int *min;
    int i, min_2nd;
    int size = 10;

    min = &arr[0];

    for(i=0; i<size; i++)
        printf("%d ",*(min+i));

    for(i=0; i<size; i++)
    {
        if(*(min+i)<*min)
        {
            min_2nd = *min;
            *min = *(min+i);
        }
        else if(*(min+i)<min_2nd && *(min+i)!=*min)
            min_2nd = *(min+i);
    }

    printf("\nSecond Minimum Value :%d", min_2nd);

    return 0;
}


