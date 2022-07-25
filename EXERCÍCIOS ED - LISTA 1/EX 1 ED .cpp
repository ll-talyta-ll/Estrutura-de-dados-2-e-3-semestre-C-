// ALUNA: Talyta Scaramuzzo - TIA: 32079915

// 1. Escreva um algoritmo que leia dois números informados pelo usuário. Cada
//número deve ser salvo em variáveis distintas, por exemplo, valor1 e valor2.Após
//ler os dois números, o algoritmo deve trocar o conteúdo das variáveis.
//Exemplo: valor1 armazena o valor 30 e valor2 armazena o valor 50. Após o
//algoritmo ser executado, a variável valor1 deve armazenar o valor 50 e a variável
//valor2 deve armazenar o valor 30.


//EX 1.cpp : Este arquivo contém a função main. A execução do programa começa e termina ali.
#include <iostream>
int main()
	
{
	int valor1, valor2, aux;
	std::cout << "insira dois valores:";
	std::cin >> valor1 >> valor2;
	std::cout << "Os valores: A=" << valor1 << "e B=" << valor2 << "\n";
	aux = valor1;
	valor1 = valor2;
	valor2 = aux;

	std::cout << "A="<<valor1 << "e B=" <<valor2 << "\n";
}
