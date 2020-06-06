/*1.Find Maximum from the Array.*/

#include<stdio.h>
int main ()
{
    int arr[50];
    int i=0, max, size;
    while(scanf("%d",&arr[i])==1){
        i++;
    }
    size = i;
    max = arr[0];
    for(i=0; i<size; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    printf("Maximum value is %d:",max);

    return 0;
}

