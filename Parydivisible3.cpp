#include <iostream>

#include <string>

using namespace std;

int main (void)
{
    int n, txt;
    string resp;

    cout << endl;
    cout << "PAR Y divisible entre 3"<<endl;

    cout << "Digite un valor: ";

    cin >> n;

    txt = (n%3 == 0) && (n%2==0) ;
    
    cout <<"Es "<< n << " par y divisible entre 3?" <<endl<< txt <<endl;

    resp = (n%3 == 0) && (n%2==0) ? " Es par y divisible entre 3" : " No es par y divisible entre 3";
    cout <<"Es n par y divisible entre 3?"<<endl;
    cout << n << resp <<endl;
    return 0;


}