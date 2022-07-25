// Aluna: Talyta Scaramuzzo --- TIA: 32079915

// ex 3 ED.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//3. Escreva um algoritmo que leia uma letra e indique se é uma vogal ou consoante.

#include <iostream>
#include <ctype.h>
#include <stdio.h>
#include <conio.h>

using namespace std;
using std::string;
int main()
{
	string letra;

	
	std::cout << "Insira uma letra:" << "\n";
	std::cin >> letra;
	std::cout << "A letra inserida e:" << letra << "\n";
	
	if  (letra == "A"||letra == "a"||letra == "e"||letra == "E"||letra == "I"||letra == "i"||letra == "O"||letra == "o"||letra == "U"||letra == "u")
	{
		std::cout << "a letra e uma vogal" << "\n";
	}
	else
	{
		std::cout << "A letra e uma consoante" << "\n";
	}
}

