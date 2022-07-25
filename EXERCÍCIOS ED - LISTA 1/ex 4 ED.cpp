// Aluna: Talyta Scaramuzzo --- TIA: 32079915

// ex 4 ED.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//4. Escreva um algoritmo que leia um número e indique se o número é par ou ímpar.

#include <iostream>

int main()
{
    int valor;
    std::cout << "insira um algoritmo:""\n";
    std::cin >> valor;
    if (valor%2 == 0)
    {
        std::cout << "O algoritmo e par:" << valor << "\n";
    }
    else
    {
        std::cout << "O algoritmo e impar:" << valor << "\n";

    }

}