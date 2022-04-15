
#include<stdio.h>
#include<stdlib.h>

void increment(int *i){
    (*i) = (*i) + 1;
}

int main(int argc, char *argv[]){
    int i = atoi(argv[1]);
    increment(&i);
    printf("i = %d\n", i);
    return 0;
}
