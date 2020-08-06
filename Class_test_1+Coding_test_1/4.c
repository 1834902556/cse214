/*Search a value X(take input X from user) in the array and print the location if X
found in the array otherwise print -1. Access the array using pointer */
#include<stdio.h>
int main()
{
    int arr[100];
    int *p;
    int i, j, x, loc;
    int size , tag = 0;

    for(i = 0; scanf("%d",&arr[i])!= EOF; i++)
    size = i;
    scanf("%d",&x);

    p = &arr[0];

    for(j=0; j<=size; j++)
    {
        if(*(p+j) == x)
        {
            loc = j;
            tag++;
        }
    }

    if(tag == 0)
         printf("\n-1");
    else
       printf("Location of X :%d",loc);

    return 0;
}
