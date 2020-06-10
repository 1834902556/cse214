/*3.Scan values from user into an array until user input is 0 (Zero).
    Access the array using pointer */

#include<stdio.h>
int main()
{
    int arr[50];
    int *p;
    int i, size;

    p = &arr[0];

    for(i=0; scanf("%d",(p+i))==1; i++)
        if(*(p+i)==0)
            break;

    size=i;

    printf("\n");

    for(i=0; i<size; i++)
        printf("%d ",*(p+i));

    return 0;
}
