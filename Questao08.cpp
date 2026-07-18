// Questao 08
// Autor: Matheus Regis
// Data: 17/07/2026
#include <iostream>
#include <iomanip>


using namespace std;

int main () 
{
    double ganhoHora = 0;
    cout << "O quanto voce ganha por hora: ";
    cin >> ganhoHora;

    double horaTrabalhada = 0;
    cout << "Quanto de horas trabalhadas: ";
    cin >> horaTrabalhada;

    double salarioMensal = ganhoHora * horaTrabalhada;
    cout << fixed << setprecision(2) << "Salario R$ " << salarioMensal << "." << endl;
    return 0;

}