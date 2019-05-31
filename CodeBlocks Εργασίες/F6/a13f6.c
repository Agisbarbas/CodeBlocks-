#include <stdio.h>
#include <math.h>
#include "genlib.h"
#include "simpio.h"

#define M 10
#define N 10

void populate_data(int rows, int cols, int A[rows][cols]);
void print_array(int rows, int cols, int A[rows][cols]);
void change_array(int rows, int cols, int A[rows][cols]);

int main()
{
    int R , C ,A[M][N];

    printf("Dwse airthmo grammwn: ");
    R = GetInteger();
    printF("Dwse arithmo sthlwn: ");
    C = GetInteger();
    populate_data(R, C, A);
    print_array(R, C, A);


}

void populate_data(int rows, int cols, int A[rows][cols])
{

    int i, j;

    for (i=0; i<rows; i++)
        for (j=0; j<cols; j++)
            A[i][j] = rand();


}

void print_array (int rows, int cols, int A[rows][cols])
{
    int i, j;

    printf("Arxikos Pinakas\n");
    for (i=0; i<rows; i++){
        for (j=0; j<cols; i++)
            printf("%d ", A[i][j]);

        printf("\n");
    }

}

void change_array(int rows, int cols, int A[rows][cols]);
{

    for (i=0; i)

}
