//a13f6.c

#include <stdio.h>
#include "genlib.h"
#include "simpio.h"

void number(long num , int *plithos_psifiwn , double *Meso_oro , int *Megisto);

int main(){

    int plithos_psifiwn,Megisto;
    long num;
    double Meso_oro;

    printf("Please insert non-negative number: ");
    num = GetLong();

    number(num,&plithos_psifiwn,&Meso_oro,&Megisto);
    printf("Digits: %d, Average: %g , Max: %d ",plithos_psifiwn , Meso_oro, Megisto);

    return 0;
}

void number(long num , int *plithos_psifiwn , double *Meso_oro , int *Megisto){

    int sum,z;

    sum=0;
    *plithos_psifiwn=0;
    *Megisto=-1;

    while(num/10!=0){
        z=num%10;
        num=num/10;
        *plithos_psifiwn=*plithos_psifiwn+1;
        if(z>*Megisto)
            *Megisto=z;
        sum=sum+z;
   }

   *plithos_psifiwn=*plithos_psifiwn+1;

    if(num>*Megisto)
        *Megisto=num;

    sum=sum+num;


   *Meso_oro= sum/(double) *plithos_psifiwn ;

}
