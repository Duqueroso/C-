//Programa que lea los datos de una persona edad, sexo, altura... Mostrar los datos

#include<iostream>

using namespace std;

int main()
{

    int edad;
    char sexo[10];
    float altura;

    cout<<"INGRESE SU EDAD: ";
    cin>>edad;

    cout<<"INGRESE SU SEXO: ";
    cin>>sexo;

    cout<<"INGRESE SU ALTURA EN METROS: ";
    cin>>altura;

    cout<<"\nEdad: "<<edad<<endl;
    cout<<"\nSexo: "<<sexo<<endl;
    cout<<"\nAltura: "<<altura;


    return 0;
}