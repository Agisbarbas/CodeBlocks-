//filename:a2f6.c
#include <stdio.h>
#include "genlib.h"
#include "simpio.h"


int create( int plithos_ep,int table[]);
void find_min_max(int size, int table[],int *min,int *max);

main(){
    int table[100],plithos_ep,min,max;
    printf("Enter the elements of the array, one per line. \n");
    printf("Use -1 to signal the end of the list. ");
    create(plithos_ep,table[100]);
    find_min_max(100,table,&min,&max);
    printf("The range of values is %d - %d",min,max);
}

int create(int plithos_ep,int table[]){

   int x,i;
   plithos_ep=0;
   x=GetInteger();

   while (x!=-1 && x>0){
        table[i]=x;
        plithos_ep++;
        x=GetInteger();
        printf("\n");
    return plithos_ep;

   }
}

void find_min_max(int size, int table[],int *min,int *max){

    int i;
    *min=10*100;
    *max=-2;

    for(i=0;i<size;i++){
        if (*min>table[i])
                *min=table[i];
        if (*max<table[i])
                *max=table[i];

    }
}
