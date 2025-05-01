/* Desafio do curso de C++
	Criar um jogo de forca usando matrizes
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
    cout << " Deseja jogar novamente? [s/n] ";
    cin >> reset;

    if (reset == 's' || reset == 'S') {
        system("cls");
        return true; 
    }
    return false; 
}

int main(){
	SetConsoleOutputCP(CP_UTF8);
	
	char palavra[30], letra[1], secreta[30];
	int tam, i, chances, acertos;
	bool acerto;
	
	chances = 6;
	tam = 0;
	i = 0;
	acerto = false;
	acertos = 0;
	
	inicio:
		
	cout << "Digite a palavra secreta da forca(PLAYER 1): ";
	cin >> palavra;
	
	system("cls");
	
	while(palavra[i] != '\0'){
		i++;
		tam++;
	}
	
	for(i=0; i<30; i++){
		
		secreta[i] = '-';
		
	}
	
	while((chances > 0) && (acertos < tam)){
		
		puts("---------------------------------------------- ");
		cout << "Chances restantes: " << chances << "\n" << endl;
		puts("\n----------------------------------------------\n\n");
		
		for(i = 0; i<tam; i++){	
			
			cout << secreta[i];	
		}	
		
		cout << "\n\nDigite uma letra(PLAYER 2):";
		cin >> letra[0];
		for(i = 0; i < tam; i++){
			
			if(palavra[i] == letra[0]){
				acerto = true;
				secreta[i] = palavra[i];
				acertos++;
			}
			
		}
		
		if(!acerto) {
			chances--;
		}
		
		acerto = false;
		system("cls");
	}
	
	if(acertos == tam){
		
		puts("Você venceu!!");
		
	} else{
		puts("Você Perdeu meu mano!!");
	}
	
	desejaContinuar();
	return 0;
}

/*
	Author: DuqueIguro
	Date: 01/05/25
	Description: Um jogo da forca com laços de repetição e matrizes.
*/
