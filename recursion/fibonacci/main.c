#include <stdio.h>
#include <stdlib.h>


// using recursion
int fibonacci(int n){
if(n<=1)
    return n;
return fibonacci(n-2)+fibonacci(n-1);
}


// better way of doing recursion in this case is by using memoization --> O(n)
int arr[10];
int efficient_fib(int n){
        if(n <= 1){
            arr[n] = n;
            return n;
        }
        else{
        if(arr[n-2] == -1){
            arr[n-2] = efficient_fib(n-2);
        }
        if(arr[n-1] == -1){
            arr[n-1] = efficient_fib(n-1);
        }
        }
        return arr[n-2] - arr[n-1];
}


int Loopfibonacci(int n){
int t0 =0, t1 =1, sum;
if(n<=1)
    return n;
for(int i = 2; i<=n;i++){
    sum = t0 + t1;
    t0 = t1;
    t1 = sum;
}
return sum;
}

int main()
{
    printf("%d", fibonacci(5));
    printf("\n%d", Loopfibonacci(5));
    printf("\n%d", efficient_fib(5));
    return 0;
}
