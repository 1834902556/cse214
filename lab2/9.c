/*9.Delete a value from Kth index (take input K from user) from
    the array shift all other value to left. And print the whole array */
#include <stdio.h>
int main()
{
    int arr[100] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int i, k;
    int size = 10;
    int tag = 0;

    scanf("%d", &k);

    for (i=k-1; i<size; i++){
       arr[i] = arr[i+1];
    }

    size--;

    for (i=0; i<size; i++){
        printf("%d ",arr[i]);
    }

    return 0;
}
