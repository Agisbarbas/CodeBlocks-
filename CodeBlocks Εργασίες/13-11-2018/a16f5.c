//a16f5

#include <stdio.h>
#include "genlib.h"
#include "simpio.h"

int checkTable(int N,  int f[] ,int a[]);

int main (){

    int a[50],i, f[50],N,times;

    for (i=0; i<50; i++)
        a[i] = rand()%10;

    for (i=0; i<50; i++)
        printf(" %d" , a[i]);

    printf("\n----------------\n");

    printf("Dwse aritmo apo to 0 ews to 9: ");
    N = GetInteger();

    times = checkTable(N,f ,a);
    printf("\n O aritmos %d emfanizetai %d times", N, times);

    if(times!=0){
        printf("\n");
        printf("Stis Thesis:\n");

        for (i=0; i<times; i++)
            printf(" %d ", f[i]);
 }

return 0;

}


int checkTable(int N, int f[], int a[]){

    int i,times;
    times=0;
    for (i=0; i<50; i++){
        if(N==a[i]){
            times=times+1;
            f[times-1]=i;
        }
    }
    return(times);
}

