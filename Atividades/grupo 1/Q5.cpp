// Fazer um programa em C++  que solicite 2 números e informe:
// a) A soma dos números;
// b) O produto do primeiro número pelo quadrado do segundo;
// c) O quadrado do primeiro número;
// d) A raiz quadrada da soma dos quadrados;
// e) O seno da diferença do primeiro número pelo segundo;
// f) O módulo do primeiro número.

#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <fstream>
#include <functional>
#include <iostream>
#include <locale>
#include <map>
#include <set>
#include <sstream>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

int main(){
	
	// Variavéis
	int num1, num2, sum, qua1, qua2, produto, sumQuadrados, modulo;
	double raiz;
	
	// Perguntas
	cout << "Digite um numero inteiro: ";
	cin >> num1;
	cout << "Digite outro numero inteiro: ";
	cin >> num2;
	
	// Calculos
	sum = num1 + num2; // Soma dos Numeros
	qua1 = num1 * num1; // Quadrado do primeiro
	qua2 = num2 * num2; // Quadrado do segundo
	produto = num1 + pow(num2, 2); // O produto do primeiro número pelo quadrado do segundo
	sumQuadrados = qua1 + qua2; // Soma dos quadrados
	raiz = sqrt(sumQuadrados); // Raiz quadrada 
	
	if ( num1 < 0) { // Verifica se o Numero 1 é menor que 0
		modulo = num1 * (-1); // Se sim, mutiplica por -1	
	} 
	else {
		modulo = num1; // Se não, imprime
	}
	
	// Respostas
	cout << "a) A soma dos numeros e " << sum << endl; // OK
	cout << "b) O produto do primeiro numero pelo quadrado do segundo e " << produto << endl; //OK
	cout << "c) O quadrado do primeiro numero " << qua1 << endl; //OK
	cout << "d) A raiz quadrada da soma dos quadrados " << raiz << endl; // OK
	cout << "e) O seno da diferença do primeiro numero pelo segundo e " << "[ERROR]" << endl;
	cout << "f) O modulo do primeiro numero e " << modulo << endl;
	
	return 0;
}