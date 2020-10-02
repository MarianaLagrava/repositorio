#include <iostream>
#include <cmath>
#include <string>

using namespace std;
 
 int main (void){
     int i, a;
     string nombre;
     int b,suma;
cout << "Suma de intervalo" << endl;
cout<< "Digite el valor inferior del intervalo"<< endl;
cin >> a;
cout << "Digite el valor superior del intervalo"<< endl;
cin >> b;  
if(a>b)

cout<< "Digite los numeros al reves";

else {
    suma=0;
    for (i=a;i<=b; i=i+1)
    suma= suma+i;

}
cout<< "La suma de los intervalos es: " << suma; 


 }
 