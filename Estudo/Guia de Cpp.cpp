#include <stdio.h> // Inclui a biblioteca padrão de entrada e saída em C
#include <iostream> // Inclui a biblioteca padrão de entrada e saída em C++
#include <algorithm> // Inclui algoritmos padrão como sort, find, etc.
#include <fstream> // Inclui operações de leitura e escrita em arquivos
#include <functional> // Inclui objetos de função e funções de alta ordem
#include <locale> // Inclui suporte para internacionalização e localização
#include <map> // Inclui o contêiner de mapa associativo (dicionário)
#include <set> // Inclui o contêiner de conjunto (set)
#include <sstream> // Inclui operações de string stream
#include <string> // Inclui a biblioteca para manipulação de strings
#include <vector> // Inclui o contêiner de vetor (array dinâmico)
#include <cmath> // Inclui funções matemáticas padrão
#include <Windows.h> // Inclui a biblioteca para funções específicas do Windows

using namespace std;

/* Definir uma constante
#define <variavel>  <valor>;
*/ 

#define bestIguro cout << "O the best Iguro é o Duque Iguro.\n" << endl;

int testeG; // Variavel Global

// Função para ler nomes
void lerNicks(string nicks[], int &i) { // Função que não retorna nenhum parametro
    cout << "Digite os nomes das pessoas que quer adicionar a permissão (Digite 'ENCERRAR' para terminar): ";
    while (i < 50) {
        string nome;
        cin >> nome;
        if (nome == "ENCERRAR") {
            break;
        }
        nicks[i] = nome;
        i++;
    }
}

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
        - Pré-Fixado(++var --var) = Incrementa antes de exibir o valor
        - Pós-Fixado(var++ var--) = Incrementa depois de exibir o valor
    */
    
    /* Explicação sobre getline e stringstream 
		- getline = é usada para ler uma linha inteira de entrada, incluindo espaços em branco.
		- stringstream = permite a manipulação de strings como fluxos de dados. Ela pode ser usada para separar uma string em partes menores com base em um delimitador.
	*/
 
    /* Questionario 
	    cout << "Digite um numero: ";
	    cin >> num;
	    cout << "Digite uma Letra: ";
	    cin >> letra;
	    cout << "Digite um numero decimal: ";
	    cin >> quebrado;
	    cout << "Digite o nome do melhor Iguro existente: ";
	    cin >> text; 
	*/
    
    /* Respostas
	    cout << "\nImprimindo valor das variavies:" << endl;
	    cout << "Num = " << num << endl;
	    cout << "Letra = " << letra << endl;
	    cout << "Quebrado = " << quebrado << endl;
	    cout << "Quebrado 2 = " << quebrado2 << endl;
	    cout << "Verdadeiro ou Falso = " << vf << endl;
	    cout << "Texto = " << text << endl; 
	*/
    
    system("cls"); // Limpa o terminal durante a execução do progama

    // Exemplo de uso de referência
    int a = 10;
    int &refA = a; // refA é uma referência para a variável a
    refA++; // Incrementa o valor de a através da referência
    cout << "Valor de a: " << a << endl; // Saída: Valor de a: 11

    return 0; 
}


