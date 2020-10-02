#include <iostream>

#include <string>

using namespace std;

int main (void)
{
    int n, txt;
    string resp;

    cout << endl;
    cout << "PAR O IMPAR"<<endl;

    cout << "Digite un valor: ";

    cin >> n;

    txt = n%2 == 0;

    cout << txt <<endl;

    resp = n%2 == 0 ? " Es par" : " Es impar";

    cout << n << resp <<endl;
    return 0;


}