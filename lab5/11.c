/*11.Find Second Maximum from the Array. Access the array using pointer */

#include<stdio.h>
int main()
{
    int arr[50] = {50, 60, 20, 90, 33, 53, 87, 100, 99, 42};
    int *max;
    int i, max_2nd;
    int size = 10;

    max = &arr[0];

    for(i=0; i<size; i++)
        printf("%d ",*(max+i));

    for(i=0; i<size; i++)
    {
        if(*(max+i)>*max)
        {
            max_2nd = *max;
            *max = *(max+i);
        }
        else if(*(max+i)>max_2nd && *(max+i)<*max)
            max_2nd = *(max+i);
    }

    printf("\nSecond Maximum Value :%d", max_2nd);

    return 0;
}

