#include <iostream>

using namespace std;

void funcionmurcielago(string frase, int longi_frase, char clave[], int longi_mur){
    char numero[10] = {'0','1','2','3','4','5','6','7','8','9'}; // variables como char para que se pueda integrar el numero al string
    for (int i = 0; i < longi_frase; i++){
        for(int x = 0; x < longi_mur; x++){
            if(frase[i] == clave[x]){
                frase[i] = numero[x]; //se cambia el valor que contiene la palabra si una letra de la frase es igual a una letra de murcielago
            }
        }
    }
    cout << frase; //imprime frase con los valores ya cambiados por los numeros
} 

int main(void){
    cout << endl << "CLAVE MURCIELAGO" << endl << endl;
    char codigo[10] = {'m', 'u', 'r', 'c', 'i', 'e', 'l', 'a', 'g', 'o'};
    string frase;
    cout << "Escriba una frase: ";
    getline(cin, frase);
    int longi = 0;
    int longi_mur = 10;
    longi = frase.length();
    funcionmurcielago(frase, longi, codigo, longi_mur);
    return 0;
}