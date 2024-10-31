#include <iostream>

using namespace std;

int main()
{
    int num, pass=1234;

        do{
            cout << "Password"  <<endl;
            cin >> num;

            if(num!=pass){

                cout << "Clave incorrecta" <<endl;
            }

        } while(num!=pass);
            cout << "Correcto" <<endl;


    return 0;

}
