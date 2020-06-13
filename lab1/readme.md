
## [Variable Decleration](../lab1/6.c)
```c
int i;
int p = 0, size = 10;
```

## [Array Decleration or Initialization](../lab1/4.c)
```c
int a[100] = {1, 2, 3, 4, 5, 6, 7,8, 9, 10};
```

## [Array Elements Insertion (User Input)](../lab1/1.c)
```c

//Implement in Program
    int i=0;
    while(scanf("%d",&a[i]) == 1){
    i++;
```

## [Print The Array Elements](../lab1/5.c)
```c
//Implement in Program
    for(i = 0; i < size; i++)
    {
        printf("%d ",a[i]);
    }
```

## [Array Reversing](../lab1/7.c)
```c
//Implement in Program

    for(i = size - 1; i >= 0; i--)
    {
        printf("%d ",a[i]);
    }
```
## [End of File](../lab1/2.c)
```c
    while(scanf("%d",&a[i]) != EOF){
        i++;
    }
    for(j = 0; j < i; j++)
    {
        printf("%d ",a[j]);
    }
```
