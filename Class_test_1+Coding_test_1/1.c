/*Write a C program that declare an integer array length of one hundred(100)(do not initialize the array).
Scan values from user into an array until user input is 0(zero).Print entire array each element separated
by comma. Check OverFlow.Don't use Function and user pointer.*/
#include<stdio.h>
int main()
{
    int arr[100];
    int i;
    for(i = 0; scanf("%d",&arr[i])!=EOF; i++)
    {
    if(arr[i] == 0){
    break;
    }
    }
    if(i>100)
    {
     printf("\nOverFlow");
    }
   else
   for (int j = 0; j<i; j++){
       printf("%d,",arr[j]);
   }

return 0;
}
