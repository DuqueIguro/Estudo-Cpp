// Fazer um programa em C++ que pergunte um valor em graus Fahrenheit e imprime no vídeo o correspondente em graus Celsius usando as fórmulas que seguem.

// A) Usar uma variável double para ler o valor em Fahrenheit e a fórmula C=(f-32.0) * (5.0/9.0).
// B) Usar uma variável int para ler o valor em Fahrenheit e a fórmula C=(f-32)*(5/9).

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

int main() {

	double f, c;

	cout << "Digite uma temperatura em F°: ";
	cin >> f;
	
	c = (f-32.0) * (5.0/9.0); // Converte Fahrenheit em Celsius
	int C = c; // Converte numero decimal em inteiro
	
	cout << f << "° equivalem a " << c << "°\n Ou aproximadamente " << C << "°" << endl;

	return 0;
}