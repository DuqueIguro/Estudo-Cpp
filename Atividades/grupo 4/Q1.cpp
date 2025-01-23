// Fazer uma função que cacula a enésima potência de uma variável real x: f(x, n) = pow(x, n)

#include <stdio.h>
#include <iostream>
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

int main(){
	SetConsoleOutputCP(CP_UTF8);

	double f;
	int x, n;
	
	cout << "Digite o produto:";
	cin >> x;
	cout << "Digite a potencia:";
	cin >> n;
	
	f = pow(x, n);
	cout << "A enésima potência do produto (" << x << ")" << "é de: " << f << endl;

	return 0;
}