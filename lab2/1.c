/*1.Insert any value at tenth (10th) index of the array.
    And print the whole array */
#include <stdio.h>
int main()
{
    int arr[12] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int i;
    int size = 10;
    int value = 11;

    printf("Before add :");
    for(i=0; i<size; i++){
        printf("%d ", arr[i]);
    }

    arr[10] = value;
    size++;

    printf("\nAfter add :");
    for(i=0; i<size; i++){
      printf("%d ", arr[i]);
    }

    return 0;
}
