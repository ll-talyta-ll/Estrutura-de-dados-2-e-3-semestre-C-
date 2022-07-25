// Aluna: Talyta Scaramuzzo --- TIA: 32079915
#include <iostream>
#include "StaticStack.h"
#include <string>

using namespace std;

int main()
{
    string n;
    int chav = 0, col = 0, pare = 0, maior = 0, v;
    char caracter;
    bool verificacao = false, errochav = false, erropare = false, errocol = false, erromaior = false;
    StaticStack stack = Create();
    getline(cin,n);
 
    for (int i = 0; i < n.length(); ++i)
    {
        if (n[i] == '{' || n[i] == '}' || n[i] == '(' || n[i] == ')' || n[i] == '[' || n[i] == ']' || n[i] == '<' || n[i] == '>')
        {
            Push(stack, n[i]);
        }
    }

    cout << stack.values << "\n";

    v = Count(stack);

    for (int i = 0; i < v; ++i)
    {
        caracter= Pop(stack);

        if (caracter == ']')
        {
            col = col + 1;
        }
        if (caracter == '}')
        {
            chav = chav + 1;
        }

        if (caracter == '>')
        {
            maior = maior + 1;
        }
        if (caracter == ')')
        {
            pare = pare + 1;
        }

        if (caracter == '[')
        {
            col = col - 1;

            if (col < 0)
            {
                errocol = true;
            }
        }
        if (caracter == '{')
        {
            chav = chav - 1;

            if (chav < 0)
            {
                errochav = true;
            }
        }

        if (caracter == '<')
        {
            maior = maior - 1;

            if (maior < 0)
            {
                erromaior = true;
            }
        }
        if (caracter == '(')
        {
            pare = pare - 1;

            if (pare < 0)
            {
                erropare = true;
            }
        }
    }

    if (errochav == false && errocol == false && erropare == false && erromaior == false)
    {
        if (maior == 0 && pare == 0 && col == 0 && chav == 0)
        {
            verificacao = true;
        }
    }

    cout << "Se for printado o valor= 1 significara que esta 'ok', caso seja printado o valor = 0 significara que apresenta erro," << "\n" << "O valor printado e= " << "\n" << verificacao;
}

