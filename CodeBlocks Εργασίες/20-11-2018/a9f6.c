#include <stdio.h>
#include "genlib.h"
#include "simpio.h"

#define SALESMEN 4
#define PRODUCTS 5

void calculatesales(int s,int p,int salestable[s][p],int price[],int sp[]);
void calculateproductsales(int s, int p, int salestable[s][p],int prods[]);
void maxarray(int size,int table[],int *max,int *pos);
void printarray(int size,int table[]);

main(){

    int sales[SALESMEN][PRODUCTS]={
        {10,4,5,6,7},
        {7,0,12,1,3},
        {4,19,5,0,8},
        {3,2,1,5,6}};
    int price[]={250,150,320,210,920};
    int salesperson[SALESMEN];
    int productsale[SALESMEN];
    int maxsalesman,maxproduct,income,items;

    calculatesales(SALESMEN,PRODUCTS,sales,price,salesperson);
    calculateproductsales(SALESMEN,PRODUCTS,sales,productsale);
    maxarray(SALESMEN,salesperson,&income,&maxsalesman);
    maxarray(PRODUCTS,productsale,&items,&maxproduct);

    printf("salesman-sales \n");
    printarray(SALESMEN,salesperson);

    printf("Best salesman was %d with %d sales \n",maxsalesman,income);
    printf("product-items \n");
    printarray(PRODUCTS,productsale);

    printf("Best product was %d with %d items \n",maxproduct,items);
}


void calculatesales(int s,int p,int salestable[s][p],int price[],int sp[]){
    int i,j;
    for(i=0;i<s;i++){
            sp[i]=0;
            for (j=0;j<p;j++){
                    sp[i]+=salestable[i][j]*price[j];

            }
    }
}

void calculateproductsales(int s, int p, int salestable[s][p],int prods[]){
    int i,j;
    for (i=0;i<p;i++){
            prods[i]=0;
            for (j=0;j<s;j++){
                    prods[i]+=salestable[j][i];

            }

    }

}


void maxarray(int size,int table[],int *pmax,int *ppos){


   int i;
   int max;
   int pos;
   max=table[0];
   pos=0;

   for(i=1;i<size;i++){
        if (table[i]>max){
            max=table[i];
            pos=i;
        }
    }

    *pmax=max;
    *ppos=pos;

}

void printarray(int size,int table[]){

    int i;
    for(i=0;i<size;i++)
        printf("  %d    %d  \n ",i,table[i]);

}

