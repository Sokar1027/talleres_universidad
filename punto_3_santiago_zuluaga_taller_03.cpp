#include <iostream>
using namespace std;

int main(){
    int num, operacion,divisores;
    bool primo=true;
do{
    

    cout<<"opciones disponibles: mostrar divisores de un numero: 1, determinar primo o no primo: 2, tablas de multiplicar: 3, salir: 4";
    cin>>operacion;
    cout<<"digite su numero: ";
    cin>>num;

    switch(operacion)
    {
        case 1:
            for(int i=1; i<=num; i++){
                if( num%i==0){
                    cout<<i;
                }
            }
            break;
        case 2:
            primo = true;
            for(int i=2; i<num; i++){
                if(num%i == 0){
                    primo=false;
                }
            }
            cout<<"su numero es primo? : "<<primo;
            break;
        case 3:
            cout<<"tabla de multiplicar de su numero: ";
            for(int i=1; i<=num; i++){
                for(int j=1; j<=10; j++){
                cout<<"num: "<<i<<" * "<<" num: "<<j<<" "<<"resultado: "<<i*j<<endl;
                }
            }
            break;
        case 4:
            cout<<"gracias por usar nuestro programa";
    }

}
while(operacion!=4);{

}
}
