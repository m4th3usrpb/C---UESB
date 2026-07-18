// Questão 07.cpp
// Autor: Matheus Regis
// Data: 17/07/2026
#include <iostream>
#include <cmath>

using namespace std;

int main ()
{
    double lado = 0;
    cout << "Digite o lado do quadardo: ";
    cin >> lado;

    double area = pow(lado,2);

    cout << "Area desse quadrado: " << area << endl;
    double DobroArea = area*2;

    cout << "Dobro dessa area: " << DobroArea << endl;
    return 0;
}