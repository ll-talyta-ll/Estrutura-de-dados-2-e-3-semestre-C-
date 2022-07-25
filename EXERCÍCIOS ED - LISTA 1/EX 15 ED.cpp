// Aluna: Talyta Scaramuzzo --- TIA: 32079915

//15. Dois círculos se sobrepõem (colidem) se a soma dos seus raios é maior que ou
//igual a distância entre seus centros.A distância entre dois pontos pode ser
//calculada usando o teorema de Pitágoras(c = √𝑎 2 + 𝑏2).Escreva uma função
//AreCirclesColliding() que recebe seis parâmetros : a posição p1(x, y) e o raio r1 do
//primeiro círculo e a posição p2(x, y) e o raio r2 do segundo círculo.Com os
//parâmetros informados, a função deve retornar true caso os círculos estejam
//sobrepostos ou false caso contrário.

#include <iostream>
#include<cmath>
using namespace std;

bool AreCirclesColliding(float pX1, float pY1, float r1, float pX2, float pY2, float r2) {
	float distanciaP1, distanciaP2, somadistanciasp1p2, somaraios;
	distanciaP1 = sqrt(pow(pX1, 2) + pow(pY1, 2));
	distanciaP2 = sqrt(pow(pX2, 2) + pow(pY2, 2));
	somadistanciasp1p2 = distanciaP1 + distanciaP2;
	somaraios = r1 + r2;

	if (somaraios <= somadistanciasp1p2) {
		return false; // neste caso irá retornar 0
	}
	else
	{
		return true; //neste caso irá retornar 1 
	}

}

int main()
{
	float pX1, pY1, r1, pX2, pY2, r2;
	cout << "X1=";
	cin >> pX1;
	cout << "Y1=";
	cin >> pY1;
	cout << "Raio do 1- circulo=";
	cin >> r1;
	cout << "X2=";
	cin >> pX2;
	cout << "Y2=";
	cin >> pY2;
	cout << "Raio do 2- circulo=";
	cin >> r2;

	bool result = AreCirclesColliding(pX1, pY1, r1, pX2, pY2, r2);
	cout << result; // ira printar false(0) ou true(1)




}
