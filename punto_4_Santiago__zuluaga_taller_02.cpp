#include <iostream>
using namespace std;

int main(){
    int precio_producto, cantidad_docenas, numero_obsequios, monto_compra, precio_docena, numero_docenas;
    float descuento, precio_final;

    precio_producto = 30;
    precio_docena = 30 * 12;

    cout<<"cuantas docenas va a comprar: ";
    cin>>cantidad_docenas;

    monto_compra = cantidad_docenas * precio_docena;

    if (cantidad_docenas > 3){
        precio_final = monto_compra * 0.85;
        numero_obsequios += 2;
        numero_docenas = cantidad_docenas * 12;
        


    }

    else {
        precio_final = monto_compra * 0.90;
    }

    cout<<"su precio final es: ";
    cout<<precio_final<<endl;
    cout<<"le obsequiamos esta cantidad de productos: ";
    cout<<numero_obsequios;

}