/* Quest√£o 3 do Grupo II
	Fazer um programa em "C" que l√™ o pre√ßo de um produto e inflaciona esse pre√ßo em 10% se ele for menor que 100 e em 20% se ele for maior ou igual a 100.

    OBS: n√£o use o comando "if" ou o operador de condi√ß√£o "?".
*/

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

char reset;

bool desejaContinuar(char) {
    cout << " Deseja inserir mais valores? [s/n]? ";
    cin >> reset;

    if (reset == 's' || reset == 'S') {
        system("cls");
        return true; // Usu√°rio deseja continuar
    }
    return false; // Usu√°rio n√£o deseja continuar
}

int main(){
    SetConsoleOutputCP(CP_UTF8);
	
    float preco;
	
	inicio:
	
    cout << "Informe o preÁo do produto: ";
    cin >> preco;


	//                  Verificador de condiÁ„o
    int ajuste = (preco < 100) * 10 + (preco >= 100) * 20;  // Definindo o percentual com base na condiÁ„o

	//          1 + 0.1 ou 0.2
    preco *= (1 + ajuste / 100.0);  // Inflacionando o preÁo

    cout << "O preÁo apÛs o ajuste fica de R$" << preco << endl;
    
    if (desejaContinuar(reset)) {
        goto inicio;
    };

    return 0;
}

