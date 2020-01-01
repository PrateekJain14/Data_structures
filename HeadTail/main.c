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
int main()
{
    int x = 5;
    fun1(x);
    return 0;
}
