#include <stdio.h>
#include "genlib.h"
#include "simpio.h"

#define ATHLITES 8

main() {

    //������� ��� ������������ ���� ���������� �������� �������
    int kwdikoiAthlitwn[ATHLITES] = {115, 136, 187, 254, 281, 290, 301, 314};

    //������� ��� ������������� �� ���������� �� 3 ����������
    float vathmologiaKolymbi[ATHLITES];
    float vathmologiaPodilato[ATHLITES];
    float vathmologiaTreximo[ATHLITES];

    int i;
    float maxKolymbi, maxPodilato, maxTreximo;
    float avgKolymbi, avgPodilato, avgTreximo;

    //�������� ����������� ���� ��������� ��� �� ������
    printf("EISAGWGI VATHMOLOGIAS ATHLIMATOS 1 - Kolymbi\n");
    for(i=0; i<ATHLITES; i++) {
        printf("Eisagete ti vathmologia tou athliti %d: ", i);
        vathmologiaKolymbi[i] = GetReal();
    }

    printf("EISAGWGI VATHMOLOGIAS ATHLIMATOS 2 - Podilato\n");
    for(i=0; i<ATHLITES; i++) {
        printf("Eisagete ti vathmologia tou athliti %d: ", i);
        vathmologiaPodilato[i] = GetReal();
    }

    printf("EISAGWGI VATHMOLOGIAS ATHLIMATOS 3 - Treximo\n");
    for(i=0; i<ATHLITES; i++) {
        printf("Eisagete ti vathmologia tou athliti %d: ", i);
        vathmologiaTreximo[i] = GetReal();
    }

    //����������� �������� ����������� ���� ���������
    maxKolymbi = vathmologiaKolymbi[0];
    for(i=1; i<ATHLITES; i++)
       if(vathmologiaKolymbi[i] > maxKolymbi)
          maxKolymbi = vathmologiaKolymbi[i];

    maxPodilato = vathmologiaPodilato[0];
    for(i=1; i<ATHLITES; i++)
       if(vathmologiaPodilato[i] > maxPodilato)
          maxPodilato = vathmologiaPodilato[i];

    maxTreximo = vathmologiaTreximo[0];
    for(i=1; i<ATHLITES; i++)
       if(vathmologiaTreximo[i] > maxTreximo)
          maxTreximo = vathmologiaTreximo[i];

    printf("Megistes vathmologies: %.1f (Kol) %.1f (Pod) %.1f (Trex) \n",
            maxKolymbi, maxPodilato, maxTreximo);

    //����������� ����� ���� ����������� ���� ���������
    avgKolymbi = 0;
    for(i=0; i<ATHLITES; i++)
       avgKolymbi += vathmologiaKolymbi[i];
    avgKolymbi /= ATHLITES;

    avgPodilato = 0;
    for(i=0; i<ATHLITES; i++)
       avgPodilato += vathmologiaPodilato[i];
    avgPodilato /= ATHLITES;

    avgTreximo = 0;
    for(i=0; i<ATHLITES; i++)
       avgTreximo += vathmologiaTreximo[i];
    avgTreximo /= ATHLITES;

    printf("Mesoi oroi: %.1f (Kol) %.1f (Pod) %.1f (Trex) \n",
            avgKolymbi, avgPodilato, avgTreximo);

    system("PAUSE");
}
