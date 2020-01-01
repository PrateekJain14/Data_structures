#include <stdio.h>
#include <stdlib.h>

int fact(int val){
int res = 1;
for(int i=val;i>0;i--){
  res *= i;
}
return res;
}

float c(int n ,int r){
int t1, t2, t3;
t1 = fact(n);
t2 = fact(r);
t3 = fact(n-r);
return t1/(t2*t3);
}

float pascalTriangleC(int n ,int r){
if(r == 0 || n == r)
    return 1;
else
    return pascalTriangleC(n-1,r-1) + pascalTriangleC(n-1,r);
}

int main()
{

    printf("\n%f",c(5,2) );
    printf("\n%f",pascalTriangleC(5,2) );

    return 0;
}
