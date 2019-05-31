/* File: a7f2.c
 *-------------
 * This program calculates the weekly salary
 */

 #include <stdio.h>
 #include "simpio.h"
 #include "genlib.h"

 int main() {

     long code;
     double weekly_amount,salary,wage;
     int hours;

     printf("Dwse ton kwdiko: ");
     code= GetLong();

     if (code>=1000){
        printf("dwse ton ethsio mistho: ");
        salary=GetReal();
        weekly_amount=salary/52;
     }

    else{
        printf("Dwse thn wres ebdomadies ergasias: ");
        hours=GetInteger();
        printf("Dwse thn amoibh ana wra: ");
        wage=GetReal();

        if (hours>40){
            weekly_amount = 40 * wage+ (hours - 40)* 1.5 *wage;
        }

     else{
        weekly_amount=hours*wage;
     }
}

printf("H endomadiaia amoivi einai %.2f\n",weekly_amount);



     return 0;




 }
