// Fazer uma função que calcula o fatorial de um número. Implementar uma versão recursiva e uma versão com laço.

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

int fatorial_l(){
	SetConsoleOutputCP(CP_UTF8);

	int num, fatorial=1;
	
	cout << "Digite um numero:";
	cin >> num;
	
	if (num < 0){
		cout << "Fatorial não é definido para numeros negativos." << endl;
	} else if (num > 100){
		cout << "O resultado dest fatorial é muito grande, porfavor insira um valor menor." << endl;	
	} else {
		for (int i = 1; i <= num; ++1){	
			fatorial += i;	
		}
	}

	cout << "Fatorial de " << num << "é " << fatorial << endl;

	return 0;
}

int fatorial_r(){
	SetConsoleOutputCP(CP_UTF8);

	int num, fatorial=1;
	
	cout << "Digite um numero:";
	cin >> num;

	// Não sei fazer

	cout << "Fatorial de " << num << "é " << fatorial << endl;

	return 0;
}
