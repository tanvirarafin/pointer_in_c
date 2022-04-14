
#include<stdio.h>

void increment(int i){
    i = i+1;
    printf("Address of variable i in the increment function %p\n", &i);
}

int main(){
    int  i = 10;
    increment(i);
    printf("Address of variable i in the main function      %p\n", &i);
    return 0;
}
