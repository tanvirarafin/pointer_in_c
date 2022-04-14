
#include<stdio.h>
#include<stdlib.h>

void cstrcpy(char *t, char *s){
    while(*s != '0'){
        *t = *s;
        s++;
        t++;
    }
}

int main(){
    char *pm1 = "Hello";
    char *pm2 = (char*)malloc(6*sizeof(char)); 
    
    
    cstrcpy(pm2, pm1);
    
    printf("The original data = %s\n", pm1);
    printf("The copied data = %s\n", pm2);
    
    free(pm2);
    
    return 0;
}
