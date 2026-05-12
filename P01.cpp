/******************************************************************
//Autor: Matheus Regis Pires Brito
//Data: 12/05/2026
//Nome do programa: P01.cpp
// Funcao: Um programa que recebe um vetor de inteiros e
//         calcula a soma de todos os elementos 
#include <iostream>
#include <iomanip>

using namespace std;

int main ()
{
  // Variaveis
  int tamanhoVetor;
  int soma = 0;
  // Tamanho do vetor
  cout << "Digite a quantidade de elementos que esse vetor tera: ";
  cin >> tamanhoVetor;
  int* vetor = new int[tamanhoVetor];
  
  // Construcao do vetor 
  for(int i=0; i < tamanhoVetor; i++){
    cout << "Digite o valor para a posicao " << i+1 << " inteiro desse vetor: ";
    cin >> vetor[i];
  }
  // Soma e Impressão
  cout << "\nVetor [ ";
  for(int i=0; i < tamanhoVetor; i++){
    soma += vetor[i];
    cout << vetor[i] << (i < tamanhoVetor - 1 ? ", " : "");
  }
  cout << " ]" << endl;
  
  cout << "Soma desses vetores: " << soma << endl;
  
  //Limpeza de memoria
  delete[] vetor;
  //Fim
  return 0;
}
    
  
