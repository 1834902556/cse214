/*18.Merge the Elements of two Sorted Array. Access the array using pointer */

#include <stdio.h>
int main()
{
    int arr1[50] = {8, 5, 15, 20, 25, 18, 90, 32, 12, 9};
    int arr2[50] = {45, 56, 75, 98, 92, 85, 66, 21, 24, 90};
    int i, j, tag, size;
    int *p, *q;
    int size1 = 10;
    int size2 = 10;

    p = &arr1[0];
    q = &arr2[0];

    for(i=0; i<size1; i++)
        printf("%d ",*(p+i));

    printf("\n");

    for(i=0; i<size1; i++)
        printf("%d ",*(q+i));

    size = size1 + size2;

    for(i=size1, j=0; i<=size; i++,j++)
    {
        size1++;
        *(p+i)=*(q+j);
    }

    printf("\n");

    for(i=0; i<size; i++)
        printf("%d ",*(p+i));

    printf("\n");

    for(i=0; i<size; i++)
    {
        for(j=i+1; j<size; j++)
        {
            if(*(p+i)>*(p+j))
            {
                tag = *(p+i);
                *(p+i) = *(p+j);
                *(p+j) = tag;
            }
        }
    }

    for(i=0; i<size; i++)
        printf("%d ",*(p+i));

    printf("\n");

    return 0;
}
