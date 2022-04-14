
#include<stdio.h>

int main(){
    int  a[5] = {3, 6, 9, 12, 15}; 
    int  *pa; 
    pa = &a[0];

    printf(" *pa = %d\n", *pa);
    printf(" *pa+1 = %d\n", *pa+1);
    printf(" *pa+2 = %d\n", *pa+2);
    return 0;
}
