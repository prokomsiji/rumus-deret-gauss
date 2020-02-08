#include <stdio.h>
int main (){
    printf("RUMUS DERET GAUSS GANJIL\n");
    printf("1+2+3+4+5+...+n(ganjil)=...\n");
    int A,B;
    printf("masukan angka yang diinginkan   : ");
    scanf("%i",&A);
    B=(A+1)/2*A;
    printf("hasinya adalah: %i\n",B);
    printf("\n");
    printf("RUMUS DERET GAUSS GENAP\n");
    printf("1+2+3+4+5+...+n(genap)=...\n");
    int C,D;
    printf("masukan angka yang diinginkan   : ");
    scanf("%i",&C);
    D=(C/2)*(C+1);
    printf("hasinya adalah: %i",D);
    }
