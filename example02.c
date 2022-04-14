
#include <stdio.h>

int main(){
        char c; 
        char* p;
        char** q;

        c = 'A';
        p = &c;
        q = &p;
    
        printf("c = %c\n", c);
        printf("p = %p\n", p);
        printf("q = %p\n", q);
        return 0;
}
