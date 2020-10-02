#include <iostream>
using namespace std;
int main (void)
{
    int a, b, c, r, p; 
    float d;
    
    cout << "Ingrese el primer valor: "<<endl;

    cin >> a;

    cout << "Ingrese el segundo valor: "<<endl;
    cin >> b;

    c = a + b;
    r = a - b;
    p = a * b;
    
    

    cout << "La suma es: "<< c <<endl;
    cout << "La resta es: "<< r <<endl;
    cout << "La multiplicacion es: "<< p <<endl;
    d = (float) a / b;
    cout << "La division es: "<< d;




}