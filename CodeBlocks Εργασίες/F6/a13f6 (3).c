//a13f6.c

#include <stdio.h>
#include "genlib.h"
#include "simpio.h"

void number(long num , int *digits , double *average , int *max);

int main(){

    int digits,max;
    long num;
    double average;

    printf("Please insert non-negative number: ");
    num = GetLong();

    number(num,&digits,&average,&max);
    printf("Digits: %d, Average: %.3f , Max: %d ",digits , average, max);

    return 0;
}

void number(long num , int *digits , double *average , int *max){

    int sum;
    int z;

    sum=0;
    *digits=0;
    *max=-1;

    while(num/10!=0){
        z=num%10;
        num=num/10;
        *digits=*digits+1;
        if(z>*max)
            *max=z;
        sum=sum+z;
    }

    *digits=*digits+1;

    if(num>*max)
        *max=num;

    sum=sum+num;

    *average= sum/(double) *digits ;

}
