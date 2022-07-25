// Aluna: Talyta Scaramuzzo --- TIA: 32079915

// EX 13 ED.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//13. Escreva uma função Max() que recebe dois parâmetros numéricos e retorna o
//maior valor entre eles.

#include <iostream>
using namespace std;

void max()
{
    int x, y;
    std::cout << "Insira dois valores: ";
    std::cin >> x >> y;
    if (x > y)
    {
        std::cout << "O maior numero e:" << " " << x;
    }
    else {
        std::cout << "O maior numero e:" << " " << y;
    }
}
int main()
{
    setlocale(LC_ALL, "");
    max();

    return 0;
}
