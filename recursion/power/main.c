#include <stdio.h>
#include <stdlib.h>

int power(int m, int n){
    if(n > 0){
        return power(m,n-1)*m;
    }
    return 1 ;
}

int power_efficient(int m, int n){
    if(n == 0)
        return 1 ;
    if(n % 2 == 0){
        return power(m*m,n/2);
    }
    else{
        return power(m*m,n/2)*m;
    }

}

int main()
{
   int m = 2 , n= 5;
  // ("Enter value of x %d", &x);
   printf("\npower :%d",power(m,n));
   printf("\npower_efficient :%d",power_efficient(m,n));

   return 0 ;
}
