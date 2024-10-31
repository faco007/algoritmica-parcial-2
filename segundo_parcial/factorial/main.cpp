#include <iostream>

using namespace std;

int main()
{
    int op;

    while(true){

        cout <<"Menu" << endl;
        cout << "1- Calcular el factorial y mostrar la tabla de multiplicar" << endl;
        cout << "2- Salir." << endl;
        cout << "Seleccione una opcion:" << endl;
        cin >> op;

        switch(op){
        case 1:{

        int num;
        do{
            cout << "Ingrese un numero entero positivo." << endl;
            cin >> num;
            if (num < 0){

                cout << "Error.";
            }
        } while (num<0);

        int fact = 1;
        for (int i =1; i<=num; i++){
            fact *=i;
        }
        cout << "El factorial de " << num << " es: " << fact <<endl;

        cout << "Tabla de multiplicar del " << num << ":\n";
        for (int i = 1; i<=10; i++){
            cout << num << " * " << i << " = " << num * i << endl;
        }
        break;

        }
        case 2:
            cout << "Saliste" <<endl;
            return 0;
        default:
            cout << "opcion no valida. Intente de nuevo. \n";

        }



    }
     return 0;

}
