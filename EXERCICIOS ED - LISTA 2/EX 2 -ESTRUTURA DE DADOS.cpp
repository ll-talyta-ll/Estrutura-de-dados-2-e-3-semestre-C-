// Aluna: Talyta Scaramuzzo --- TIA: 32079915
#include <iostream>
#include <string>
using namespace std;

#define MAX 100
struct Stack {
    int tipo;
    char letras[MAX];
};
struct Stack pilha;

void criar() {
    pilha.tipo = 0;
}

void empilhar(char letter) {
    pilha.letras[pilha.tipo] = letter;
    pilha.tipo++;
}

char desempilhar() {
    pilha.tipo--;
    return pilha.letras[pilha.tipo];
}

void exibicao() {
    for (int i = pilha.tipo - 1; i >= 0; i--)
        cout << i << " - " << pilha.letras[i] << endl;
}

int main() {
    string texto;
    cout << "Insira uma data: " << "\n";
    getline(cin, texto);
    texto.erase(remove(texto.begin(), texto.end(), '/'), texto.end());


    for (int k = 0; k < texto.length() < k++ ;) {
            texto[k] = tolower(texto[k]);
    }

    char* name = new char[texto.length() + 1];
    memcpy(name, texto.c_str(), texto.length() + 1);

    texto[MAX];

    for (int i = 0; i < texto.length(); i++)
        empilhar(texto[i]);

    cout << "Stack: " << endl;
    exibicao();

    string resultado = "A data e palindroma";
    for (int i = 0; i < texto.length(); i++)
        if (texto[i] != desempilhar())
            resultado = "A data nao e palindroma";

    cout << resultado << endl;
}


