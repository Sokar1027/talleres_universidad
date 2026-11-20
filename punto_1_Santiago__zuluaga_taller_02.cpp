#include <iostream>
using namespace std;

int main(){
    int lado_1, lado_2, lado_3;
    cout<<"introduzca el lado 1 de su triangulo ";
    cin>>lado_1;
    cout<<"introduzca el lado 2 de su triangulo ";
    cin>>lado_2;
    cout<<"introduzca el lado 3 de su triangulo ";
    cin>>lado_3;
    if( (lado_1 == lado_2) && (lado_2 == lado_3)){
        cout<<"su triangulo es equilatero";
    }
    else if ( ((lado_1 == lado_2) && (lado_3 != lado_1)) || ((lado_2 == lado_3) && (lado_2 != lado_1)) || ((lado_1 == lado_3) && (lado_2 != lado_3))) {
        cout<<"su triangulo es isosceles";
    }
    else{
        cout<<"su triangulo es escaleno";
    };
    return 0;
}