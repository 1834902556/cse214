/*8.Search a value �X� (take input X from user) in the array and
    print the index if X found in the array otherwise print -1 */
#include <stdio.h>
int main()
{
    int arr[20] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int i, x;
    int size = 10;
    int tag = 0;

    scanf("%d", &x);

    for (i=0; i<size; i++){
        if(arr[i]==x){
            printf("index %d",i);
            tag++;
        }
    }
    if(tag!=1)
        printf("-1");

    return 0;
}

