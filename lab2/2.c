/*2.Insert a value “x” (take input x from user) in
    the array at the end of currently stored elements */
#include <stdio.h>
int main()
{
    int arr[20] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int i, x;
    int size = 10;

    scanf("%d", &x);

    arr[size] = x;
    size++;

    for(i=0; i<size; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}
