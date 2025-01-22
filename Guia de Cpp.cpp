#include <stdio.h>
#include <iostream> // In e Out > Entrada e saida de dados
#include <algorithm>
#include <fstream>
#include <functional>
#include <locale>
#include <map>
#include <set>
#include <sstream>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

#define bestIguro cout << "O the best Iguro é o Duque Iguro.\n" << endl;

int main() {

	// cout = Saida de Informação.
	// cin = Entrada de Informação.
	//endl = \n no final da linha.
	
	cout << " Duque \n Iguro\n" << endl;
	
	system("pause"); // Pausa a execução do progama, fazendo com que seja necessario que o usuário aperte alguma tecla para continuar.

	int num = 0; // Variavél de tipo numerico inteiro. > 18
	char letra = 'D'; // Variavél de tipo caracter unico. > 'B'
	char letras[20]; // Variavél de tipo Vetor, que comporta até 20 caracteres.
	double quebrado = 2.49; // Variavél de tipo numerico decimal. > 5.8999999999
	float quebrado2 = 2.5; // Variavél de tipo numerico decimal, com menos precisão, ou seja ele suporta menos casas decimais. > 5.9
	bool vf = true; // Variavél de tipo boleano(verdadeiro ou falso). > false
	string text = "Duque e o melhor Iguro que tem."; // Variavél do tipo texto. > "Pão de batata"
	
	bestIguro;

	// Questionario	
	cout << "Digite um numero: ";
	cin >> num;
	cout << "Digite uma Letra: ";
	cin >> letra;
	cout << "Digite um numero decimal: ";
	cin >> quebrado;
	cout << "Digite o nome do melhor Iguro existente: ";
	cin >> text;
	
	// Respostas
	cout << "\nImprimindo valor das variavies:" << endl;
	cout << "Num = " << num << endl;
	cout << "Letra = " << letra << endl;
	cout << "Quebrado = " << quebrado << endl;
	cout << "Quebrado 2 = " << quebrado2 << endl;
	cout << "Verdadeiro ou Falso = " << vf << endl;
	cout << "Texto = " << text << endl;

	return 0; // Encerra a função.
}