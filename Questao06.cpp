// Questao 06.cpp
// Autor: Matheus Regis
// Data: 17/07/2026
#include <iostream>
#include <cmath>

using namespace std;

int main ()
{
    const double pi = 3.141592653589793;
    double raio = 0;

    cout << "Digite o valor do raio em radianos: ";
    cin >> raio;

    double area = pi*pow(raio,2);
    cout << "Area: " << area << endl;
    return 0;
}