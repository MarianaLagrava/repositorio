#include <iostream>

#include <string>

using namespace std;

int main (void)
{
    int n, txt;
    string resp;

    cout << endl;
    cout << "Divisible entre tres"<<endl;

    cout << "Digite un valor: ";

    cin >> n;

    txt = n%3 == 0;

    cout << txt <<endl;

    resp = n%3 == 0 ? " Lo es" : " No lo es";

    cout << n << resp <<endl;
    return 0;


}