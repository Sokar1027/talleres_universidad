#include <iostream>
using namespace std;

int main(){
    int saldo=1000000, retiro, deposito, n_operaciones=0, operacion;

do{
    cout<<"operaciones disponibles: consultar saldo = 1, retiro = 2, deposito = 3, numero de operaciones = 4, salir = 5 "<<endl;
    cout<<"seleccione una operacion: ";
    cin>>operacion;

    switch(operacion)
    {
        case 1:
            cout<<"este es su saldo disponible: ";
            cout<<saldo;
            break;
        case 2:
            cout<<"este es su saldo disponible: ";
            cout<<saldo;
            cout<<"digite el valor a retirar: ";
            cin>>retiro;
                if((saldo>=retiro) && (retiro>0)){
                    saldo = saldo - retiro ;
                    n_operaciones+=1;
                }else{
                    cout<<"no es posible realizar el retiro";
                }
            break;
        case 3:
            cout<<"digite el valor a depositar: ";
            cin>>deposito;
                if(deposito>0){
                    saldo = saldo + deposito;
                    n_operaciones+=1;
                }else{
                    cout<<"no es posible realizar el deposito";
                }
            break;
        case 4:
            cout<<"este es su numero de operaciones realizadas: ";
            cout<<n_operaciones;
            break;
        case 5: 
            cout<<"gracias por utilizar el cajero"<<endl;
            break;
        default:
            cout<<"opcion invalida"<<endl;

    }}
while(operacion != 5);{
    
}
return 0;
}
