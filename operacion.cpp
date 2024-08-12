//Escriba un programa que lea dos numeros y muestre el resultado de suma, resta, multiplicacion y division

#include<iostream>

using namespace std;

int main()
{
    
    int num1, num2, suma=0, resta=0, multi=0, divi=0;

    cout<<"INGRESE EL PRIMER NUMERO: "<<endl;
    cin>>num1;

    cout<<"INGRESE EL SEGUNDO NUMERO: "<<endl;
    cin>>num2;

    suma = num1 + num2;
    cout<<"LA SUMA ES: "<<suma<<endl;

    resta = num1-num2;
    cout<<"LA RESTA ES: "<<resta<<endl;

    multi = num1*num2;
    cout<<"LA MULTIPLICACION ES: "<<multi<<endl;

    divi = num1/num2;
    cout<<"LA DIVISION ES: "<<divi<<endl;



    return 0;
}
