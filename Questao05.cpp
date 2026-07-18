// Questão 05.cpp
// Autor: Matheus Regis
// Data: 17/07/2026
#include <iostream>

int main ()
{
    int metros = 0;
    
    std::cout << "Digite quantos metros voce quer converter para centimetos: ";
    std::cin >> metros;
    
    int centimetros = metros*100;
    std::cout << metros << " m sao " << centimetros << " cm.";
    return 0;
}