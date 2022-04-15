
#include <stdio.h>

int main(){
        char c; 
        char* p;

        c = 'A';
        p = &c;
    
        printf("c = %c\n", c);
        printf("p = %p\n", p);
        return 0;
}
