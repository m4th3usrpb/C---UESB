/******************************************************************
Autor.....: Matheus Regis Pires Brito
Data......: 12/05/2026
Data da ultima alteracao.:12/05/2026
Nome do programa: P02.cpp
Funcao.....: Um programa que recebe um vetor de inteiros positivos e substitui seus elementos de valor
             ímpar por -1 e os pares por +1. Em seguida, imprime o vetor alterado.
******************************************************************/
#include <iostream>

using namespace std;

int main ()
{
  int vetor[] = {1,2,3,4,5,6,7,8};
  for(int i=0; i < sizeof(vetor)/sizeof(int); i++){
    if (vetor[i] % 2 == 0) {
      vetor[i] = 1;
      } else  {
      vetor[i] = -1;
      }
  }
    // Imprimir o vetor
    cout << "Vetor = [ ";
    for(int i=0; i < sizeof(vetor)/sizeof(int); i++){
      cout << vetor[i] << ",";
    }
    cout << "]" << endl;
    return 0;
}
  
  
