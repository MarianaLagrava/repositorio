#include <iostream>
#include <vector>

using namespace std;

const int longCad = 20;

struct articulo{
    char nombreArticul[longCad + 1];
    int cantidad;
    float precio;
    float costoPorArticulo;
};

float obtenerTotal(int cantidad, float precioUnitario){
    return cantidad*precioUnitario;
}

articulo agregarArticulo(){
    articulo arti;
    cout << "Ingrese el nombre del articulo" << endl;
    cin >> arti.nombreArticul;
    do{
        
        cout << "Ingrese la cantidad" << endl;
        cin >> arti.cantidad;
        if((arti.cantidad < 1)){
            cout << "Ingrese un valor valido" << endl;
        }

    }while (arti.cantidad < 1);

    do{

        cout << "Ingrese el precio unitario" << endl;
        cin >> arti.costoPorArticulo;
        if( arti.costoPorArticulo <= 0 ){
            cout << "Ingrese un valor valido" << endl << endl;
        }

    }while (arti.costoPorArticulo <= 0);
    
    

    arti.precio = obtenerTotal(arti.cantidad, arti.costoPorArticulo);

    return arti;
}

void mostrarArticulos(vector<articulo> articulos){
    if(articulos.size() > 0){
        cout << "Productos en el carrito: " << endl;
        for(articulo arti : articulos){
            cout << "Nombre del articulo.................. " << arti.nombreArticul << endl;
            cout << "Cantidad ............................ " << arti.cantidad << endl;
            cout << "Precio Unitario ..................... " << arti.costoPorArticulo << endl;
            cout << "Total ............................... " << arti.precio << endl << endl;
        }
    }else{
        cout << "Actualmente su carrito esta vacio" << endl;
    }

}

string totalDeCompra(vector<articulo> articulos){
    float total = 0;
    for(articulo arti : articulos){
        total += arti.precio;
    }
    return "El total a pagar es de: $"+to_string(total);
}

int main(){
    vector<articulo> articulos;
    bool seguir = true;
    int opcion;
    cout << "Bienvenido al programa para obtener el total de una compra" << endl;
    int cantidad;
    do
    {
        cout << "Cuantos productos desea ingresar?" << endl;
        cin >> cantidad;
        if(cantidad < 1){
            cout << "Ingrese una cantidad valida \n\n" << endl;
        }

    } while (cantidad < 1);

    cout << endl << endl;
    for (size_t i = 0; i < cantidad; i++){
        cout << "Ingrese los datos del Producto #" << i+1 << endl;
        articulos.push_back(agregarArticulo());
        cout << endl << endl;
    } 
    cout << "Productos Agregados exitosamente" << endl;

    mostrarArticulos(articulos);
    cout << totalDeCompra(articulos) << endl;
    system("PAUSE()");
}
