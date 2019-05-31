//Τμήμα συμπερίληψης βιβλιοθηκών
#include <stdio.h>
#include "simpio.h"
#include "genlib.h"

int main(){

    //Δηλώσεις μεταβλητών
    double DT,DF,FinalDT,FinalDF;

    //Φάση εισόδου
    printf("Dwse ta ka8ara tm tou spitiou? ");
    DT = GetReal();
    printf("Dwse ta mikta tm tou spitiou? ");
    DF = GetReal();

    //Φάση υπολογισμού
    FinalDT = DT * 1.33 *(61/365.0);
    FinalDF = DF * 0.13 *(61/365.0);


    //Φάση εξόδου
    printf("Ta DT einai: %g\n",FinalDT);
    printf("O DF einai: %g\n", FinalDF);

}




