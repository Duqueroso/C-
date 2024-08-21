// Realice un programa que calcule el valor que toma la funcion para unos valores dados de x, y;

#include<iostream>
#include<math.h>

using namespace std;

int main()
{
    float x, y, resultado = 0;

    cout<<"INGRESA EL VALOR DE X: "; cin>>x;
    cout<<"INGRESA EL VALOR DE Y: "; cin>>y;

    resultado = (sqrt(x))/(pow(y,2) - 1);

    cout<<"EL RESULTADO ES: "<<resultado<<endl;

    return 0;
}