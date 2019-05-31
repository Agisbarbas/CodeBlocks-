//a11f5

#include <stdio.h>
#include <math.h>
#include "genlib.h"
#include "simpio.h"

#define m 10
#define n 3

//πρωτότυπα συναρτήσεων
void ReadData(int rows, int cols, double temper[rows][cols]);
double calculateNatAvg(int rows, int cols, double temper[rows][cols]);
void calculatecityAvg(int rows, int cols, double temper[rows][cols] , double average[rows]);\
void calculateDeviations(int rows, int cols, double temper[rows][cols],double natavg,double devnat[rows][cols]);
void calculateMaxDeviation(int rows, int cols, double temper[rows][cols],double mdeviation[rows],double devnat[rows][cols]);
void printResults(int rows,double natavg, double average[rows],double mdeviation[rows]);

main()
{
   // Δίνονται Αρχικές τιμές στον Πίνακα για εύκολο έλεγχο
    double temper[m][n] =       {   10,20,30,
                                    40,50,60,
                                    70,80,90,
                                    10,20,30,
                                    40,50,60,
                                    70,80,90,
                                    10,20,30,
                                    40,50,60,
                                    70,80,90,
                                    00,00,00};
    double devnat[m][n];
    double average[m], mdeviation[m];
    double natavg;
    int i, j, choice;

	printf("Would you like to read temp data or use default? (1-read, 2-use Default): ");
    while(TRUE){
        choice = GetInteger();
        if (choice == 1)
           {
                ReadData(m, n, temper); //κλήση της σηνάρτησης
                break;
            }
        else if (choice == 2) {break;}
        printf("Please enter a valid choice! \n (1-read, 2 - use Default): ");
    }

        natavg = calculateNatAvg(m, n, temper);

        calculatecityAvg(m, n, temper, average);

        calculateDeviations(m, n, temper, natavg, devnat);

        calculateMaxDeviation(m,n,temper,mdeviation,devnat);

        printResults(m,natavg,average , mdeviation);


}

//ορισμοί συναρτήσεων
void ReadData(int rows, int cols, double temper[rows][cols]){

    int i, j;

    /* Reading the temp Table */
    for (i=0; i<rows; i++)
        for (j=0; j<cols; j++)
        {
            printf("Temp of City %d During %d 8-hour period: ",i,j);
            temper[i][j] = GetReal();

            }
            /* End reading the table */
}

double calculateNatAvg(int rows, int cols, double temper[rows][cols]){

/*Calculating The Average of all Cities&Temps*/
    int i, j;
    double natavg;

    natavg = 0;
    for (i=0; i<rows; i++)
      for (j=0; j<cols; j+=1)
         natavg += temper[i][j];
    natavg = natavg/(rows*cols);

return natavg;



}

void calculatecityAvg(int rows, int cols, double temper[rows][cols] , double average[rows]){

    int i,j;

    for (i=0; i<rows; i++)
    {
        average[i] = 0;
        for (j=0; j<cols; j++)
        {
            average[i] += temper[i][j];
        }
        average[i] = average[i]/cols;
    }



}

void calculateDeviations(int rows, int cols, double temper[rows][cols],double natavg,double devnat[rows][cols]){

    int i,j;

    for (i=0; i<rows; i++)
        for (j=0; j<cols; j++)
            devnat[i][j] = fabs(natavg-temper[i][j]);


}

void calculateMaxDeviation(int rows, int cols, double temper[rows][cols],double mdeviation[rows],double devnat[rows][cols]){

    int i,j;

    for (i=0; i<rows; i++)
    {
        mdeviation[i] = devnat[i][0];
        for(j=1; j<cols; j++)
            if (mdeviation[i]<devnat[i][j]) mdeviation[i] = devnat[i][j];
    }


}

void printResults(int rows, double natavg, double average[rows],double mdeviation[rows]){

    int i;

    printf("National Average: %3.1f\n", natavg);
    for (i=0; i<rows; i+=1)
		printf("City %d  Average: %.1lf  Max Deviation: %.1lf\n",i, average[i], mdeviation[i]);

}



