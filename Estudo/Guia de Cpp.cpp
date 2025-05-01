// Bibliotecas
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

using namespace std; // Evita o uso de std:: ao decorrer das linhas de entrada e saidas de dados presentes no codigo

// Definições de constantes
#define bestIguro cout << "O melhor Iguro é o Duque Iguro.\n" << endl;

// Declaração de variáveis globais
int testeG; 

// Função para demonstrar conceitos de variáveis
void demonstrarVariaveis() {
    SetConsoleOutputCP(CP_UTF8); // Permite o uso de caracteres acentuados
	
	int num = 0; // Numérico inteiro
    char letra = 'D'; // Caractere único
    double quebrado = 2.49; // Número decimal
    float quebrado2 = 2.5; // Número decimal com menor precisão
    bool vf = true; // Booleano (verdadeiro ou falso)
    string text = "Duque é o melhor Iguro que tem."; // Texto

    cout << "\nValores das variáveis:" << endl;
    cout << "Num = " << num << endl;
    cout << "Letra = " << letra << endl;
    cout << "Quebrado = " << quebrado << endl;
    cout << "Quebrado 2 = " << quebrado2 << endl;
    cout << "Verdadeiro ou Falso = " << vf << endl;
    cout << "Texto = " << text << endl;
}

// Função para demonstrar pré e pós-fixado
void demonstrarIncremento() {
    int var = 10;

    cout << "\nExemplo de Pré e Pós-fixado:" << endl;
    cout << "Valor inicial: " << var << endl;
    
    cout << "Pré-fixado (++var): " << ++var << endl; // Incrementa antes de exibir.
    
    var--;
    
    cout << "Pós-fixado (var++): " << var++ << endl; // Exibe antes de incrementar.
    
    cout << "Valor final após incremento pós-fixado: " << var << endl;
    
    // Válido dizer que o mesmo se aplica para decremento.
}

// Função para demonstrar getline e stringstream
/* [Está dando erro]
	void demonstrarStringManipulacao() {
	
	// Explicação sobre getline e stringstream 
		getline = é usada para ler uma linha inteira de entrada, incluindo espaços em branco. 
		stringstream = permite a manipulação de strings como fluxos de dados. Ela pode ser usada para separar uma string em partes menores com base em um delimitador. 
	
    string entrada;
    cout << "\nDigite uma frase completa: ";
    cin.ignore(); // Garante que não haja resíduos no buffer do cin
    getline(cin, entrada);

    stringstream ss(entrada);
    string palavra;
    
    cout << "\nPalavras separadas usando stringstream:" << endl;
    while (ss >> palavra) {
        cout << palavra << endl;
    }
} 
*/

// Função para demonstrar uso de referências
void demonstrarReferencias() {
    int a = 30;
    int& refA = a; // Referência à variável a
    refA++; // Incrementa o valor de a através da referência
    puts("---------------------------------------------- ");
    puts("\n");
	cout << "\nValor de a após incremento via referência: " << a << endl;
    puts("\n");
    puts("---------------------------------------------- ");
}

// Função para demonstrar Operadores condicionais
void demonstrarOperacoesCondicionais(){
	
	/* Explicação das operações condicionais.
		AND / && / E = Verdadeiro ou Falso (True or False)
		- Ambas as condições devem ser verdadeiras.
		
		OR / || / OU = Verdadeiro ou Falso (True or False)
		- Apenas uma das condições precisa ser verdadeira.
		
		! = Negação
		- Exemplo: if(!var){ = Se var NÃO é verdadeiro ...
	*/
	
	int num;
	
	num = 22;
	
	if(num > 10 and num < 21 ){	
		puts("---------------------------------------------- ");
        puts("\n");
		cout << "Valor Aceito. AND" << endl;
		puts("\n");
        puts("---------------------------------------------- ");			
	} else {	
		puts("---------------------------------------------- ");
        puts("\n");
		cout << "Valor não Aceito. AND" << endl;
		puts("\n");
        puts("---------------------------------------------- ");    
	}
	
	if(num > 10 or num < 21 ){	
		puts("---------------------------------------------- ");
        puts("\n");
		cout << "Valor Aceito. OR" << endl;	
		puts("\n");
        puts("---------------------------------------------- ");
    } else {
		puts("---------------------------------------------- ");
        puts("\n");
		cout << "Valor não Aceito. OR" << endl;
		puts("\n");
        puts("---------------------------------------------- ");    
	}

	/* Válido ressaltar que é possivel usar os dois verificadores em uma mesma verificação, exemplo:
	
		if ( (num > XX AND num < YY) OR (num > AA AND num < BB) ) {
		
		...
		
		}
		
	*/

}

// Função para demonstrar Operadores ternarios
void demonstrarOperadoresTernarios(){
	
	SetConsoleOutputCP(CP_UTF8); // Permite o uso de caracteres acentuados
	
	/* (expressão) ? valorSePositivo : valorSeNegativo;  
		Neste caso o ? serve como um verificador de se.
	*/
	
	int n1,n2,nota;
	string res;
	
	cout << "Digite a primeira nota: ";
	cin >> n1;
	cout << "Digite a segunda nota: ";
	cin >> n2;
	
	nota = n1 + n2;

	// Dessa forma a verficação acontece de forma semelhante ao SE usado em planilhas, poupando algumas linhas de codigo.
	res = (nota >= 60) ? "--------------------------------\nAprovado\n--------------------------------": res="--------------------------------\nReprovado\n--------------------------------";
	
	cout << "\nSituação do aluno:\n" << res;
	
	/* Mas a verificação também pode ser feita para incrementar ou decrementar valores variavéis
	int b1, x;
	
	x = 5;
	
	cout << "Digite um valor: ";
	cin >> b1;
	
	(n1 >= 10) ? x++  : x--;
	
	cout << "Novo valor de X: " << x << endl;
	*/
	
}

// Função para demonstrar utilização do Switch case
void demonstrarSwitch(){
	
	int val;
	
	puts ("[1] Preto, \n[2] Roxo, \n[3] Verde Escuro");
	cout << "Selecione uma cores acima: ";
	cin >> val;

	switch(val){
	
		// Cada caso funciona como se fosse um if isolado ao inves de um grande ciclo de elseif's.
		// O default é acionado se nenhum dos casos for verdadeiro, encerrando o switch após sua execução.
	
		case 1:
			puts ("Simplesmente a melhor cor #TEAMBLACK");
			break;
			
		case 2:
			puts ("Simplesmente a Galaxia #TEAMGALAXY");
			break;
			
		case 3:
			puts ("Simplesmente os Iguro #TEAMIGURO");
			break;
			
		default:
			puts ("Randola para kct.");
	}
}

// Função Principal
int main() {
	/* Entrada e Saída de dados 
		cout = Saida de Informação. 
		cin = Entrada de Informação. 
		endl = \n no final da linha. 
		puts = Saida de Informação sem variavél 
		printf = Saida de Informação com variavél 
	*/

    // Exibição de mensagem inicial
    cout << "Duque \nIguro\n" << endl;
    bestIguro;

    // Execução das funções de demonstração
    demonstrarVariaveis();
    demonstrarIncremento();
    //FUNÇÃO COM ERRO -> demonstrarStringManipulacao();
    demonstrarReferencias();
    demonstrarOperacoesCondicionais();
    demonstrarOperadoresTernarios();
    demonstrarSwitch();

    system("pause"); // Aguarda entrada do usuário para continuar
    system("cls"); // Limpa o terminal

    return 0;
}