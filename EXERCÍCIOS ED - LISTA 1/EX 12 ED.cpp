//Aluna: Talyta Scaramuzzo --- TIA: 32079915

// EX 12 ED.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//12. Escreva uma função Min() que recebe dois parâmetros numéricos e retorna o
//menor valor entre eles.


#include <iostream>
using namespace std;

void min()
{
    int x,y;
    std::cout << "Insira dois valores: ";
    std::cin >> x >> y;
    if (x > y)
    {
        std::cout << "O menor numero e:" << " " << y;
    }
    else {
        std::cout << "O menor numero e:" << " " << x;
    }
}
int main()
{
    setlocale(LC_ALL, "");
    min();

return 0;
}

