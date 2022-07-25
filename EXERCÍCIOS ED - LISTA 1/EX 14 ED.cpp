// Aluna: Talyta Scaramuzzo --- TIA: 32079915

// EX 14 ED.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
// EX 14. Escreva uma função VowelsCount() que recebe uma string como parâmetro e
// retorna a quantidade de vogais encontradas na string.Considere que a string é um
// vetor de caracteres e use o[] para acessar cada caractere(elemento do vetor).


#include <iostream>
#include <string>
using namespace std;

void VowelsCount()
{
    string z;
    int n, w;
    n = 0;
    std::cout << "Insira aqui uma frase ou palavra: ";
    getline(cin, z);
    for (w = 0; w < z.length(); ++w) {
        if (z[w] == 'a' || z[w] == 'A' || z[w] == 'E' || z[w] == 'e' || z[w] == 'i' || z[w] == 'I' || z[w] == 'O' || z[w] == 'o' || z[w] == 'u' || z[w] == 'U') {
            n += 1;
        }
    }
    std::cout << "Quantidade de vogais e:" << n << "\n";

}

int main()

{
    VowelsCount();
    return 0;

}