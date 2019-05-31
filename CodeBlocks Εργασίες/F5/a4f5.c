#include <stdio.h>
#include "genlib.h"
#include "simpio.h"

void SynolikoPoso(int PP[], long TA[], int P[][5]);
void SynolikhPromhtheia(long TA[], float TC[]);
void ProdsCount(int P[][5], int TP[]);
void PrintResults(long TA[], float TC[], int TP[]);


int main()
{
    int ProdPrices[5] = {25000,15000,32000,21000,9200};
    int Prods[4][5] = {10,4,5,6,7,7,0,12,1,3,4,9,5,0,8,3,2,1,5,6};
    int TotalProds[5];
    long TotalAmmount[4];
    float TotalCommission[4];

    SynolikoPoso(ProdPrices,TotalAmmount,Prods);
    SynolikhPromhtheia(TotalAmmount,TotalCommission);
    ProdsCount(Prods,TotalProds);
    PrintResults(TotalAmmount,TotalCommission,TotalProds);
    return 0;
}


void SynolikoPoso(int PP[], long TA[], int P[][5])
{
    int i, j;

    for (i=0; i<4; i++)
    {
        for (j=0; j<5; j++)
            TA[i] += PP[j] * P[i][j];
    }
}


void SynolikhPromhtheia(long TA[], float TC[])
{
    int i, j;

    for (i=0; i<4; i++)
        TC[i] = TA[i] * 0.1;
}


void ProdsCount(int P[][5], int TP[])
{
    int i, j;

    for (i=0; i<4; i++)
    {
        for (j=0; j<5; j++)
            TP[j] += P[i][j];
    }
}

void PrintResults(long TA[], float TC[], int TP[])
{
    int i;

    printf("Synoliko poso eispraksis / pwlhth: ");
    for (i=0; i<4; i++)
        printf("%ld ", TA[i]);
    printf("\n");
    printf("Promhtheia pwlhth: ");
    for (i=0; i<4; i++)
        printf("%.2f ", TC[i]);
    printf("\n");
    printf("Posothtes proiontwn: ");
    for (i=0; i<5; i++)
        printf("%d ", TP[i]);
}
