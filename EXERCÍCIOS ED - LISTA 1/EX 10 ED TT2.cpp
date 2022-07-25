//ALUNA: Talyta Scaramuzzo --- TIA: 32079915

//EX 10 ED TT2.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//10. Escreva um algoritmo que usa um vetor para armazenar 6 números inteiros
// informados pelo usuário.Em seguida, ordene os elementos do vetor em ordem
//crescente.Por exemplo, caso o vetor contenha os números{ 7, 3, 10, 5, 2, 6 }
//(nessa ordem), ao final do código o vetor deve armazenar{ 2, 3, 5, 6, 7, 10 }
//(números em ordem crescente).

#include <iostream>
using namespace std;

int main()
{
    int repet;
    std::cout << "Digite 6 numeros: " << '\n';
    int a[6];
    int i;
    int l;
    int t[6];

    for (int repet = 0; repet < 6; repet++) {
        std::cin >> i;
        a[repet] = i;
    }
    std::cout << "O vetor criado: ";
    for (int repet = 0; repet < 6; repet++) {
    std::cout << a[repet] << "  ";
    }

    for (int repet = 0; repet < 6; repet++) {
        t[repet] = a[repet];
    }

    for (int repet = 0; repet < 6; repet++) {
        i = t[repet];
        l = repet;
        int k = l;
        while ((l > 0) && (i < t[l - 1])) {
            t[l] = t[l - 1];
            l -= 1;
        }

        t[l] = i;

    }

    std::cout << '\n' << "O vetor ordenado: ";
    for (int repet = 0; repet < 6; repet++) {
    std::cout << t[repet] << "  ";
    }
    return 0;
}