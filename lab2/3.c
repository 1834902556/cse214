/*3.Insert a value “x” (take input x from user) in the array at third (3rd) index and
    shift all other value to right. And print the whole array */
#include <stdio.h>
int main()
{
    int arr[20] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int i,x;
    int k = 3;
    int size = 10;

    scanf("%d", &x);

    for (i=size; i>=k; i--){
         arr[i] = arr[i - 1];
    }

    size++;
    arr[k] = x;

    for(i=0; i<size; i++){
         printf("%d ", arr[i]);
    }


    return 0;
}
