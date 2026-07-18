// Questao 10.cpp
// Autor: Matheus Regis
// Data: 17/07/2026
#include <iostream>
#include <iomanip>
using namespace std;

int main ()
{
    double grausCelcius = 0;
    cout << "Digite a temperatura em graus Celcius: ";
    cin >> grausCelcius;

    double grausFarenheit = (grausCelcius*(9/5))+32;
    cout << fixed << setprecision(2) << grausFarenheit << " F." << endl;
    return 0;
}