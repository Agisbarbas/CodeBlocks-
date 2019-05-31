/* Filename: a22f4.c
*/

#include <stdio.h>
#include "genlib.h"
#include "simpio.h"

double total(double cost, int fpa);


int main()
{
   int plithos,fpa,i;
double price,total_cost,cost,sum_fpa;
   total_cost = 0;
   sum_fpa=0;
    for(i=1; i<=5; i++)
   {
       printf("Dwse to plithos temaxiwn apo to proion:%d\n ",i);
       plithos = GetInteger();
       printf("Dwse timi gia to proion %d\n",i);
       price = GetReal();
       printf("Dwse kathgoria FPA gia to proion %d\n",i);
       fpa = GetInteger();
       cost = (plithos*price);
       total_cost = (total_cost + cost + total(cost,fpa));
       sum_fpa=(sum_fpa+ total(cost,fpa));
   }

   printf("Synoliko kostos %g\n", total_cost);
   printf("Synoliko fpa %g\n", sum_fpa);


    return 0;

}


       double total(double  cost, int fpa)
        {
            if(fpa==1)
            {
                return(0);
            }
            else if(fpa==2)
            {
                return(0.06*cost);

            }
            else if(fpa==3)
            {
                return(0.13*cost);
            }
            else if(fpa==4)
            {
                return(0.19*cost);
            }
            else
            {
                printf("Lathos kwdikos");
                return(0);
            }


        }




