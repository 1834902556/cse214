/*2.Scan values from user into an array until end of file.
    Access the array using pointer */

#include<stdio.h>
int main()
{
    int arr[50];
    int *p;
    int i, N;
    int size = 0;

    p = &arr[0];

    for(i=0; scanf("%d",(p+i))!=EOF; i++)
        size++;

    printf("\n");

    for(i=0; i<size; i++)
        printf("%d ",*(p+i));

    return 0;
}

