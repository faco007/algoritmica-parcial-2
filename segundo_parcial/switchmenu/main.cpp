#include <iostream>

using namespace std;

int main()
{
    int ordp,ordc;
    cout << "MENU" << endl;
    cout << "1-Hamburguesa Sencilla" << endl;
    cout << "2-Hamburguesa doble" << endl;
    cout << "¿Que va a ordenar? " <<endl;
    cin >> ordc;

        switch(ordc){
            case 1:
                cout << "Selecciono Hamburguesa Sencilla " <<endl ; break;
            case 2:
                cout << "Selecciono Hamburguesa doble " <<endl ; break;
        }
    cout << " ¿Como va a pagar? " <<endl;
    cout << " 1-Metodo de pago efectivo." <<endl;
    cout << " 2-Metodo de Pago con tarjeta." <<endl;
    cin >> ordp;

        switch(ordp){
            case 1:
                cout << "Selecciono Metodo de pago Efectivo." <<endl ; break;
            case 2:
                cout << "Selecciono Metodo de Pago con Tarjeta." <<endl ; break;
        }


     cout << " Perfecto, su orden es una:  ";
            switch(ordc){
                case 1:
                    cout << " Hamburguesa Sencilla " ; break;
                case 2:
                    cout << " Hamburguesa doble " ; break;

            }

    cout << " Y su pago sera con:  ";
            switch(ordp){
                case 1:
                    cout << " Metodo de pago efectivo." ; break;
                case 2:
                    cout << " Metodo de pago con tarjeta." ; break;
            }

        return 0;

}
