## [Copy an Array Into Another Array](../lab4/1.c)
```c
    for(i = 0; i < size; i++)
    {
        arrB[i] = arrA[i];
    }
```

## [Reverse an Array and Store Into Another Array](../lab4/2.c)
```c
    for(i = 0, j = size - 1; i <= size; i++, j--)
    {
        arrB[i] = arrA[j];
    }
```

## [Reverse an Array and Store Into the Same Array](../lab4/3.c)
```c
    for(i = 0, j = size - 1; i < size/2; i++, j--)
    {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
```

## [Array Compare](../lab4/4.c)
```c
    for(i = 0; i < size; i++)
    {
        if(arrA[i] == arrB[i])
        {
            count++;
        }
    }
    if(count == size)
    {
        printf("\nBoth arrays are same\n");
    }
    else
    {
        printf("\nBoth arrays aren't same\n");
    }
```

## [Array Merge](../lab4/5.c)
```c
size = size1 + size2; 
    for(i = 0; i < size_arrA; i++)
    {
        a[i] = arrA[i];
    }
     for(i = 0, j = size_arrA; i < size_arrB; i++,j--)
     {
         a[j] = arrB[i];
     }
```

## [Merge the Elements of Two Sorted Array](../lab4/6.c)
```c
    for(i = 0; i < size_A; i++)
    {
        M[i] = arrA[i];
    }
    for(i = 0, j = size_A; i < size_B; i++,j++)
    {
        M[j] = arrB[i];
    }
```

## [Split an Array Into Two Different Arrays](../lab4/7.c)
```c
scanf("%d",&K); 
    for (i = 0; i < k; i++)
    {
        arrB[i] = arrA[i];
    }
     for (i = 0; i < k; i++)
    {
        printf("%d ", arrB[i]);
    }
    printf("\n");
    for (i = k; i < size; i++)
    {
        printf("%d ", arrA[i]);
    }
```

## [Cyclically Permute](../lab4/8.c)
```c 
    arr[size] = arr[0];
    for (i = 0; i < size; i++)
    {
        arr[i] = arr[i+1];
    }
```
