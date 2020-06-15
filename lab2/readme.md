## [Print The Array Elements](../lab2/3.c)
```c

for(i=0; i<size; i++)
        printf("%d ", arr[i]);
```

## [Insert Value in Array](../lab2/4.c)
```c
//Insert Value
scanf("%d", &x);

//Insert Position
scanf("%d", &k);

for (i=size; i>=K; i--)
        arr[i] = arr[i - 1];
        
size++;

arr[K - 1] = X;
```

## [Update Index with Another Value ](../lab2/5.c)
```c
for (i=0; i==K; i++)
        arr[i] = arr[i - 1];

arr[k - 1] = x;
```

## [Update Index with Another Value in a Correct Position or Index ](../lab2/6.c)
```c
//Insert Position
scanf("%d", &k);

//Insert Value
scanf("%d", &x);

for (i=0; i==k; i++)
      arr[i] = arr[i - 1];

arr[k - 1] = x;
```

## [Search a Value in Array](../lab2/7.c)
```c
//Insert Value
scanf("%d", &x);
    
for (i=0; i<size; i++){
      if(arr[i]==x)
      tag++;
    }
```

## [Search a Value in Array and if Found Print -1](../lab2/8.c)
```c
if(tag!=1)
   printf("-1");
```

## [Delete a Value in Array](../lab2/9.c)
```c
//Insert Position
scanf("%d", &k);

for (i=k-1; i<size; i++)
       arr[i] = arr[i+1];
size--;
```

## [Only Delete the First Occurrence of The Value](../lab2/10.c)
```c
//Insert Value
    scanf("%d",&x);

for(i=0; i<size; i++){
        if(X==arr[i]){
            for(j=i; j<=size; j++){
                arr[j] = arr[j+1];
            }
            tag++;
            break;
        }
    }

size--;

if(tag!=1){
        printf("Not Found");
    }
    else{
        for(i=0; i<size; i++)
            printf("%d ",array[i]);
    }
```

## [Delete All the Occurrence of The Value](../lab2/11.c)
```c
//Insert Value
scanf("%d",&X);

for( i=0; i<=size; i++){
        if(X==arr[i]){
            for(j=i; j<=size; j++){
                arr[j] = arr[j+1];
            }
            size--;
            tag++;
            i--;
        }
    }
    
if(tag==0){
        printf("Not Found");
    }
    else{
        for(i=0; i<size; i++)
            printf("%d ",arr[i]);
    }
```
