// File: a16f2.c

 #include <stdio.h>
 #include "simpio.h"
 #include "genlib.h"

 int main() {

     int plithos_SMS;
     double Sunoliko_poso;

     printf("Dwse to plithos sms: ");
     plithos_SMS=GetInteger();

     if (plithos_SMS<=10)
        Sunoliko_poso=plithos_SMS*0.02;

     else if (plithos_SMS<=60)
        Sunoliko_poso=10*0.2+(plithos_SMS-10)*0.015;

     else if (plithos_SMS<=160)
        Sunoliko_poso=10*0.02+50*0.015+(plithos_SMS-60)*0.012;

     else
        Sunoliko_poso=10.0*0.02+50*0.015+100*0.012+(plithos_SMS-160)*0.01;

     printf("Synoliko poso se euro: %f\n",Sunoliko_poso);


 }
