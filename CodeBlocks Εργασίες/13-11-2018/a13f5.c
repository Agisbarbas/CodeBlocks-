//a13f5

#include <stdio.h>
#include <math.h>
#include "genlib.h"
#include "simpio.h"


#define m 10
#define n 10


void populate_data(int row, int col,int A[row][col],int grammes, int sthles);
void print_array(int row, int col,int A[row][col],int grammes, int sthles);
void change_array(int row, int col, int A[row][col],int grammes, int sthles);

main(){

    int A[10][10];
    int grammes,sthles;
    printf("Dwse ton aritmo twn grammwn: ");
    grammes = GetInteger();

    printf("\nDwse ton aritmo twn stylwn: ");
    sthles = GetInteger();

    populate_data(m,n,A,grammes,sthles);
    printf("\nARXIKOS PINAKAS\n");

    print_array(m,n,A,grammes,sthles);
    change_array(m,n,A,grammes,sthles);

    printf("ALLAGMENOS PINAKAS\n");
    print_array(m,n,A,grammes,sthles);

    system("PAUSE");
}

void populate_data(int row, int col,int A[row][col], int grammes ,int sthles){

    int i,j;

    for(i=0; i<grammes; i++){
        for(j=0; j<sthles; j++)
            A[i][j]= rand()%100;

    }
}

void print_array(int row, int col,int A[row][col], int grammes ,int sthles){

    int i,j;

    for(i=0; i<grammes; i++){
        for(j=0; j<sthles; j++){
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }

}


void change_array(int row, int col, int A[row][col], int grammes ,int sthles){

    int i,j,max[10];

    for(i=0; i<grammes; i++){
        max[i]=A[i][0];
        for(j=1; j<sthles; j++)
            if(A[i][j]> max[i])
                max[i]=A[i][j];
}

    for(i=0; i<grammes; i++)
        j=0;

    while(max[i]>A[i][j] && j<sthles){
        A[i][j]=max[i];
        j=j+1;
    }
}



