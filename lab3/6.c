//6.Calculate the average of all elements of the given array.

#include<stdio.h>
int main()
{
    int arr[50];
    int size ,i=0, sum = 0;
    float avg;
    while(scanf("%d",&arr[i])==1){
        i++;
    }
    size = i;

    for(i=0; i<size; i++)
    {
        sum = sum + arr[i];
    }

    avg = sum / size;
    printf("%f",avg);

    return 0;
}



