#include <stdio.h>
int main(){

    double num,sum=0,prod=1;

    printf("Dame un numero diferente al cero: ");
    scanf("%lf", &num);

        while(num != 0){

            sum = sum + num;
            prod = prod * num;

            printf("\nNumero = %lf Suma = %lf Producto = %lf", num,sum,prod);

            printf("\nNuevo numero (Para acabar pon 0): ");
            scanf ("%lf", &num);
        }

    printf("\n\n\nSuma total= %lf Producto Final= %lf",sum,prod);





}
