// File: a7f2.c

 #include <stdio.h>
 #include "simpio.h"
 #include "genlib.h"

 int main() {

     int Kwdikos_Proiontos,Arithmos_Temaxiwn,Timh,x;
     double Ekptwsh,Telikh_timh,y;

     printf("Dwse ton kwdiko tou proiontos: ");
     Kwdikos_Proiontos = GetInteger();

     printf("Dwse ton arithmo twn temaxiwn: ");
     Arithmos_Temaxiwn = GetInteger();

     x=Kwdikos_Proiontos/100;
     y=((double)Kwdikos_Proiontos/100-x)*100;
     Timh=x+y;

     printf("H timh pwlhshs toy proiontos einai %d\n",Timh);



     if (Arithmos_Temaxiwn >=1 && Arithmos_Temaxiwn <=30)
            Ekptwsh=(10.0/100)*((double)Timh)*Arithmos_Temaxiwn;


     if (Arithmos_Temaxiwn >=31 && Arithmos_Temaxiwn<=70)
            Ekptwsh=(20.0/100)*((double)Timh)*Arithmos_Temaxiwn;


     if (Arithmos_Temaxiwn >=71)
            Ekptwsh=(35.0/100)*((double)Timh)*Arithmos_Temaxiwn;





     printf("H ekptwsh einai %g\n",Ekptwsh);

     Telikh_timh = Timh * Arithmos_Temaxiwn - Ekptwsh;

     printf("H telikh timh ths pragelias einai %g\n",Telikh_timh);








 }
