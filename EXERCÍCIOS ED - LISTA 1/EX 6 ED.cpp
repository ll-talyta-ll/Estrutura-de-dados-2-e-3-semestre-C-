// Aluna: Talyta Scaramuzzo --- TIA: 32079915

// EX 6 ED.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//6. Escreva um algoritmo que calcule e exiba o fatorial de um número informado pelo
//usuário.

#include <iostream>

int main()
{
	int val, fator, i;
	std::cout << "Digite um numero:";
	std::cin >> val;
	fator = val;
	for (i = (val - 1); i >= 1; --i)
	{
		fator = fator * i;
	}

	std::cout << "O fatorial do numero digitado:" << val << "=" << fator;

}
