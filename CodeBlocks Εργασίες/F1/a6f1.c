//����� ������������ �����������
#include <stdio.h>
#include "simpio.h"
#include "genlib.h"


int main(){

    //�������� ����������
    int HmeresErgasias;
    long HmerhsiaAmoibh;
    double PosostoDwroy,FinalDwro;

    //���� �������
    printf("Dwse tis hmeres ergawsia tou etous: ");
    HmeresErgasias = GetInteger();
    printf("Dwse thn hmerhsia amoibh: ");
    HmerhsiaAmoibh = GetLong();
    printf("Dwse to pososto dwroy: ");
    PosostoDwroy = GetReal();

    //���� �����������
    FinalDwro = HmeresErgasias * HmerhsiaAmoibh * PosostoDwroy;

    //���� ������
    printf("To dwro einai %g\n",FinalDwro);


}
