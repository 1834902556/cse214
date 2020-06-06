/*3.Find Second Maximum from the Array.*/

#include<stdio.h>
int main ()
{
    int arr[50];
    int i=0, max, size ,second_max;
    while(scanf("%d",&arr[i])==1){
        i++;
    }
    size = i;
    max = arr[0];
    second_max = arr[0];
    for(i=0; i<size; i++){
        if(arr[i] > max){
            second_max=max;
            max = arr[i];
        }
        else if (arr[i] > second_max && arr[i] < max){
            second_max = arr[i];
        }
    }
    printf("\nSecond Maximum value is :%d",second_max);

    return 0;
}

