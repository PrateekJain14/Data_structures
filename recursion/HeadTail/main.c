#include <stdio.h>
#include <stdlib.h>

// RECURSION PRACTICE
// HEAD RECUSRSION -> function call itself in first statement and all processing is done at return time.
void fun1(int x){
    if(x>0){
    fun1(x-1);
    printf("%d ", x);
    }
}


// TAIL RECURSION -> when function call is the last statement and on return no extra work need to be done
// better to use loop is place of it as mostly it requires more space.
void fun3(int x){
    if(x>0){
    printf("\n%d ", x);
    fun3(x-1);
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
    fun3(x);
    printf("\nfun2 result  : %d", fun2(x));
    return 0;
}
