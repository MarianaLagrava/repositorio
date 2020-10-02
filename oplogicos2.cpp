#include <iostream>
#include <string>

using namespace std;

int main (void)
{
    int n, resp;
    string txtresp;

    cout<< endl;

    cout<< "REVISAR PERTENENCIA DE UN VALOR DE INTERVALOS"<<endl;

    cout << "Digite el valor a verificar: "<< endl;
    cin>> n;
    resp = (n>= -2 && n<= 5) ||  (n> 12 && n<=17);

    cout << "Esta el valor incluido en los intervalos?"<<resp<<endl;

    txtresp = (n>= -2 && n<= 5) ||  (n> 12 && n<=17)? " Si lo esta":" No lo esta";

    cout << "Esta el valor incluido en los intervalos?"<<txtresp<<endl;
    return 0;
}