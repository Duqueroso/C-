//Programa para calcular la formula del estudiante

#include<iostream>
#include<math.h>

using namespace std;

int main()
{
    float a,b,c,x1,x2,raiz = 0;

    cout<<"INGRESE EL VALOR DE a: "; cin>>a;
    cout<<"INGRESE EL VALOR DE b: "; cin>>b;
    cout<<"INGRESE EL VALOR DE c: "; cin>>c;

    raiz = sqrt(pow(b,2) - 4*a*c);
    x1 = (- b + raiz) / (2*a);
    x2 = (- b - raiz) / (2*a);

    cout<<"Las soluciones son: " << x1 << " y " << x2 <<endl;


    return 0;
}