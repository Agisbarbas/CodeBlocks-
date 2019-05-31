//a10f3

#include <stdio.h>
#include "genlib.h"
#include "simpio.h"

main(){

    int i,x,y;

    for(i=1; i<=10; i+=1){
        printf("%d", i);

        for(y=1; y<=10; y+=1){
            x=i*y;
            printf("%4d", x);
        }
        printf("\n");
    }
}
