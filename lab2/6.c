/*6.Update Kth (take input k from user) index with the value
    “x” (take input x from user). And print the whole array */
#include <stdio.h>
int main()
{
    int arr[20] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int i, k, x;
    int size = 10;

    scanf("%d", &k);
    scanf("%d", &x);

    for (i=0; i==k; i++){
     arr[i] = arr[i - 1];
    }


    arr[k-1] = x;
    printf("\n");

    for(i=0; i<size; i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
