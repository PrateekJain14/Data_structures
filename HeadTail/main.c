#include <stdio.h>
#include <stdlib.h>

// RECURSION PRACTICE

void fun1(int x){
    if(x>0){
    fun1(x-1);   // HEAD RECUSRSION
    printf("%d ", x);
    // fun1(x-1);  TAIL RECURSION
    }
}

int fun2(int x){
 static int n = 0; // static variable are created inside code section and that too only once (lime Global variable)
 if(x > 0){
   n++;
   return fun2(x-1) + n;
 }
 return 0 ;
}

int main()
{
    int x = 5;
    fun1(x);
    printf("\nfun2 result  : %d", fun2(x));
    return 0;
}
