//a1bf3

#include <stdio.h>
#include "simpio.h"
#include "genlib.h"
#include <math.h>

main(){

    long years,cars,LIMIT;
    double RATE;


    years = 0;

    printf("Dwse ton arxiko arithmo autokinhtwn: ");
    cars=GetLong();

    printf("Dwse ton ethsio rythmo ayxshs: ");
    RATE=GetReal();

    printf("Dwse to orio: ");
    LIMIT=GetLong();


while(cars <= LIMIT){

        cars = ceil(cars * (1+RATE) );
        years++;

    }

    printf("After %d years \n", years);
    printf("the cars will be %ld\n", cars);

    system("PAUSE");

}
