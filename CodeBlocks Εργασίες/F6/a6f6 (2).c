//filename:a6f6.c

#include <stdio.h>
#include <stdlib.h>
#include "genlib.h"
#include "simpio.h"

#define N 15

void readData(int size, int A[size][4]);
void FindMean(int size, int A[size][4], int index, double MO[2][3]);

int main(){

    int n, i, j, *A;
    double MO[2][3];

    printf("Dwse to plithos ton epanalipsewn: ");
    n = GetInteger();
    A = (int *)malloc(n*sizeof(int));
    readData(n, A);

    for (i=0; i<2; i++){
        for (j=0; j<3; j++)
            MO[i][j] = 0;
    }
    for (j=1; j<4; j++)
        FindMean(n, A, j, MO);

    printf("Mesos oros barous andrwn: %g\n", MO[0][0]);
    printf("Mesos oros barous gynaikwn: %g\n", MO[1][0]);
    printf("\n");
    printf("Mesos oros ypsous andrwn: %g\n", MO[0][1]);
    printf("Mesos oros yspous gynaikwn: %g\n", MO[1][1]);
    printf("\n");
    printf("Mesos oros hlikias andrwn: %g\n", MO[0][2]);
    printf("Mesos oros hlikias gynaikwn: %g\n", MO[1][2]);

    system("PAUSE");
}

void readData(int size, int A[size][4]){

    int i;

    for (i=0; i<size; i++){

        printf("Dwse fylo: ");
        A[i][1] = GetInteger();

        printf("Dwse baros: ");
        A[i][2] = GetInteger();

        printf("Dwse ypsos: ");
        A[i][3] = GetInteger();

        printf("Dwse ilikia: ");
        A[i][4] = GetInteger();

        printf("-----\n");
    }
}

void FindMean(int size, int A[size][4], int index, double MO[2][3]){

    int i, sum0, sum1, men, women;

    men = 0;
    women = 0;
    sum0 = 0;
    sum1 = 0;

    for (i=0; i<size; i++){
        if (A[i][0] == 0){
            sum0 += A[i][index];
            men++;
        }
        else{
            sum1 += A[i][index];
            women++;
        }
    }

    MO[0][index-1] = sum0/men;
    MO[1][index-1] + sum1/women;
}
