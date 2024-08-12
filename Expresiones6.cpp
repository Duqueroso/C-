//Programa que lee la ultima nota de 4 alumnos y calcula la media de los 4.

#include<iostream>

using namespace std;

int main()
{
    float a,b,c,d, resultado=0;

    cout<<"INGRESE LA NOTA DEL ESTUDIANTE A: "; cin>>a;
    cout<<"INGRESE LA NOTA DEL ESTUDIANTE B: "; cin>>b;
    cout<<"INGRESE LA NOTA DEL ESTUDIANTE C: "; cin>>c;
    cout<<"INGRESE LA NOTA DEL ESTUDIANTE D: "; cin>>d;

    resultado = (a+b+c+d) / 4;

    cout<<"EL PROMEDIO DE LAS 4 NOTAS ES: "<<resultado<<endl;

    return 0;
}