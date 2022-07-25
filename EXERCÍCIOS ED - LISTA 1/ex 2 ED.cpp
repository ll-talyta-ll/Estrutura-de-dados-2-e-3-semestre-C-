// Aluna: Talyta Scaramuzzo --- TIA: 32079915

// ex 2 ED.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.

//2. Escreva um algoritmo que leia a distância(em Km) e o tempo(em horas) que um
//veículo percorreu entre um ponto A e um ponto B.Em seguida, indique a
//velocidade média do veículo durante o trecho percorrido e se a velocidade média
//ficou acima do limite de 90 Km / h.


#include<iostream>
using namespace std; 
int main()

{
	int distancia; int tempo; int velocidademedia;

	std::cout << "insira a distancia e o tempo:";
	std::cin >> distancia >> tempo;
	std::cout << "Os valores sao : Distancia(km)=" << distancia << " e tempo(horas)=" << tempo << "\n";
	velocidademedia = distancia / tempo;
	if (velocidademedia > 90)
	{	
		std::cout << "A velocidade media do trajeto foi acima do limite permitido (90km/h)="<<velocidademedia;
	}
	else
	{
		std::cout << "A velocidade media do trajeto foi dentro do valor permitido(90km/h)="<<velocidademedia;
	}
	
}