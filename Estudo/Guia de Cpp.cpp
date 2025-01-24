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
#include <Windows.h>

using namespace std;

/* Definir uma constante
#define <variavel>  <valor>;
*/ 

#define bestIguro cout << "O the best Iguro é o Duque Iguro.\n" << endl;

int testeG; // Variavel Global

int main() {

	/* Entrada e Saída de dados
		cout = Saida de Informação.
		cin = Entrada de Informação.
		endl = \n no final da linha.
		puts = Saida de Informação sem variavél
		printf = Saida de Informação com variavél
	*/
	
	SetConsoleOutputCP(CP_UTF8); // Implementa o alfabeto brasieliro, fazendo com que o programa consiga ler o acentos e cedilha
	
	cout << " Duque \n Iguro\n" << endl;
	
	system("pause"); // Pausa a execução do progama, fazendo com que seja necessario que o usuário aperte alguma tecla para continuar.

	int testeL; // Variavel Local

	int num = 0; // Variavél de tipo numerico inteiro. > 18
	char letra = 'D'; // Variavél de tipo caracter unico. > 'B'
	char letras[20]; // Variavél de tipo Vetor, que comporta até 20 caracteres.
	double quebrado = 2.49; // Variavél de tipo numerico decimal. > 5.8999999999
	float quebrado2 = 2.5; // Variavél de tipo numerico decimal, com menos precisão, ou seja ele suporta menos casas decimais. > 5.9
	bool vf = true; // Variavél de tipo boleano(verdadeiro ou falso). > false
	string text = "Duque e o melhor Iguro que tem."; // Variavél do tipo texto. > "Pão de batata"
	
	bestIguro;
	
	/* Pré e Pos Fixado
	 	Pré-Fixado(++var --var) = Incrementa antes de exibir o valor
		Pós-Fixado(var++ var--) = Incrementa depois de exibir o valor
	*/
 
	/* Questionario	
	cout << "Digite um numero: ";
	cin >> num;
	cout << "Digite uma Letra: ";
	cin >> letra;
	cout << "Digite um numero decimal: ";
	cin >> quebrado;
	cout << "Digite o nome do melhor Iguro existente: ";
	cin >> text; */
	
	/* Respostas
	cout << "\nImprimindo valor das variavies:" << endl;
	cout << "Num = " << num << endl;
	cout << "Letra = " << letra << endl;
	cout << "Quebrado = " << quebrado << endl;
	cout << "Quebrado 2 = " << quebrado2 << endl;
	cout << "Verdadeiro ou Falso = " << vf << endl;
	cout << "Texto = " << text << endl; */
	
	system("cls"); // Limpa o terminal durante a execução do progama

	return 0; // Retorna o valor 0 ao fim da execução do programa
}