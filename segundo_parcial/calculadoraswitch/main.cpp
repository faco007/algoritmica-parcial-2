#include <iostream>

using namespace std;

int main()
{
    int num1, num2, tot=0,op;

    cout << "Dame un numero: " << endl;
    cin >> num1;
    cout << "Dame otro numero: " << endl;
    cin >> num2;
    cout << "Escoje una operacion: " << endl;
    cout << "1- Suma. 2- Resta. 3- Multiplicacion. 4- Division." << endl;
    cin >> op;

    switch(op){
    case 1:
        tot = num1 + num2;
        cout << "La suma es: " << tot ; break;
    case 2:
        tot = num1 - num2;
        cout << "La resta es: " << tot ; break;
    case 3:
        tot = num1 * num2;
        cout << "La multiplicacion es: " << tot ; break;
    case 4:
        tot = num1 / num2;
        cout << "La division es: " << tot ; break;
    }
    return 0;
}
