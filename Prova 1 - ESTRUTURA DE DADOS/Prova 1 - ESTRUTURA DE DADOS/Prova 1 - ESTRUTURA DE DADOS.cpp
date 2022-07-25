// Prova 1 - ESTRUTURA DE DADOS.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//Para solucionar a P1, você deve implementar o TAD Fila (Queue) estática usando,
//obrigatoriamente, pilhas estáticas.


#include <iostream>
#include "StaticQueueS.h"
#include "StaticQueueS.cpp"
using namespace std;

int main()
{
	int intoutput;
	char opcao, insercao, output;
	string l, L, m, M, n, N, o, O, p, P, q, Q, r, R;
	bool prempty;
	StaticQueueS queue = Create();

	opcao = 'l';


	while (opcao != 'G' || 'g')
	{
		cout << "Menu: \n";
		cout << "Enqueue\nl - Enqueue\nm - Enqueue\nn - Enqueue\no - Enqueue\np - Enqueue\nq - Enqueue\nr -";
		cin >> opcao;
		insercao = toupper(insercao);
		{
			if (insercao = 'l' || 'L')
			{
				cout << "Digite o valor que deseja inserir na fila: \n";
				cin >> insercao;
				Enqueue(queue, insercao);
				break;
			}
			else if (insercao = 'm' || 'M')
			{
				output = Dequeue(queue);
				cout << "Dequeue sera: " << output;
				break;
			}

			else if (insercao = 'n' || 'N')
			{
				output = Front(queue);
				cout << "Front: " << output;
				break;
			}
			else if (insercao = 'o' || 'O')
			{
				prempty = IsEmpty(queue);
				cout << "IsEmpty: \n" << prempty;
				break;
			}
			else if (insercao = 'p' || 'P')
			{
				intoutput = Count(queue);
				cout << "A capacidade da fila esta:  \n" << intoutput;
				break;
			}
			else if (insercao = 'q' || 'Q')
			{
				intoutput = Size(queue);
				cout << "O tamanho da queue e: " << "\n" << intoutput;
				break;
			}
			else if (insercao = 'r' || 'R')
			{
				Clear(queue);
				break;
			}
			else:
			{
				cout << "Nenhuma dessas opcoes esta disponivel no momento, por favor insira uma das opcoes (l\L, m\M, n\N, o\O, p\P, q\Q, r\R)";
			}
		}
	}	cout << "\nFila\n:" << queue.values << "\n";
	cout << "\n Fim do programa \n";
}

