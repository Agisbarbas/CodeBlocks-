//a5f5

#include <stdio.h>
#define Rows 10
#define Columns 10

int main(){

    int A[Rows][Columns];
    int i, j;
    int Ro, Co, sum;


    printf("Dwse ton arithmo twn grammwn: ");
    scanf("%d",&Ro);

    printf("Dwse ton arithmo twn sthlwn: ");
    scanf("%d",&Co);

    printf("\nDwse Tis Thesis :\n");

    for(i=0; i<Ro; i++)

        for(j=0; j<Co; j++)
        {
            printf("Dwse Thesi [%d,%d] : ",i+1,j+1);
            scanf("%d",&A[i][j]);
        }

    sum = 0;

    if(Ro==Co)

        for(i=0; i<Co; i++){
            sum = sum + A[i][i];

            for(j=0; j<Ro; j++){

                if(i==j)
                    printf("Diagonios: %d\n", sum);
                else
                    printf("\n");
            }
        }

    else
        printf("\n A is not a Square A");

    return 0;
}
