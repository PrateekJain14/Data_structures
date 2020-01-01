#include <stdio.h>
#include <stdlib.h>

int factorial(int n){
    if(n > 0){
        return factorial(n-1)*n;
    }
    return 1 ;
}

int main()
{
   int x = 5 ;
  // ("Enter value of x %d", &x);
   printf("\n%d",factorial(x));
   return 0 ;
}
