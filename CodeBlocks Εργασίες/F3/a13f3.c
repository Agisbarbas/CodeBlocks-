//a13f3

#include <stdio.h>
#include "genlib.h"
#include "simpio.h"

main(){

    int i;
    float sum;

    sum=0;

    for(i=1; i<=100; i++)
        sum=sum + (double)1/i;

    printf("To athroisma einai: %f", sum);

}
