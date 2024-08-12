//Programa que da la nota final de un estudiante, donde la nota de practicas vale 30%, la teorica vale 60% y la participacion el 10% restantes.

#include<iostream>

using namespace std;

int main()
{
    float n_Practica, n_Teorica, n_Participacion, resultado=0;

    cout<<"INGRESE LA NOTA DE PRACTICA: "; cin>>n_Practica;
    cout<<"INGRESE LA NOTA DE TEORIA: "; cin>>n_Teorica;
    cout<<"INGRESE LA NOTA DE PARTICIPACION: "; cin>>n_Participacion;

    n_Practica *= 0.3;
    n_Teorica *= 0.6;
    n_Participacion *= 0.1;

    resultado = n_Practica + n_Teorica + n_Participacion;

    cout<<"LA NOTA FINAL DEL ESTUDIANTE ES: "<<resultado<<endl;

    return 0;
}