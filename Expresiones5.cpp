//Escriba un programa que intercambie el valor de dos variables

#include<iostream>

using namespace std;

int main()
{
    int x, y, aux;

    cout<<"INGRESE EL VALOR DE X: "; cin>>x;
    cout<<"INGRESE EL VALOR DE Y: "; cin>>y;

    aux = x;
    x = y;
    y = aux;

    cout<<"EL NUEVO VALOR DE X ES: "<<x<<endl;
    cout<<"EL NUEVO VALOR DE Y ES: "<<y<<endl;

    return 0;
}