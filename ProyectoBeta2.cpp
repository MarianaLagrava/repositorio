#include <iostream>
#include <cmath>
#include <string>


using namespace std;
void LeerDatos();
void CalcularCosto();
void DesplegarDatos();
void TotalCompra();

const int longCad = 20;
struct costoPorArticulo
{
    char nombreArticul[longCad + 1];
    int cantidad;
    float precio;
    float costoPorArticulo;
}TablaFactura[100][4];

void LeerDatos(int cantProd, costoPorArticulo Listadeproductos[])
{
    for (int i = 0; i < cantProd; i++)
    {
        cout << "Ingrese el nombre del articulo " << i + 1 << ":" << endl;
        cin >> Listadeproductos[i].nombreArticul;
        cout << "Ingrese la cantidad de unidades por el articulo " << i + 1 << ":" << endl;
        cin >> Listadeproductos[i].cantidad;
        cout << "Ingrese el precio unitario por el articulo (USD) " << i + 1 << ":" << endl;
        cin >> Listadeproductos[i].precio;
    }
}

void CalcularCosto(int cantProd, costoPorArticulo Listadeproductos[])
{
    float total;
    int i;
    for (i = 0; i < cantProd; i++)
    {
        total = Listadeproductos[i].cantidad * Listadeproductos[i].precio;
        Listadeproductos[i].costoPorArticulo = total;
    }
}

void DesplegarDatos(int cantProd, costoPorArticulo Listadeproductos[])
{
TablaFactura[100][4]={{"Nombre"},{"Cantidad"}};

    /*for(int l=0; l<cantProd; l++){
        for (j=0; j<4; j++){
         for (int k = 0; k < cantProd; k++)
             {
                TablaFactura[k][0]={Listadeproductos[k].nombreArticul};
                 TablaFactura[k][1]={Listadeproductos[k].cantidad};
                TablaFactura[k][2]={Listadeproductos[k].precio};
                 TablaFactura[k][3]={Listadeproductos[k].costoPorArticulo};
            }

        }
    }*/
    for(int l=0; l<cantProd; l++){
        for(int j=0; j<4; j++){
            cout << TablaFactura[l][j];
        }
    }
}
void TotalCompra(int cantProd, costoPorArticulo Listadeproductos[])
{
    float CompraTotal;
    for(int i=0; i< cantProd; i++){
        CompraTotal+= Listadeproductos[i].costoPorArticulo;
    }
    cout <<"El total de su compra es: " << CompraTotal<< "$";
}

int main(void)
{
    int cantProd = 0;
    cout << "EMISION DE FACTURA" << endl;
    cout << "Ingrese el numero de productos" << endl;
    cin >> cantProd;
    costoPorArticulo ListadeProductos[cantProd];
    LeerDatos(cantProd, ListadeProductos);
    CalcularCosto(cantProd, ListadeProductos);
    DesplegarDatos(cantProd, ListadeProductos);
    TotalCompra(cantProd, ListadeProductos);
}