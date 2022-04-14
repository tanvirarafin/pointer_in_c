
#include<stdio.h>

int main(){
    int  a[5] = {3, 6, 9, 12, 15}; 
    int  *pa; int  *qa;

    pa = &a[0];
    qa = &a[2];

    printf(" qa-pa = %ld\n", qa-pa);
    printf(" qa>=pa? = %d\n", qa >= pa);
    printf(" qa==0? = %d\n", qa == 0);
    return 0;
}
