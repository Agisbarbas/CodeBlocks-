//Τμήμα συμπερίληψης βιβλιοθηκών
#include <stdio.h>
#include "simpio.h"
#include "genlib.h"


int main(){

    //Δηλώσεις μεταβλητών
    int HmeresErgasias;
    long HmerhsiaAmoibh;
    double PosostoDwroy,FinalDwro;

    //Φάση εισόδου
    printf("Dwse tis hmeres ergawsia tou etous: ");
    HmeresErgasias = GetInteger();
    printf("Dwse thn hmerhsia amoibh: ");
    HmerhsiaAmoibh = GetLong();
    printf("Dwse to pososto dwroy: ");
    PosostoDwroy = GetReal();

    //Φάση υπολογισμού
    FinalDwro = HmeresErgasias * HmerhsiaAmoibh * PosostoDwroy;

    //Φάση εξόδου
    printf("To dwro einai %g\n",FinalDwro);


}
