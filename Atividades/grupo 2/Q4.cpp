/* Questão 4 do Grupo II
	Fazer um programa que lê um valor, um operador (+,-,*,/) e outro valor e imprime o resultado da expressão:
    <valor 1> <operador> <valor 2>
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

bool desejaContinuar(void) {
    cout << " Deseja calcular outra operação? [s/n] ";
    cin >> reset;

    if (reset == 's' || reset == 'S') {
        system("cls");
        return true; 
    }
    return false; 
}

int main(){
	SetConsoleOutputCP(CP_UTF8);
	
    int n1, n2;
    double resultado;
    char operador;

    inicio:

    cout << "Insira um valor: ";
    cin >> n1;

    cout << "Insira o operador(+,-,*,/): ";
    cin >> operador;

    cout << "Insira outro valor: ";
    cin >> n2;
    
    if (operador == '+'){
    	
    	resultado = n1 + n2;
    	
    	printf ("A soma dos valores �: %.2f", resultado);
		
		puts("\n");
		
		if (desejaContinuar()) {
            goto inicio;
        }	
	} 
	else if (operador == '-'){
    	
    	resultado = n1 - n2;
    	
    	printf ("A subtra��o dos valores �: %.2f", resultado);
    	
    	puts("\n");
    	
    	if (desejaContinuar()) {
            goto inicio;
        }	
	}
	
	else if (operador == '*'){
    	
    	resultado = n1 * n2;
    	
    	printf ("A multiplica��o dos valores �: %.2f", resultado);
    	
    	puts("\n");
    	
    	if (desejaContinuar()) {
            goto inicio;
        }	
	}
	
	else if (operador == '/'){
    	
    	if (n1 == 0 or n2 == 0){	
    		puts("Divis�o por 0, porfavor digite um valor valido");	

			puts("\n");

            if (desejaContinuar()) {
                goto inicio;
            }
		} 
		else {
			resultado = n1 / n2;
			
    		printf ("A divis�o dos valores �: %.2f", resultado);
    		
    		puts("\n");
    		
    		if (desejaContinuar()) {
                goto inicio;
            }
		}
	}


	return 0;
}
