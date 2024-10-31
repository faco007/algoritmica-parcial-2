#include <iostream>

using namespace std;

int main()
{
    int menu;
    int PIN;
    int Dinero;
    int Transferir;
    int Confirmar;
	cout << "Menu: \n 1. Retirar Dinero \n 2. Consultar saldo \n 3. Cambiar PIN \n 4. Transferir fondos \n 5. Salir \n Escribe la opcion: " << endl;
	cin >> menu;
	switch(menu)
	{
		case 1: // RETIRAR DINERO
		cout << "\n Introduzca cuanto dinero quiere retirar: ";
	    cin >> Dinero;
	    cout << "\n El dinero se ha retirado correctamente"; break;
		case 2: // TU SALDO
		cout << "\n Tu saldo es: ";
		cout << "\n \n 120,000$"; break;
		case 3: //CAMBIAR PIN
		cout << "\n Elegiste cambiar tu PIN" ;
	    cout << "\n\n Introduzca su PIN actual: ";
	    cin >> PIN;
	    cout << "\n Introduzca su PIN nuevo: ";
	    cin >> PIN;
	    cout << "\n Haz cambiado tu PIN correctamente"; break;
	    case 4: // TRANSFERIR DINERO
		cout << "\n Elegiste transferir dinero";
	    cout << "\n\n Introduzca el numero de cuenta al que le deseas transferir: ";
	    cin >> Transferir;
	    	    cout << "\n Cuanto dinero deseas transferirle (Maximo: 50,000): ";
	    cin >> Dinero;
	    cout << "\n\n Confirmas completar la transferencia: ";
	    cin >> Confirmar;
	    cout << "\n Se ha completado el proceso correctamente"; break;
	     case 5: // SALIR
		cout << "\n Haz salido correctamente"; break;
				default:
		cout << "\n Proceso terminado" ; break;
	}
}
