#include <iostream>
using namespace std;


int main(){
    float peso_producto, ancho_caja, alto_caja, profundidad_caja, dimensiones_caja ,valor_envio;
    char tipo_envio;
    
    cout<<"rellene la informacion solicitada: peso en kg, dimensiones en cm " << endl;
    cout<<"peso del producto: ";
    cin>>peso_producto;
    cout<<"ancho de la caja: ";
    cin>>ancho_caja;
    cout<<"alto de la caja: ";
    cin>>alto_caja;
    cout<<"profundidad de la caja: ";
    cin>>profundidad_caja;
    cout<<"tipo de envio(digite 'u' para envio urgente o 's' para envio estandar): ";
    cin>>tipo_envio;

        if (peso_producto < 1) {
            valor_envio += 5000;
        }
        else if ((peso_producto > 1) && (peso_producto < 5)) {
            valor_envio += 10000;
        }
        else {
            valor_envio +=15000;
        }

    dimensiones_caja= ancho_caja + alto_caja + profundidad_caja;

        if (dimensiones_caja < 90){
            valor_envio += 0;
        }
        else if ((dimensiones_caja > 90)&&(dimensiones_caja < 200)){
            valor_envio += 7000;
        } 
        else {
            valor_envio += 14000;
        }

        if (tipo_envio == 'u'){
            valor_envio = valor_envio + (valor_envio * 0.15);
        }
        else {
            valor_envio = valor_envio + (valor_envio * 0.05);
        }

    cout<<"el valor del envio es: ";
    cout<<valor_envio;

    

return 0;
}