//Questao 04.cpp
//Autor: Matheus Regis
//Data:17/07/2026
#include <iostream>
#include <iomanip>


int main ()
{
    double notaUm = 0;
    double notaDois = 0;
    double notaTres = 0;
    double media = 0;

    std::cout << "Nota 1: ";
    std::cin >> notaUm;

    std::cout << "Nota 2: ";
    std::cin >> notaDois;

    std::cout << "Nota 3: ";
    std::cin >> notaTres;

    media = (notaUm+notaDois+notaTres)/3.0;

    std::cout <<"Media: "<< std::fixed << std::setprecision(2) << media << std::endl;
    return 0;

}