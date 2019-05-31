//a22f4
#include <stdio.h>
#include "genlib.h"
#include "simpio.h"

double Total_Fpa(double cost, int fpa);

int main(){

    int fpa,plithos,i;
    double cost,price,Total_Cost,Sum_Fpa;
   Total_Cost = 0;
   Sum_Fpa=0;

    for(i=1; i<=5; i++){

        printf("Dwse to plithos temaxiwn apo to proion %d: ",i);
        plithos = GetInteger();

        printf("Dwse timi gia to proion %d: ",i);
        price = GetReal();

        printf("Dwse kathgoria FPA gia to proion %d: ",i);
        fpa = GetInteger();

        cost = (plithos*price);
        Total_Cost = (Total_Cost + cost + Total_Fpa(cost,fpa));
        Sum_Fpa=(Sum_Fpa+ Total_Fpa(cost,fpa));
    }

        printf("Synoliko kostos %g\n", Total_Cost);
        printf("Synoliko fpa %g\n", Sum_Fpa);


        return 0;
}

        double Total_Fpa(double  cost, int fpa){

            if(fpa==1)
                return(0);

            else if(fpa==2)
                return(0.06*cost);

            else if(fpa==3)
                return(0.13*cost);

            else if(fpa==4)
                return(0.19*cost);

            else{
                printf("Lathos kathgoria FPA\n");
                return(0);
            }



        }




