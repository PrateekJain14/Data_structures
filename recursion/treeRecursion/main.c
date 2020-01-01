#include <stdio.h>
#include <stdlib.h>

// TREE RECURSION -> If a function call itself more than once in single function execution
//here time complexity is O(2^n) and space complexity is O(n) where n is height of tree
 void fun1(int x ){
 if(x > 0){
    printf("%d", x);
    fun1(x-1);
    fun1(x-1);
 }
 }

int main()
{
    int a = 5;
    fun1(a);
    return 0;
}
