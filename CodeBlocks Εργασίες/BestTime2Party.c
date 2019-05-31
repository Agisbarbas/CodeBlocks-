//BestTime2Party.c

#include <stdio.h>
#include "genlib.h"

#define M 15
#define N 7

int main(){

    int A[M][N] = {{1, 1, 0, 0, 0, 0, 0},
                   {0, 1, 1, 1, 0, 0, 0},
                   {0, 0, 0, 0, 1, 1, 1},
                   {0, 0, 1, 1, 1, 0, 0},
                   {0, 0, 0, 0, 1, 1, 0},
                   {0, 0, 0, 0, 0, 1, 1},
                   {0, 0, 1, 1, 1, 0, 0},
                   {0, 0, 0, 1, 1, 1, 0},
                   {0, 1, 1, 1, 1, 0, 0},
                   {0, 0, 1, 1, 1, 1, 0},
                   {1, 1, 1, 1, 0, 0, 0},
                   {0, 1, 1, 0, 0, 0, 0},
                   {0, 0, 1, 1, 0, 0, 0},
                   {0, 0, 0, 0, 1, 1, 1},
                   {0, 1, 1, 1, 1, 1, 0}};

    int i, j;
    int SUM[N-1];
    int max_Diasimotites, max_P;

    for (j=0; j<6; j++)
        SUM[j] = 0;

    for (j=0; j<N; j++){

        for (i=0; i<M; i++){

            if (A[i][j]==1 || A[i][j+1]==1)
                SUM[j]++;
        }
    }

    max_Diasimotites = SUM[0];
    max_P = 0;

    for (i=1; i<6; i++){

        if (max_Diasimotites<SUM[i]){
            max_Diasimotites = SUM[i];
            max_P = i;
        }
    }

    switch(max_P){

        case 0:
                printf("H kaluterh wra gia na paei o Stathis sto xmas bazaar prokeimenou na fwtografithei me oses perissoteres diasimotites \n einai apo tis 18:00 mexri tis 19:00");
                printf("\n Kai o Stathis tha prolabei na dei %d diasimothtes.", max_Diasimotites);
                break;
        case 1:
                printf("H kaluterh wra gia na paei o Stathis sto xmas bazaar prokeimenou na fwtografithei me oses perissoteres diasimotites \n einai apo tis 19:00 mexri tis 20:00.");
                printf("\n Kai o Stathis tha prolabei na dei %d diasimothtes.", max_Diasimotites);
                break;
        case 2:
                printf("H kaluterh wra gia na paei o Stathis sto xmas bazaar prokeimenou na fwtografithei me oses perissoteres diasimotites \n einai apo tis 20:00 mexri tis 21:00.");
                printf("\n Kai o Stathis tha prolabei na dei %d diasimothtes.", max_Diasimotites);
                break;
        case 3:
                printf("H kaluterh wra gia na paei o Stathis sto xmas bazaar prokeimenou na fwtografithei me oses perissoteres diasimotites \n einai apo tis 21:00 mexri tis 22:00.");
                printf("\n Kai o Stathis tha prolabei na dei %d diasimothtes.", max_Diasimotites);
                break;
        case 4:
                printf("H kaluterh wra gia na paei o Stathis sto xmas bazaar prokeimenou na fwtografithei me oses perissoteres diasimotites \n einai apo tis 22:00 mexri tis 23:00.");
                printf("\n Kai o Stathis tha prolabei na dei %d diasimothtes.", max_Diasimotites);
                break;
        case 5:
                printf("H kaluterh wra gia na paei o Stathis sto xmas bazaar prokeimenou na fwtografithei me oses perissoteres diasimotites \n einai apo tis 23:00 mexri tis 24:00.");
                printf("\n Kai o Stathis tha prolabei na dei %d diasimothtes.", max_Diasimotites);
                break;
    }
    return 0;
}
