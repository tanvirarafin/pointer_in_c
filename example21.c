#include<stdio.h>



int main(){
    
    int x = 10;
    int *y = &x;
    
    printf("*y = %d\n", *y);
    
    int *z = y;
    printf("*z = %d\n", *z);
    
    int *s;
    *s = 2;
    z = s;
    printf("*z = %d\n", *z);
    printf("z = %p\n", z);
    printf("s = %p\n", s);
    
    *z = *y;
    printf("*z = %d\n", *z);
    printf("z = %p\n", z);
    printf("y = %p\n", y);
    
    return 0;
}
