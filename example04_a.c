
#include<stdio.h>

void increment(int i){
    i = i+1;
}

int main(){
    int  i = 10;
    increment(i);
    printf("i = %d\n",i);
    
    return 0;
}
