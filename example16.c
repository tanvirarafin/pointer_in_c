
#include <stdio.h>
#include <stdlib.h>

int G = 0;                        /* a global variable, stored in BSS segment */

int main(int argc, char **argv){
       static int s;              /* static local variable, stored in Block start symbol segment */
       int a;                     /* automatic variable, stored on stack */
       int *p;                    /* pointer variable for malloc below */ 
                                  /* obtain a block big enough for one int from the heap */
       p = malloc(sizeof(int));
       
       printf("&G   = %p\n", &G);
       printf("&s   = %p\n", &s);
       printf("&a   = %p\n", &a);
       printf("&p   = %p\n", &p);
       printf("p    = %p\n", p);
       printf("main = %p\n", main);
       
       free(p); 
       return 0;
  }
