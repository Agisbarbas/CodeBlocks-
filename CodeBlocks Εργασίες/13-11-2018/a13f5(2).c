//a13f5

#include <stdio.h>
#include <math.h>
#include "genlib.h"
#include "simpio.h"


#define m 10
#define n 10


void populate_data(int row, int col,int A[row][col],int gr, int st);
void print_array(int row, int col,int A[row][col],int gr, int st);
void change_array(int row, int col, int A[row][col],int gr, int st);
main(){

    int A[10][10],gr,st;

    printf("Dwse aritmo twn grammwn: ");
    gr = GetInteger();

    printf("\n Dwse aritmo twn stylwn: ");
    st = GetInteger();

    populate_data(m,n,A,gr,st);
    printf("ARXIKOS PINAKAS\n");

    print_array(m,n,A,gr,st);
    change_array(m,n,A,gr,st);

    printf("ALLAGMENOS PINAKAS\n");
    print_array(m,n,A,gr,st);

    system("PAUSE");
}

void populate_data(int row, int col,int A[row][col], int gr ,int st){

    int i,j;

    for(i=0; i<gr; i++){
        for(j=0; j<st; j++)
            A[i][j]= rand()%100;

    }
}

void print_array(int row, int col,int A[row][col], int gr ,int st){

    int i,j;

    for(i=0; i<gr; i++){
        for(j=0; j<st; j++){
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }

}


void change_array(int row, int col, int A[row][col], int gr ,int st){

    int i,j,max[10];

    for(i=0; i<gr; i++){
        max[i]=A[i][0];
        for(j=1; j<st; j++)
            if(A[i][j]> max[i])
                max[i]=A[i][j];
}

    for(i=0; i<gr; i++)
        j=0;

    while(max[i]>A[i][j] && j<st){
        A[i][j]=max[i];
        j=j+1;
    }
}



