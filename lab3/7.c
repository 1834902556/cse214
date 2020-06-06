//7.Calculate the standard deviation of all elements of the given array

#include<stdio.h>
#include<math.h>
int main(){
    int arr[50];
    float sd, average, temp, variance;
    int i=0, size, sum =0;

    while(scanf("%d",&arr[i])==1){
        i++;
    }
    size = i;


    for(i=0; i<size; i++){
        sum += arr[i];
    }

    average = sum / (float) size;

    sum = 0.0;
    for(i=0; i<size; i++){
        temp = arr[i] - average;
        sum += pow(temp, 2);
    }

    variance = sum /  (float)size;
    sd = sqrt(variance);
    printf("%lf\n",sd);

    return 0;
}

