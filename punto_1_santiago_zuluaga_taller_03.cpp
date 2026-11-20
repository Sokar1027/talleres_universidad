#include <iostream>
using namespace std;

int main(){
    int num, digito, n_digito=0, n_pares=0, n_impares=0, n_ceros=0, sum_digitos=0, mayor_digito=0, min_digito=10;
     

    do{
        cout<<"digite un numero de minimo tres digitos: ";
        cin>>num;

    }while(num<=100);

    do{
        digito = num % 10;  
        n_digito+=1;
        num = num / 10;
        if(digito == 0){
            n_ceros+=1;
        }else if(digito%2 == 0){
            n_pares +=1;
        }else if(digito%2 !=0){
            n_impares+=1;
        } 

        sum_digitos += digito;
        if(digito>mayor_digito){
            mayor_digito=digito;
        }
        if (digito<min_digito){
            min_digito=digito;
        }



        
    }while(num>0);

    cout<<"numero de digito: ";
    cout<<n_digito<<endl;
    cout<<"cantidad de pares: ";
    cout<<n_pares<<endl;
    cout<<"cantidad de impares: ";
    cout<<n_impares<<endl;
    cout<<"cantidad de ceros: ";
    cout<<n_ceros<<endl;
    cout<<"suma de digitos: ";
    cout<<sum_digitos<<endl;
    cout<<"digito mayor: ";
    cout<<mayor_digito<<endl;
    cout<<"digito menor";
    cout<<min_digito;


}