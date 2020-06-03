/*5.Update fifth (5th) index with another value. And print the whole array */

#include <stdio.h>
int main()
{
    int arr[20] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int i;
    int k = 5;
    int size = 10;
    int x = 120;

    for (i=0; i==k; i++){
        arr[i] = arr[i - 1];
    }


    arr[k - 1] = x;

    for(i=0; i<size; i++){
        printf("%d ", arr[i]);
    }


    return 0;
}
