#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int num1, num2, tot;
    string op;

    cout << "Escoje una operacion (+,-,*,/)" << endl;
    cin >> op;

    if(op == "+"){
        cout << "Dame un numero: ";
        cin >> num1;
        cout << "Dame otro numero: ";
        cin >> num2;
        tot = num1 + num2;
        cout << "La suma es: " << tot << endl;
    }
    else{
    if(op == "-"){
        cout << "Dame un numero: ";
        cin >> num1;
        cout << "Dame otro numero: ";
        cin >> num2;
        tot = num1 - num2;
        cout << "La resta es: " << tot << endl;
    }
    else{
    if(op == "*"){
        cout << "Dame un numero: ";
        cin >> num1;
        cout << "Dame otro numero: ";
        cin >> num2;
        tot = num1 * num2;
        cout << "La multiplicacion es: " << tot << endl;
    }
    else{
    if(op == "/"){
        cout << "Dame un numero: ";
        cin >> num1;
        cout << "Dame otro numero: ";
        cin >> num2;
        tot = num1 / num2;
        cout << "La division es: " << tot << endl;
    }
    }
    }
    }

    return 0;
}
