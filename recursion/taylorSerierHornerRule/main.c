#include <stdio.h>
#include <stdlib.h>


// using loop
double eLoop(int x, int n){
double result=1;
for(n;n>0;n--){
    result = 1 + x/n*result;
}
return result;
}

// using recursion
double e(int x, int n){
static double result=1;

if(n == 0 )
    return 1;
result = 1 + x/n*result;
return e(x,n-1);
}

int main()
{
    printf("%f", eLoop(2,5));
    printf("\n%f", e(3,5));
    return 0;
}
