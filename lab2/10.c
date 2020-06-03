/*10.Delete a value “x” (take input x from user) from the array shift all other value to left. If “X”
    is not present in the given array print Element "Not Found". Only delete the first occurrence of
    the value. And print the whole array. */
#include<stdio.h>
int main ()
{
    int array[20]= {1,2,3,4,5,6,7,8,9,10};
    int i, j, x, tag=0,size=10;
    scanf("%d",&x);
    for(i=0; i<size; i++){
        printf("%d ",array[i]);
    }
    printf("\n");
    for( j=0; j<size; j++){
        if(x==array[j])
        {
            for( i=x-1; i<=size; i++)
            {
                array[i] = array[i+1];
            }
            tag++;
        }
    }
      size--;
    if(tag!=1){
        printf("\nNot Found\n");
    }
    else
    {
        for( i=0; i<size; i++){
            printf("%d ",array[i]);
        }
    }

    return 0;
}
