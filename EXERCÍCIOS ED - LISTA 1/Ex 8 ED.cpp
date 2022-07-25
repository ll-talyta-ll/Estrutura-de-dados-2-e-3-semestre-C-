//ALUNA: Talyta Scaramuzzo --- TIA: 32079915

// Ex 8 ED.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//8. Escreva um algoritmo que exiba a sequência de Fibonacci com N números, sendo
//N um número informado pelo usuário.A sequência de Fibonacci começa com 1 e
//1 e os números subsequentes são obtidos com a soma dos dois números anteriores :
//1, 1, 2, 3, 5, 8, 13,...

#include <iostream>
using namespace std;

int main()
{
	int N;
	std::cout << "O numero da sequencia e:" << "\n";
	std::cin >> N;
	int l = 1;
	int o = l;
	std::cout << " A sequencia de Fibonacci e: " << "\n" << l << " " << o << " ";
	for (int x = 0; x < N - 2; x++) {
		o += l;
		l = o - l;
		std::cout << o << " ";

	}
	return 0;


}
