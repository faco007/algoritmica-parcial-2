#include <stdio.h>
#include <conio.h>
int main(){
    float cal1, cal2, cal3, prom;

    printf("Dame tu primer calificacion: ");
    scanf("%f", &cal1);
    printf("Dame tu segunda calificacion: ");
    scanf("%f", &cal2);
    printf("Dame tu tercer calificacion: ");
    scanf("%f", &cal3);
    prom = (cal1 + cal2 + cal3)/3;

        if(prom<6){
            printf("Estas reprobado.");
        } else {
            printf("Estas aprobado");
        }

}
