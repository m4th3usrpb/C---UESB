// Questão 09.cpp
// Autor: Matheus Regis
// Data: 17/07/2026
#include <iostream>
#include <iomanip>

using namespace std;

int main ()
{
    double grausFarenheit = 0;
    cout << "Digite a temperatura em F: ";
    cin >> grausFarenheit;

    double grausCelcius = 5*(grausFarenheit-32)/9;
    cout << fixed << setprecision(2) << grausCelcius << " C celcius." << endl;
    return 0;
}