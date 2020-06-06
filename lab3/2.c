/*2.Find Minimum from the Array.*/

#include<stdio.h>
int main ()
{
    int arr[50];
    int i=0, min, size;
    while(scanf("%d",&arr[i])==1){
        i++;
    }
    size = i;
    for(i=0; i<size; i++){
        if(arr[i] < min){
            min = arr[i];
        }
    }
    printf("Minimum value is %d:",min);

    return 0;
}


