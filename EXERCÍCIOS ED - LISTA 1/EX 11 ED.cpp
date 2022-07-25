//Aluna: Talyta Scaramuzzo --- TIA: 32079915

// EX 11 ED.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//11. Escreva uma função MulViaAdd() que recebe dois números como parâmetros. O
//primeiro parâmetro pode ser um número real e o segundo parâmetro deve ser um
//número inteiro.A função deve retornar a multiplicação entre os parâmetros,
//porém, a multiplicação deve ser feita usando apenas a operação de adição.


#include <iostream>

using namespace std;

void MultUsingAdd()
{
    int z, cont;
    float n, result;
    std::cout << "Digite dois numeros:""\n";
    std::cin >> z;
    std::cin >> n;
    result = 0;

    if (z < 0)
    {
        z = z*-1;
        for (int i = 0; i < z; ++i)
        {
            result = result + n;
        }
        result = result * -1;

    }
    else
    {
        for (cont = 0; cont < z; cont++)
        {
            result += n;
        }
    }
    printf("valor da variavel da multiplicacao a ser realizada : ");
    std::cout << z << "\n" << "quantidade de vezes somados:"<<" "<< n << "\n" << "Resultado da multiplicacao(realizado por meio da soma)="<< " " << result << "\n";
}

int main()
{
    setlocale(LC_ALL, "");
    MultUsingAdd();


    return 0;
}
   
    


