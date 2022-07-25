// Aluna: Talyta Scaramuzzo --- TIA: 32079915

// EX 5 ED.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//5. Assumindo a equação de reta 3x + y = 8, escreva um algoritmo que leia os valores
//para x e y e indique se o ponto(x, y) pertence à reta.

#include <iostream>
using namespace std;


int main()
{
    int x, y, g;
    std::cout << "insira o valor de x:" << "\n";
    std::cin >> x;
    std::cout << "insira o valor de y:" << "\n";
    std::cin >> y;
    g = (3 * x) + y;

    if(g==8)
    { 
        std::cout << "Os valores de x e y pertencem a reta" << "\n";

    }
    else {

        std::cout << "Os valores de x e y nao pertencem a reta" << "\n";



    }


}

