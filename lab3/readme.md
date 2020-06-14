## [Find Maximum](../lab3/1.c)
```c
    max = arr[0];
    for(i=0; i<size; i++){
        if(arr[i] > max){
            max = arr[i];
        }
     }
```

## [Find Minimum](../lab3/2.c)
```c
min = arr[0];
    for(i=0; i<size; i++){
        if(arr[i] < min){
            min = arr[i];
        }
    }       min = array[i];
    }
```

## [Find Second Maximum](../lab3/3.c)
```c
    max = arr[0];
    second_max = arr[0];
    for(i=0; i<size; i++){
        if(arr[i] > max){
            second_max=max;
            max = arr[i];
        }
        else if (arr[i] > second_max && arr[i] < max){
            second_max = arr[i];
        }
    }
```

## [Find Second Minimum](../lab3/4.c)
```c
    min = arr[0];
    second_min = arr[0];
    for(i=0; i<size; i++){
        if(arr[i] < min){
           second_min = min;
           min = arr[i];
        }

        else if (arr[i] < second_min && arr[i] > min){
            second_min = arr[i];
        }
    }
```

## [Summation of Given Array](../lab3/5.c)
```c
    for(i=0; i<size; i++)
    {
        sum = sum + arr[i];
    }
```

## [Average of Given Array](../lab3/6.c)
```c
    for(i=0; i<size; i++)
    {
        sum = sum + arr[i];
    }

    avg = sum / size;
```

## [Calculate Standard Deviation (For Non-Grouped Data)](../lab3/7.c)
```c
    for(i=0; i<size; i++){
        temp = arr[i] - average;
        sum += pow(temp, 2);
    }

    variance = sum /  (float)size;
```

## [First 92 Fibonacci Numbers](../lab3/8.c)
```c
    for(i = 0; i < n; i++)
    {
        arr[i] = f;
        fibo = f + s;
        f = s;
        s = fibo;
    }
```
