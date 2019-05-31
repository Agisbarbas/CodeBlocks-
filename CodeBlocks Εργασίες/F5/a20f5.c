#include <stdio.h>
#include "genlib.h"
#include "simpio.h"

void ReadTable(int A[]);

int main()
{
    int table[5];

    ReadTable(table);
    printf("%d %d %d %d %d", table[1], table[2], table[3], table[4], table[0]);

    return 0;


}


void ReadTable(int A[])
{
    int i;

    for (i=0; i<5; i++)
        {
            printf("Enter number: ");
            A[i] = GetInteger();
        }
}

