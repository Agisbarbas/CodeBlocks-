//a20f3

#include <stdio.h>
#include "genlib.h"
#include "simpio.h"

main(){

    int max,min,ilikia;

    max=-10000;
    min=10000;

    do{
        printf("Dwse ilikia: ");
        ilikia=GetInteger();

        if (ilikia>max)
            max=ilikia;

        if (ilikia!=-1)
            if (ilikia<min)
                min=ilikia;
            }

    while(ilikia!=-1);
    printf("H megalyterh ilikia einai: %d\n", max);
    printf("H mikroterh ilikia einai: %d", min);
}
