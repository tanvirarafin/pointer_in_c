
// Function pointers

#include<stdio.h>


int add(int a, int b) {return a+b;}
int mul(int a, int b) {return a*b;}

void exec(int (*fun)(int, int)){
    printf("The result is %d\n", fun(5,7));
}

int main(){
    
    int (*func_pt) (int, int);
    func_pt = &add;
    
    printf("The result is %d\n", func_pt(5,7));
    
    exec(add);
    exec(mul);
    return 0;
}
