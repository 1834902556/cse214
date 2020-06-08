/*1.Copy the given array into anothjer array.*/
#include<stdio.h>
int main ()
{
    int arrA[50];
    int arrB[50];
    int i=0,size;
    while(scanf("%d",&arrA[i])==1){
        i++;
    }
    size = i;
    printf("Original Array\n");
    for(i = 0; i < size; i++)
    {
        printf("%d ",arrA[i]);
    }
    printf("\n");

    for(i = 0; i < size; i++)
    {
        arrB[i] = arrA[i];
    }
    printf("Copied Array\n");
    for(i = 0; i < size; i++)
    {
        printf("%d ",arrB[i]);
    }

    return 0;
}
