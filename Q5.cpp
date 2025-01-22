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
	int num1, num2, sum;
	
	// Perguntas
	cout << "Digite um numero inteiro: ";
	cin >> num1;
	cout << "Digite outro numero inteiro: ";
	cin >> num2;
	
	// Calculos
	sum = num1 + num2;
	
	// Respostas
	cout << "a) A soma dos números é " << sum << endl;
	cout << "b) O produto do primeiro número pelo quadrado do segundo é " << sum << endl;
	cout << "c) O quadrado do primeiro número " << sum << endl;
	cout << "d) A raiz quadrada da soma dos quadrados " << sum << endl;
	cout << "e) O seno da diferença do primeiro número pelo segundo é " << sum << endl;
	cout << "f) O módulo do primeiro número é " << sum << endl;
	
	return 0;
}