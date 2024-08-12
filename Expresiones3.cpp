//Escribe la expresion matematica como C++

#include<iostream>

using namespace std;

int main()
{
    float a,b,c,d,e,f, resultado=0;

    cout<<"INGRESE EL VALOR DE a: "; cin>>a;
    cout<<"INGRESE EL VALOR DE b: "; cin>>b;
    cout<<"INGRESE EL VALOR DE c: "; cin>>c;
    cout<<"INGRESE EL VALOR DE d: "; cin>>d;
    cout<<"INGRESE EL VALOR DE e: "; cin>>e;
    cout<<"INGRESE EL VALOR DE f: "; cin>>f;

    resultado = (a + (b/c)) / (d + (e/f));
    cout.precision(2);

    cout<<"EL RESULTADO ES: "<<resultado<<endl;


    return 0;
}