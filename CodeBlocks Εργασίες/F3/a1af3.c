//a1af3

#include <stdio.h>
#include "simpio.h"
#include "genlib.h"
#include <math.h>

#define CARS 80000
#define RATE 0.07
#define LIMIT 160000

main(){

    long years;
    long cars;

    cars = CARS;
    years = 0;

    while(cars <= LIMIT){

        cars = ceil(cars * (1+RATE) );
        years++;

    }

    printf("After %d years \n", years);
    printf("the cars will be %ld\n", cars);

    system("PAUSE");
}
