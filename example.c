
#include <stdio.h>
void foo ()
{
static int i = 0;
printf("%d\n", i); i++;
}

int main(){
    foo();
    foo();
    foo();
}
