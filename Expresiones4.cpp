//Convierte en Expresion C++

#include<iostream>

using namespace std;

int main()
{
    float a,b,c,d, resultado=0;

    cout<<"INGRESE EL VALOR DE a: "; cin>>a;
    cout<<"INGRESE EL VALOR DE b: "; cin>>b;
    cout<<"INGRESE EL VALOR DE c: "; cin>>c;
    cout<<"INGRESE EL VALOR DE d: "; cin>>d;

    resultado = a + (b/(c-d));
    cout.precision(2);

    cout<<"EL RESULTADO ES: "<<resultado<<endl;

    return 0;
}