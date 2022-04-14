
#include<stdio.h>

int cstrlen(char *s){
    char *p = s;
    while(*++p){
        ;
    }
    return p - s;
}

int main(){
    char *pm = "Hello";
    
    printf("Length of the string = %d\n", cstrlen(pm));
    
    
    return 0;
}
