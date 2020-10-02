#include <string>
#include <iostream>

using namespace std;

int main (void)
{
    int n, txt;
    string resp;

    cout << endl;
    cout << "Par O divisible entre 3"<<endl;

    cout << "Digite un valor: ";

    cin >> n;

    txt = (n%3 == 0) || (n%2==0) ;
    
    cout <<"Es "<< n << " par o divisible entre 3?" <<endl<< txt <<endl;

    resp = (n%3 == 0) || (n%2==0) ? " Es par o divisible entre 3" : " No es par o divisible entre 3";
    cout <<"Es "<<n<<" par o divisible entre 3?"<<endl;
    cout << n << resp <<endl;

    return 0;
}