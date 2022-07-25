#include "StaticQueueS.h"
//criando a pilha com ideia de uma fila
StaticQueueS Create()
{
	StaticQueueS queue = { 0, { 0 } };
	return queue;
}
//Adiciona valores na pilha retornando true, quando é possível
bool Enqueue(StaticQueueS& queue, char valor)
{
	if (queue.current == STATIC_QUEUES_CAPACITY)
	{
		return false;
	}

	queue.values[queue.current] = valor;
	++queue.current;

	return true;
}
//Se a pilha não estiver vazia
bool IsEmpty(const StaticQueueS& queue)
{
	return queue.current == 0;
}
//A pilha sempre retira o valor mais novo inserido/ ultimo valor , ja a fila retira o valor mais velho/primeiro valor, então para isso utilizamos 
// um Dequeue para criar uma pilha auxiliar sendo que na teoria a pilha é meio q tombada sendo que os valores ficam todos trocados, por exemplo:
//3/2/1, com a pilha auxiliar mudará a pilha principal da seguinte forma : 1/2/3
// Retirando então o ultimo valor da fila auxiliar e retornando todo o resto dos valores que não foram retirados para a pilha principal
// Sendo assim, retornamos o valor que foi retirado da fila auxiliar
char Dequeue(StaticQueueS& queue)
{
	int loop;
	StaticQueueS aux = Create();
	if (IsEmpty(queue))
	{
		return '\0';
	}

	loop = queue.current;

	for (int i = 0; i < loop; i++)
	{
		Enqueue(aux, queue.values[queue.current - 1]);
		queue.values[queue.current - 1] = '\0';
		--queue.current;
	}

	char valor = aux.values[aux.current - 1];
	aux.values[aux.current - 1] = '\0';
	--aux.current;

	loop = aux.current;

	for (int i = 0; i < loop; i++)
	{
		Enqueue(queue, aux.values[aux.current - 1]);
		aux.values[aux.current - 1] = '\0';
		--aux.current;
	}

	return valor;
}

// Utilizamos o Front, para retornarmos o primeiro valor, no caso o valor que será retornado;
// Neste caso o foco não será retornar os valores que estavam na pilha auxiliar e sim apenas retornar o primeiro elemento ;
char Front(StaticQueueS& queue)
{
	int loop;
	StaticQueueS aux = Create();
	if (IsEmpty(queue))
	{
		return '\0';
	}

	loop = queue.current;

	for (int i = 0; i < loop; i++)
	{
		Enqueue(aux, queue.values[queue.current - 1]);
		queue.values[queue.current - 1] = '\0';
		--queue.current;
	}

	char valor = aux.values[aux.current - 1];

	loop = aux.current;

	for (int i = 0; i < loop; i++)
	{
		Enqueue(queue, aux.values[aux.current - 1]);
		aux.values[aux.current - 1] = '\0';
		--aux.current;
	}

	return valor;
}
// Retorna o tamanho de que esta sendo usado na pilha, ou seja, quantos elementos tem na fila;
int Count(const StaticQueueS& queue)
{
	return queue.current;
}
// Retorna o tamanho da queue(fila);
int Size(const StaticQueueS& queue)
{
	return sizeof(queue.values) / sizeof(queue.values[0]);
}
// Neste caso a pilha esta sendo clear(zerada/resetada) retornando true caso seja realizado;
bool Clear(StaticQueueS& queue)
{
	while (!IsEmpty(queue))
	{
		Dequeue(queue);
	}
	return true;
}