// Escribe la siguiente expresion matematica como expresion C++

#include<iostream>

using namespace std;

int main()
{
    float a,b, resultado=0;

    cout<<"DIGITE EL VALOR DE A: ";
    cin>>a;

    cout<<"DIGITE EL VALOR DE B: ";
    cin>>b;

    resultado = (a/b) + 1;
    cout.precision(2);
    
    cout<<"\nEL RESULTADO ES: "<<resultado<<endl;


    return 0;
}