#include <iostream>
#include <cmath>
using namespace std;

int Calcular_salario(int horas_extra_trabajadas, int pago_hora, int horas_trabajadas);
int fibonacci(int num);
bool numero_perfecto(int num);
int numero_inverso(int numero, int numero_digitos);
void estadistica(float num1, float num2, float num3, float num4, float num5);

int main(){
    int funcion;
    cout<<"digite el numero de funcion que desea usar: "<<endl;
    cin>>funcion;
        switch(funcion){

            case 1:{
                int horas_extra_trabajadas, pago_hora, salario_final, horas_trabajadas;
                cout<<"digite su cantidad de horas trabajadas"<<endl;
                cin>>horas_trabajadas;
                cout<<"digite su cantidad de horas extras, en el caso de no tener horas extras, digite 0"<<endl;
                cin>>horas_extra_trabajadas;
                cout<<"digite su pago por hora"<<endl;
                cin>>pago_hora;

                salario_final = Calcular_salario(horas_extra_trabajadas, pago_hora, horas_trabajadas);

                cout<<"este es su salario total: "<<salario_final;}
            
            case 2:{
                int num, num_fibonacci;
                cout<<"digite el numero de la sucesion de fibonacci que quiera ver: ";
                cin>>num;

                num_fibonacci = fibonacci(num);

                cout<<"el numero de fibonacci es: "<<num_fibonacci;


            }
            case 3:{
                for(int i=1; i<=1000;i++){
                    bool perfecto=false;
                    perfecto = numero_perfecto(i);

                    if(perfecto){
                        cout<<"numero perfecto: "<<i<<endl;
                        for(int j=1; j<i; j++){
                            if(i%j==0){
                                cout<<j<<endl;
                            }
                    } 
                    }

                }
            }

            case 4:{
                int num, num_inverso, numero_digitos;
                cout<<"digite el numero que quiere invertir: ";
                cin>>num;
                cout<<"digite el numero de digitos de su numero: ";
                cin>>numero_digitos;

                num_inverso = numero_inverso(num, numero_digitos);

                cout<<"su numero inverso es: "<<num_inverso;
            }

            case 5:{
                int num1=2, num2=3, num3=6, num4=8, num5=11;
                estadistica(num1, num2, num3, num4, num5);
            }

        }

}

int Calcular_salario(int horas_extra_trabajadas, int pago_hora, int horas_trabajadas ){
    int salario_base, salario_total, horas_extras, pago_extra;

    salario_base = pago_hora * horas_trabajadas;

    

    if(horas_extra_trabajadas>0){
        pago_extra = (pago_hora * horas_extra_trabajadas) * 1.5;
        salario_total = salario_base + pago_extra;
    }

    salario_total = salario_base;

    return salario_total;

}

int fibonacci(int num){

    int anterior=0 , actual=1, suma_serie;
    for(int i=0; i<num; i++){

        suma_serie = actual + anterior;
        anterior = actual;
        actual = suma_serie;
        
        

    }

    return suma_serie;
}

int numero_inverso(int numero, int numero_digitos){
    int division, residuo, multiplicador, inverso, inverso_final;
    multiplicador = pow(10, numero_digitos-1);
    while(numero!=0){
        residuo = numero % 10; 
        division = numero / 10;
        numero = division;

        inverso = residuo * multiplicador;
        multiplicador = multiplicador /10;
        inverso_final +=inverso;
    }
    return inverso_final;
}

bool numero_perfecto(int numero){
        bool perfecto = false;
        int suma_divisores;
        suma_divisores = 0;
    for(int k=1;k<numero;k++){

        if(numero%k==0){
            suma_divisores +=k;
        }
    }
    
    if(suma_divisores == numero){
        perfecto = true;
    }
     
    return perfecto;
}

void estadistica(float num1, float num2, float num3, float num4, float num5){
    float media, desviacion_media, varianza, desviacion_tipica;
    media = (num1 + num2 + num3 + num4 + num5) / 5.0;

    desviacion_media = (fabs(num1-media) + fabs(num2-media) + fabs(num3-media)+fabs(num4-media)+fabs(num5-media))/5;

    varianza = (pow(num1-media,2)+pow(num2-media,2)+pow(num3-media,2)+pow(num4-media,2)+pow(num5-media,2))/5;

    desviacion_tipica = sqrt(varianza);

    cout<<"los valores se imprimiran en el sigiente orden: media, desviacion media, varianza, desviacion tipica"<<endl;
    cout<<media<<" "<<desviacion_media<<" "<<varianza<<" "<<desviacion_tipica;
}

