#include <iostream>
using namespace std;

int main(){

    int test_1, test_2, test_3;
    float calificacion_promedio;
    string nota_final;

    cout<<"por favor digite las notas de sus 3 examenes: ";
    cout<<"nota examen 1: ";
    cin>>test_1;
    cout<<"nota examen 2: ";
    cin>>test_2;
    cout<<"nota examen 3: ";
    cin>>test_3;

    calificacion_promedio =  (test_1 + test_2 + test_3) / 3;
    
    if (calificacion_promedio < 60){
        nota_final = "F";
    } 
    else if ((calificacion_promedio >= 60)&& (calificacion_promedio <= 69)){
        nota_final = "D";
    }
    else if ((calificacion_promedio >= 70)&& (calificacion_promedio <= 79)){
        nota_final = "C";
    }
    else if ((calificacion_promedio >= 80)&& (calificacion_promedio <= 89)){
        nota_final = "B";
    }
    else if ((calificacion_promedio >= 90)&& (calificacion_promedio < 99)){
        nota_final = "A+";
    } 
    else {
        nota_final = "A++";
    }

    cout<<"Su nota final es: ";
    cout<<nota_final;

}