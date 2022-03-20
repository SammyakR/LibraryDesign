
#include "text.h"
#define SQUARE(x)  (x*x)

int main(){
    int a = SQUARE(5);
    int area = PI * SQUARE(5);

return 0;
}


/*
    preprocessing with 
    
    $ gcc -E text.c -o text2.c

    will show the substituted text
*/


/* 
    compiling with 
    $ gcc -S text2.c -o text.s

    will show the assembly code
*/

/*
    assembling with
    $ gcc -c text.s -o text.o

    will show the machine code
*/



