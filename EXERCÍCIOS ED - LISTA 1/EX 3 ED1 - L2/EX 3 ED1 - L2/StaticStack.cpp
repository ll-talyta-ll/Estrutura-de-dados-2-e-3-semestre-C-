#include "StaticStack.h"

//Create()
//Cria e retorna uma pilha vazia.
//
//Pr� - condi��o : N / A.
//P�s - condi��o : Uma nova pilha vazia � criada.
StaticStack Create()
{
	//struct StaticStack
	//{
	//	int current;
	//	char values[STATIC_STACK_CAPACITY];
	//};

	StaticStack stack = { 0, { 0 } };
	return stack;
}

//Push(stack, elem)
//Insere o elemento elem no topo da pilha stack.
//
//Pr� - condi��o: A pilha stack � v�lida.
//P�s - condi��o : O topo da pilha cont�m o elemento elem OU erro se a pilha estiver cheia.
bool Push(StaticStack& stack, char elem)
{
	/*
		Vetor:
		[0][1][2][3]

		Pilha usando vetores:

							   [3] --> stack.current
						 [2]   [2]
				   [1]   [1]   [1]
		___ _[0]_ _[0]_ _[0]_ _[0]_
			   stack.values
	*/

	// O que fazer quando chegar no limite da pilha? (Erro)
	if (stack.current == STATIC_STACK_CAPACITY)
	{
		return false;
	}

	stack.values[stack.current] = elem;
	++stack.current;

	return true;
}

//Pop(stack)
//Remove o elemento do topo da pilha stack, se a pilha n�o estiver vazia.
//
//Pr� - condi��o: A pilha stack � v�lida.
//P�s - condi��o : Remove e retorna o elemento do topo da pilha OU erro se pilha estiver vazia.
char Pop(StaticStack& stack)
{
	if (IsEmpty(stack))
	{
		return '\0';
	}

	char elem = stack.values[stack.current - 1];
	stack.values[stack.current - 1] = '\0';
	--stack.current;

	return elem;
}

//Top(stack)
//Retorna uma refer�ncia do elemento que est� no topo da pilha(mas n�o o remove), se a pilha n�o estiver vazia.
//
//Pr� - condi��o : A pilha stack � v�lida.
//P�s - condi��o : Retorna o elemento do topo da pilha, sem remov� - lo OU erro se pilha estiver vazia.
char Top(const StaticStack& stack)
{
	if (IsEmpty(stack))
	{
		// O que fazer quando a pilha estiver vazia? (Erro).
		return '\0';
	}

	return stack.values[stack.current - 1];
}

//Size(stack)
//Retorna a capacidade da pilha.
//
//Pr� - condi��o : A pilha stack � v�lida.
//P�s - condi��o : N / A.
int Size(const StaticStack& stack)
{
	return sizeof(stack.values) / sizeof(stack.values[0]);
}

//Count(stack)
//Retorna a quantidade de elementos na pilha.
//
//Pr� - condi��o : A pilha stack � v�lida.
//P�s - condi��o : N / A.
int Count(const StaticStack& stack)
{
	return stack.current;
}

//IsEmpty(stack)
//Retorna true se a pilha estiver vazia ou falso, caso contr�rio.
//
//Pr� - condi��o : A pilha stack � v�lida.
//P�s - condi��o : N / A.
bool IsEmpty(const StaticStack& stack)
{
	return stack.current == 0;
}

//Clear(stack)
//Esvazia a pilha(remove todos os elementos da pilha).
//
//Pr� - condi��o : A pilha stack � v�lida.
//P�s - condi��o : A pilha stack est� vazia.
bool Clear(StaticStack& stack)
{
	while (!IsEmpty(stack))
	{
		Pop(stack);
	}

	return IsEmpty(stack);
}