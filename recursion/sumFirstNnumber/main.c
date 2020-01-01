#include <stdio.h>
#include <stdlib.h>

int sum(int n){
    if(n > 0){
        return sum(n-1)+n;
    }
    return 0 ;
}

int main()
{
   int x = 5 ;
  // ("Enter value of x %d", &x);
   printf("\n%d",sum(x));
   return 0 ;
}
