/*4.Insert a value “X” (take input X from user) in the array at Kth (take input K from user)
index and shift all other value to right. And print the whole array */

#include <stdio.h>
int main()
{
    int a[100] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int i, x, k;
    int size = 10;

    scanf("%d", &x);
    scanf("%d", &k);

    for (i=size; i>=k; i--){
         a[i] = a[i - 1];
    }

    size++;
    a[k - 1] = x;

    for(i=0; i<size; i++){
        printf("%d ", a[i]);
    }

    return 0;
}
