#include <iostream>
#include <iomanip>
using namespace std;


void registrar_notas(float notas[][5],int n_estudiantes, int n_notas);
void imprimir_matriz_estudiantes(float notas[][5], int n_estudiantes, int n_notas);
void promedio_estudiante(float notas[][5], int n_estudiante, int n_notas);
void promedio_asignatura(float notas[][5], int n_estudiantes, int n_notas);
void calificacion_min_max(float notas[][5], int n_estudiantes, int n_notas);
void aprobacion(float notas[][5], int n_estudiantes, int n_notas);
void imprimir_promedio_asignatura_maxima(float notas[][5], int n_estudiantes, int n_notas);
void registrar_resultados(float resultados[][5],int n_equipos, int n_evaluaciones);
void imprimir_matriz_equipos(float resultados[][5], int n_equipos, int n_evaluaciones);
void ordenar(float resultados[][5], int n_equipos, int n_evaluaciones);
void imprimir_matriz_ordenada(float resultados[][5], int n_equipos, int n_evaluaciones);
void transpuesta(int matriz[][100], int matriz_transpuesta[][100],int filas, int columnas);

int main(){
    int n_estudiantes=6, n_notas=4, n_equipos=4, n_evaluaciones=5,filas=5,columnas=5, matriz[100][100] = {
    { 1,  2,  3,  4,  5},
    { 6,  7,  8,  9, 10},
    {11, 12, 13, 14, 15},
    {16, 17, 18, 19, 20},
    {21, 22, 23, 24, 25}
};
    int matriz_transpuesta[100][100];
    float notas[7][5]={}, resultados[4][5]={} ;

    int option;

    cout<<"elija la funcion que quiere usar: "<<endl;
    cin>>option;
    switch(option){
        case 1:
            registrar_notas(notas, n_estudiantes, n_notas);
            promedio_estudiante(notas, n_estudiantes, n_notas);
            promedio_asignatura(notas, n_estudiantes,n_notas);
            calificacion_min_max(notas, n_estudiantes, n_notas);
            aprobacion(notas, n_estudiantes, n_notas);
            imprimir_promedio_asignatura_maxima(notas, n_estudiantes, n_notas);
            imprimir_matriz_estudiantes(notas, n_estudiantes+1, n_notas+1);
            break;
        case 2:
            registrar_resultados(resultados, n_equipos, n_evaluaciones);
            cout<<"matriz original"<<endl;
            imprimir_matriz_equipos(resultados, n_equipos, n_evaluaciones);
            ordenar(resultados, n_equipos, n_evaluaciones);
            cout<<"matriz ordenada"<<endl;
            imprimir_matriz_ordenada(resultados, n_equipos, n_evaluaciones);
            break;
        case 3:
            transpuesta(matriz, matriz_transpuesta, filas, columnas);
            break;


}}

void registrar_notas(float notas[][5],int n_estudiantes, int n_notas){


    cout<<"digite las 4 notas por estudiante. En el orden de matematicas, ingles, ciencias y programacion"<<endl;

    for(int i=0; i<n_estudiantes; i++){
        cout<<"digite las notas del estudiante "<<i+1<<endl;
        for(int j=0; j<n_notas; j++){
            cin>>notas[i][j];
        }
    }

}

void imprimir_matriz_estudiantes(float notas[][5], int n_estudiantes, int n_notas){
    cout<<"se imprimira la matriz de notas"<<endl;
    for(int i=0; i<n_estudiantes; i++){

        for(int j=0; j<n_notas; j++){
            cout<<setw(3)<<notas[i][j]<<" ";
        }
        cout<<endl;
    }
}

void promedio_estudiante(float notas[][5], int n_estudiante, int n_notas){

    cout<<"se calculara el promedio de cada estudiante."<<endl;
    for(int i=0; i<n_estudiante;i++){
        float sumatoria=0.0;
        for(int j=0;j<n_notas;j++){
            sumatoria += notas[i][j]; 
        }
        
        notas[i][n_notas] = sumatoria/n_notas; 

    }
}

void promedio_asignatura(float notas[][5], int n_estudiantes, int n_notas){
    cout<<"se calculara el promedio por asignatura."<<endl;
    for(int i=0;i<n_notas; i++){
        float sumatoria=0.0;
        for(int j=0;j<n_estudiantes;j++){
            sumatoria += notas[j][i];
        }

        notas[n_estudiantes][i] = sumatoria/n_estudiantes;
    }

}

void calificacion_min_max(float notas[][5], int n_estudiantes, int n_notas){
    float maxima=notas[0][0], minima=notas[0][0];
    cout<<"se imprimira la calificacion minima y maxima de toda la matriz."<<endl;
    for(int i=0;i<n_estudiantes;i++){
        for(int j=0;j<n_notas;j++){
            if(notas[i][j]>maxima){
                maxima=notas[i][j];
            }else if(notas[i][j]<minima){
                minima=notas[i][j];
            }
        }
    }

    cout<<"la nota minima es: "<<minima<<endl;
    cout<<"la nota maxima es: "<<maxima<<endl;
}

void aprobacion(float notas[][5], int n_estudiantes, int n_notas){
    int n_aprobados_x_materia[4]={};
    for(int i=0; i<n_notas; i++){
        int sumatoria=0;
        for(int j=0; j<n_estudiantes;j++){
            if(notas[j][i]>=3.0){
                sumatoria +=1;
            }
        }
        n_aprobados_x_materia[i]=sumatoria;
    }
}

void imprimir_promedio_asignatura_maxima(float notas[][5], int n_estudiantes, int n_notas){
    float maximo=0.0; int indice=0;
    cout<<"se mostrara la asignatura con el promedio mas alto."<<endl;
    for(int i=0;i<n_notas;i++){
        if(notas[n_estudiantes][i]>maximo){
            maximo=notas[n_estudiantes][i];
            indice=i;
        }
    }

    if(indice==0){
        cout<<"la materia con el mayor promedio es matematicas"<<endl;
    }else if(indice==1){
        cout<<"la materia con el mayor promedio es de ingles"<<endl;
    }else if(indice==2){
        cout<<"la materia con el mayor promedio es de ciencias"<<endl;
    }
    else if(indice==3){
        cout<<"la materia con el mayor promedio es de programacion"<<endl;
    }
}


void registrar_resultados(float resultados[][5],int n_equipos, int n_evaluaciones){

    cout<<"digite los 5 resultados por equipo."<<endl;

    for(int i=0; i<n_equipos; i++){
        cout<<"digite el resultado del equipo: "<<i+1<<endl;
        for(int j=0; j<n_evaluaciones; j++){
            cin>>resultados[i][j];
        }
    }

}
void imprimir_matriz_equipos(float resultados[][5], int n_equipos, int n_evaluaciones){
    
    for(int i=0;i<n_equipos;i++){
        for(int j=0; j<n_evaluaciones;j++){
            cout<<setw(3)<<resultados[i][j]<<" ";
        }
        cout<<endl;
    }
}

void ordenar(float resultados[][5], int n_equipos, int n_evaluaciones){

    cout<<"la funcion ordenara la matriz por equipo."<<endl;

    for(int i=0;i<n_equipos;i++){
        for(int j=0;j<n_evaluaciones-1;j++){
            for(int k=1;k<n_evaluaciones-j;k++){
            float aux;
            if(resultados[i][k-1]>resultados[i][k]){
                aux=resultados[i][k-1];
                resultados[i][k-1]=resultados[i][k];
                resultados[i][k]=aux;
            }
        }
    }
}
}

void imprimir_matriz_ordenada(float resultados[][5], int n_equipos, int n_evaluaciones){
    imprimir_matriz_equipos(resultados, n_equipos, n_evaluaciones);
}

void transpuesta(int matriz[][100], int matriz_transpuesta[][100],int filas, int columnas){

    cout<<"matriz original:"<<endl;
    for(int i=0; i<filas; i++){
        for(int j=0; j<columnas; j++) cout<<setw(5)<<matriz[i][j];
        cout<<endl;
    }

    for(int i=0; i<filas;i++){
        for(int j=0; j<columnas;j++){
            matriz_transpuesta[j][i] = matriz[i][j];
        }
    }

    cout<<"matriz transpuesta:"<<endl;
    for(int i=0; i<columnas; i++){
        for(int j=0; j<filas; j++) cout<<setw(5)<<matriz_transpuesta[i][j];
        cout<<endl;
    }

    
}