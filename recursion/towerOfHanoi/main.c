#include <stdio.h>
#include <stdlib.h>

// Time complexity --> o(2^n)
void TOH(int n, char from, char aux, char to){
if(n>0){
  TOH(n-1,from,to,aux);
  printf("FROM %c TO %c\n",from,to);
  TOH(n-1,aux,from,to);
}
}


int main()
{
    int n = 5;
    TOH(n,'A','B','C');
    return 0;
}
