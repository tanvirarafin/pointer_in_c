
#include<stdio.h>

int main(){        
        int *ip; 
        int  x = 10;
        ip = &x;

        printf ("*ip = %d\n", *ip);
       
        ++*ip; 
        *ip = *ip*4-2;
        
        printf ("x = %d\n", x);
    
return 0;
}
