#include <stdio.h>
#include <stdlib.h>
#include<malloc.h>
// It will dynamically allocate space for array in heap.
int main()
{
    int *p;
    p = (int*)malloc(5*sizeof(int));
    p[0]=5;
    p[1]=1;
    p[2]=3;
    p[3]=7;
    p[4]=9;
    printf("%d",*(p+2));
    free(p); // use to free the memory when used

    return 0;
}
