// ALUNA: Talyta Scaramuzzo  ---- TIA: 32079915

// EX 9 ED.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//9. Escreva um algoritmo que leia 10 números inteiros e, em seguida, exiba-os na
//ordem inversa que foram inseridas pelo usuário.
#include <iostream>
using namespace std;

int main()
{
	int repeticoes;
	std::cout << "Digite 10 numeros:"<< "\n";
	int a[10];

	int i;
	int t[10];
	int repeticoesp = 0;

	for (int repeticoes = 0; repeticoes < 10; repeticoes++) {
		std::cin >> i;
		a[repeticoes] = i;
	}
	for (int repeticoes = 9; repeticoes >= 0; repeticoes--) {
		t[repeticoesp]=a[repeticoes];
		repeticoesp += 1;
	}
	std::cout << "Invertendo os numeros: " << "\n";
	for (int repeticoes = 0; repeticoes < 10; repeticoes++) {
		std::cout<<t[repeticoes] << " ";

	}
	return 0;
}