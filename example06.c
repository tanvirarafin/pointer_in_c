
#include<stdio.h>

int main(){
    int  a[5];
    int  *pa;
    
    pa = &a[0];

    
    *pa = 10; *(pa + 1) = 20; *(pa+2) =30;
    
    int y = *(pa+2); 
    
    printf(" y = %d\n", y);
    return 0;
}
