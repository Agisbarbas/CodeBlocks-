/*����� �������
*--------------
*This program calculates
*The total amount for a sale
*/

//����� ������������ �����������
#include <stdio.h>
#include "simpio.h"
#include "genlib.h"


int main(){
    //�������� ����������
    int rate;
    long purchaseAmount;
    double profit,saleAmount;

    //���� �������
    printf("Dwse thn katharh axia: ");
    purchaseAmount = GetLong();
    printf("Dwse to pososto kerdous: ");
    rate=GetInteger();

    //���� �����������
    profit = purchaseAmount * (rate / 100.0);
    saleAmount = purchaseAmount + profit;

    //���� ������
    printf("To kerdos einai: %g\n", profit);
    printf("To synoliko poso einai: %g\n",saleAmount);

    system("pause");


}
