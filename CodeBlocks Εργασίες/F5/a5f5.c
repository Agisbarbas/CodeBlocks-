#include <stdio.h>
#include "genlib.h"
#include "simpio.h"

void Read_A(long A[][100], int M, int N);
long SumDiag1(long A[][100], int M, int N);
long SumDiag2(long A[][100], int M, int N);
void SumRow(long A[][100], long SR[], int M, int N);
void SumCol(long A[][100], long SC[], int M, int N);
void PrintResult(long A[][100], long SR[], long SC[], int M, int N);

int main()
{
    int M, N;
    long A[100][100], Sum_Row[100], Sum_Col[100];

    printf("Dwse arithmo grammwn: ");
    M = GetInteger();
    printf("Dwse arithmo sthlwn: ");
    N = GetInteger();
    Read_A(A,M,N);
    SumRow(A,Sum_Row,M,N);
    SumCol(A,Sum_Col,M,N);
    printf("\n");
    PrintResult(A,Sum_Row,Sum_Col,M,N);
    if (M==N)
    {
        printf("\n");
        long SumDiag1(A,M,N);
        long SumDiag2(A,M,N);
        printf("\nSum Diag1: %ld Diag2: %ld", SumDiag1(A, M, N), SumDiag2(A, M, N));
    }
    return 0;
}

void Read_A(long A[][100], int M, int N)
{
    int i, j;

    for (i=0; i<M; i++)
    {
        for (j=0; j<N; j++)
        {
            printf("Thesi [%d,%d]: ", i, j);
            A[i][j] = GetLong();
        }
    }

}


long SumDiag1(long A[][100], int M, int N)
{
    long Sd1;
    int i, j;

    Sd1 = 0;
    for (i=0; i<M; i++)
    {
        for (j=0; j<N; j++)
        {
            if (i==j) Sd1 += A[i][j];
        }
    }
    return Sd1;
}


long SumDiag2(long A[][100], int M, int N)
{
    int i, j;
    long Sd2;

    Sd2 = 0;
    for (i=0; i<M; i++)
    {
        for (j=0; j<N; j++)
            if (i+j==N-1) Sd2 += A[i][j];
    }
    return Sd2;
}


void SumRow(long A[][100], long SR[], int M, int N)
{
    int i, j;

    for (i=0; i<M; i++)
    {
        for (j=0; j<N; j++)
            SR[i] += A[i][j];
    }
}


void SumCol(long A[][100], long SC[], int M, int N)
{
    int i, j;

    for (j=0; j<N; j++)
    {
        for (i=0; i<M; i++)
            SC[j] += A[i][j];
    }
}


void PrintResult(long A[][100], long SR[], long SC[], int M, int N)
{
    int i, j;

    for (i=0; i<M; i++)
    {
        for (j=0; j<N; j++)
        {
            printf("%4ld", A[i][j]);
        }
        printf("| = %4ld\n", SR[i]);
    }
    for (j=0; j<(4*N); j++) printf("_");
    printf("\n");
    for (j=0; j<N; j++) printf("%4ld", SC[j]);
}
