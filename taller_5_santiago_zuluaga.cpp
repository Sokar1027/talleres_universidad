#include <iostream>
#include <cstdlib>
using namespace std;

void imprimir_arreglo(int arreglo[10]);
void caras_dado(int casos_prueba);
void pago_total(int n_empleados);
void vocales();
void caracteres();




int main(){

    int funcion;
    cout<<"digite el numero de funcion que quiere utilizar: ";
    cin>>funcion;

    switch(funcion){

        case 1:{
            int numeros[10]={};
            imprimir_arreglo(numeros);
        }
        case 2:{
            int n_lanzamientos;
            cout<<"digite la cantidad de veces que quiere lanzar el dado: ";
            cin>>n_lanzamientos;

            caras_dado(n_lanzamientos);
        }
        case 3:{
            int n_empleados;
            cout<<"digite la cantidad de empleados de su empresa: ";
            cin>>n_empleados;

            pago_total(n_empleados);
        }
        case 4:{
            cout<<"Al usar la funcion vocales, usted podra ver la cantidad de vocales en siguiente cadena de texto: "<<endl;
            cout<<"no puedo volver al pasado porque entonces era una persona diferente"<<endl;

            vocales();
        }
        case 5:{

            cout<<"la funcion caracteres le retornara la cantidad de veces que se repiten caracteres unicos en la siguiente cadena de texto"<<endl<<
            "3N UN LU64R D3 L4 M4NCH4 D3 CUY0 N0MBR3 N0 QU13R0 4C0RD4RM3, N0 H4Y MUCH0 713MP0 QU3 V1V14 UN H1D4L60 D3 L0S D3 L4NZ4 3N 4S71LL3R0 4D4R64 4N716U4 R0C1N FL4C0 Y 64L60 C0RR3D0R"<<endl;
            caracteres();
        }
         
    }



}


void imprimir_arreglo(int arreglo[10]){
    int num, n_numeros=10;
    cout<<"digite 10 numeros enteros que conformaran su arreglo: ";

    for(int i=0; i<n_numeros; i++){
        cin>>num;
        arreglo[i] = num;
    }
    for(int i=0; i<=n_numeros; i++){
        for(int j=0;j<i;j++){
            cout<<arreglo[j]; 
        }
        cout<<endl;
    }
}

void caras_dado(int casos_prueba){

    int dado[6]={};
    int n_rand;

    for(int i=1; i<=casos_prueba; i++){
        n_rand = rand()%6+1;

        if(n_rand==1){
            dado[n_rand - 1] +=1;
        }
        else if(n_rand==2){
            dado[n_rand - 1] +=1;}
        else if(n_rand==3){
            dado[n_rand - 1] +=1;}
        else if(n_rand==4){
            dado[n_rand - 1] +=1;}
        else if(n_rand==5){
            dado[n_rand - 1] +=1;}
        else if(n_rand==6){
            dado[n_rand - 1] +=1;}
    }
    for(int i=0; i<6; i++){
        cout<<"la cara "<<i+1<<" ha salido: "<<dado[i]<<" veces"<<endl;
    }
}

void pago_total(int n_empleados){
    string nombres[n_empleados]={};
    int precio_hora[n_empleados]={}, horas_trabajadas[n_empleados]={}, sueldo_total[n_empleados]={};

    cout<<"a continuacion, digitara los datos de cada trabajador en orden"<<endl;

    for(int i=0; i<n_empleados; i++){
        string nombre;
        int paga_x_hora, hora_trabajada;
        cout<<"digite el nombre del trabajador: ";
        cin>>nombre;
        nombres[i] = nombre;
        cout<<"digite la paga por hora del trabajador: ";
        cin>>paga_x_hora;
        precio_hora[i]= paga_x_hora;
        cout<<"digite las horas trabajadas del trabajador: ";
        cin>>hora_trabajada;
        horas_trabajadas[i] = hora_trabajada;

        sueldo_total[i] = precio_hora[i] * horas_trabajadas[i];
    }

    for(int j=0; j<n_empleados; j++){
        cout<<"el trabajador "<<nombres[j]<<" tiene una pago total de: "<<sueldo_total[j]<<endl;
    }
}

void vocales(){
    char cadena[]="no puedo volver al pasado porque entonces era una persona diferente" ;
    int vocales[5]={};
    int contador = 0;

    while(cadena[contador]!='\0'){
        cout<<cadena[contador];
        if(cadena[contador]=='a'){
            vocales[0] += 1;
        }
        else if(cadena[contador]=='e'){
            vocales[1] += 1;
        }
        else if(cadena[contador]=='i'){
            vocales[2] += 1;
        }
        else if(cadena[contador]=='o'){
            vocales[3] += 1;
        }
        else if(cadena[contador]=='u'){
            vocales[4] += 1;
        }
        contador += 1;
    }

    cout<<"la cantidad de veces que aparece cada vocal sera impresa en el orden: a,e,i,o,u"<<endl;

    for(int i=0; i<5;i++){
        cout<<"la vocal se repitio: "<<vocales[i]<<endl;
    }

    cout<<"numero de caracteres: "<<contador;

}

void caracteres(){
    char cadena[]="3N UN LU64R D3 L4 M4NCH4 D3 CUY0 N0MBR3 N0 QU13R0 4C0RD4RM3, N0 H4Y MUCH0 713MP0 QU3 V1V14 UN H1D4L60 D3 L0S D3 L4NZ4 3N 4S71LL3R0 4D4R64 4N716U4 R0C1N FL4C0 Y 64L60 C0RR3D0R";
    int contador = 0, contador_2 = 0;

    while(cadena[contador]!='\0'){
        contador += 1;
    }

    char caracteres[contador]={};
    int repeticiones[contador]={};


        char letra, caracter;
        for(int i=0; i<contador; i++){
            bool encontrada = false;
            letra = cadena[i];
            for(int j=0; j<contador_2;j++){
                caracter = caracteres[j];
                if(letra==caracter){
                    encontrada=true;
                    repeticiones[j]+=1;
                }

            }
            if(encontrada==false){
                caracteres[contador_2] = letra;
                repeticiones[contador_2] = 1;
                contador_2 +=1; 
            }
        }

    for(int i=0; i<contador_2; i++){
        cout << "'" << caracteres[i] << "' se repite " << repeticiones[i] << " veces" << endl;
    }
}