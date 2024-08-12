//Programa que lee el precio de un producto y me entrega el precio con el IVA 

#include<iostream>

using namespace std;

int main()
{

    float iva=1.20;
    int valor, total;

    cout<<"INGRESE EL VALOR DEL PRODUCTO PARA CALCULAR EL IVA: "<<endl;
    cin>>valor;

    total = valor * iva;

    cout<<"El total del producto es de: "<<total<<endl;


    return 0;
}