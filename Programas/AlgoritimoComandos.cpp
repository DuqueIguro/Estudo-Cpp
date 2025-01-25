/*
	1.Gerar um algoritmo que receba uma lista de nomes e converta em um comando de minecraft que faça a atribuição da permissão de uso de modelos.
	
	2.Gerar um algoritmo que receba uma lista de nomes e converta em um comando de minecraft que faça a remoção da permissão de socorrista.
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

// Função para ler nomes separados por vírgulas
void lerNicks(string nicks[], int &i) {
    cout << "Digite os nomes das pessoas que quer adicionar a permissão (separados por vírgulas e sem espaços): ";
    
    string linha;
    
    getline(cin, linha); // Lê a linha inteira de entrada

    stringstream ss(linha); // Cria uma caixa (stringstream) com a string linha dentro.
    
    string nome;
    
    while (getline(ss, nome, ',')) { // Separa os nomes com base nas vírgulas e armazena cada nome no array 'nicks'
        if (i < 50) {
            nicks[i] = nome;
            i++;
        } 
		else {
            break;
        }
    }
}

int main() {
    SetConsoleOutputCP(CP_UTF8);

    string nicks[50], escolha;
    int i = 0;
    bool continuar = true;

    puts("---------------------------------------------- ");
    puts("\n");
    puts(" - Pressione 1 caso deseje gerar comandos de remoção de permissão de socorrista.\n");
    puts(" - Pressione 2 caso deseje gerar comandos de atribuição de permissão de modelo.\n");
    puts(" - Digite 'exit' para sair.");
    puts("\n");
    puts("---------------------------------------------- ");

    cout << "Digite a opção desejada ou 'exit' para sair: "; 
    cin >> escolha; 

    if (escolha == "exit") { // Verifica se o usuário deseja sair
        return 0; 
    }

    if (escolha == "1"){ // Socorrista
        lerNicks(nicks, i); // Chama a função para ler os nomes
        for (int j = 0; j < i; j++) {
            cout << "/lp user " << nicks[j] << " parent remove socorrista" << endl;
        }
    } 
    else if (escolha == "2"){ // Modelo
        // Adicione a lógica para a opção 2 aqui
    } 
    else {
        cout << "Opção inválida!" << endl;
    }

    return 0;
}
