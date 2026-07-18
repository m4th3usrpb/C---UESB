//Questao 03.cpp
//Autor: Matheus Regis
//Data: 17/07/2026
#include <iostream>

int main ()
{
    int primeiroNumero = 0;
    int segundoNumero = 0;

    std::cout << "Digite o primeiro numero: ";
    std::cin >> primeiroNumero;

    std::cout << "Digite o segundo numero: ";
    std::cin >> segundoNumero;

    int soma = primeiroNumero+segundoNumero;

    std::cout << "[" << primeiroNumero << "] + [" << segundoNumero << "] = [" << soma << "]" << std::endl;
    return 0;
}