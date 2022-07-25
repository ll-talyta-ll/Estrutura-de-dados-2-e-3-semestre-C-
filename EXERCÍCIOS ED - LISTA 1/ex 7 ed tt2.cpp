// Aluna: Talyta Scaramuzzo --- TIA: 32079915

// ex 7 ed tt2.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//7. Escreva um algoritmo que leia 10 números inteiros e, após a leitura dos números,
//informe qual é o maior e qual é o menor.


#include <iostream>
#include <stdio.h>

int main()
{
    int vet[10], i, guarda_maior, guarda_menor;
    std::cout << "Digite os numeros para compor o vetor:";
    for (i = 0; i < 10; i++)
    {
        std::cin >> vet[i];
    }
    guarda_maior = vet[0];
    guarda_menor = vet[0];
    for (i = 0; i < 10; ++i)
    {
        if (vet[i] > guarda_maior)
        {
            guarda_maior = vet[i];
        }
        if (vet[i] < guarda_menor)
        {
            guarda_menor = vet[i];
        }

    }

    std::cout << " O maior numero entrado e o menor numero encontrados sao:" << guarda_maior << "\n" << guarda_menor;

}

