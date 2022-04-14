
#include<stdio.h>

int main(int argc, char* argv[]){
            
            printf("Total number of arguments = %d\n", argc);
            
            while(--argc > 0)
                printf("%s%s", *++argv, (argc > 1)? " " :"");
    
            return 0;
}
