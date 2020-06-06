/*4.Find Second Minimum from the Array.*/

#include<stdio.h>
int main ()
{
    int arr[50];
    int i=0, min, size, second_min;
    while(scanf("%d",&arr[i])==1){
        i++;
    }
    size = i;
    min = arr[0];
    second_min = arr[0];
    for(i=0; i<size; i++){
        if(arr[i] < min){
           second_min = min;
           min = arr[i];
        }

        else if (arr[i] < second_min && arr[i] > min){
            second_min = arr[i];
        }
    }
    printf("Second Minimum value is %d:",second_min);

    return 0;
}



