/*Τμήμα σχολίων
*--------------
*This program calculates
*The total amount for a sale
*/

//Τμήμα συμπερίληψης βιβλιοθηκών
#include <stdio.h>
#include "simpio.h"
#include "genlib.h"


int main(){
    //Δηλώσεις μεταβλητών
    int rate;
    long purchaseAmount;
    double profit,saleAmount;

    //Φάση εισόδου
    printf("Dwse thn katharh axia: ");
    purchaseAmount = GetLong();
    printf("Dwse to pososto kerdous: ");
    rate=GetInteger();

    //Φάση υπολογισμού
    profit = purchaseAmount * (rate / 100.0);
    saleAmount = purchaseAmount + profit;

    //Φάση εξόδου
    printf("To kerdos einai: %g\n", profit);
    printf("To synoliko poso einai: %g\n",saleAmount);

    system("pause");


}
