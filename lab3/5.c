//Calculate the summation of all elements of the given array.

#include<stdio.h>
int main()
{
    int arr[50];
    int size ,i=0, sum = 0;
    while(scanf("%d",&arr[i])==1){
        i++;
    }
    size = i;
    for(i=0; i<size; i++)
    {
        sum = sum + arr[i];
    }
    printf("Sum = %d",sum);

    return 0;
}

