
#include<stdio.h>

int main(){
    char *months[] = {"January", "February", "March"};
    
    printf("Content of months[0] = %p\n", months[0]);
    printf("Content of months[1] = %p\n", months[1]);
    printf("Content of months[2] = %p\n", months[2]);
    
    printf("Data pointed by months[0], months[1], months[2] = %s, %s, %s\n", 
           months[0], months[1], months[2]);
    
    return 0;
}
