#include <stdio.h>
#include <stdlib.h>

double e(int x, int n){
    static double p =1 ,f=1;
    double r;
    if(n == 0){
        return 1;
    }
    r = e(x, n-1);
    p = p*x;
    f = f*n;
    return r+p/f;
}



int main()
{
   int x = 2, n= 10;
  // ("Enter value of x %d", &x);
   printf("\n E : %f",e(x,n));

   return 0 ;
}
