#include <iostream>
#include <string>

using namespace std;

int main (void)
{
    int a, b,c, res;
    string text;

    cout<< "Prueba de operadores de comparacion y logicos"<<endl;

    cout << "Digite el limite inferior: "<<endl;
    cin>> a;

    cout << "Digite el limite superior: "<<endl;
    cin>> b;

    cout << "Digite el lvalor: "<<endl;
    cin>> c;

    res = a<= c && c<=b;

    cout << "Esta c entre a y b?"<< res << endl;

    cout<< endl;
    
    text= a<= c && c<=b? "si" : "no";

    cout << "Esta c entre a y b?"<< text << endl;
return 0;


}   
