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

bool desejaContinuar(string topico) {
    cout << " Deseja ver mais regras no tópico " << topico << " [s/n]? ";
    cin >> reset;

    if (reset == 's' || reset == 'S') {
        system("cls");
        return true; // Usuário deseja continuar
    }
    return false; // Usuário não deseja continuar
}

int main(){
	SetConsoleOutputCP(CP_UTF8);
	
	string opcao;
    int escolha;
    bool continuar = true;
    
    while (continuar) { 
    	inicio:
	    puts("---------------------------------------------- ");
	    cout << "      1.0.0 Regras Gerais de Roleplay: " << endl; 
	    puts("---------------------------------------------- ");
	    puts(" - 1.1.0 Dark-Rp.\n");
	    puts(" - 1.2.0 Perma-Death.\n");
	    puts(" - 1.3.0 Direito Autoral.\n");
	    puts(" - 1.4.0 Combat Logging.\n");
	    puts(" - 1.5.0 Metagaming.\n");
	    puts(" - 1.6.0 Anti-Rp.\n");
	    puts(" - 1.7.0 CallBait.\n");
	    puts(" - 1.8.0 Roleplay de Assalto.\n");
	    puts(" - 1.9.0 Roleplay de Facção.\n");
	    puts(" - 1.10.0 Safe Zones.\n");
	    puts("---------------------------------------------- ");
	    
	    cout << " Digite a opção que deseja visualizar (Segunda casa Decimal) ou 'exit' para sair: "; 
	    cin >> opcao;
		
		if (opcao == "exit" or opcao == "0") { 
	        continuar = false; 
	        break; 
	    }
	    
	    if (opcao == "1"){
	    	puts("---------------------------------------------- ");
	        cout << "         1.1.0 Dark-RP: " << endl; 
	        puts("---------------------------------------------- ");
	        
	        cout << "Qualquer forma de roleplay que aborda um tema sensível deve ser evitada. Dark RP refere-se a roleplay com conotação sexual, abusivo ou preconceituoso. É terminantemente proibido qualquer tipo de assédio, abuso, racismo, homofobia, preconceitos (Raça, Cor, Religião), e Bullying.\n" << endl;
	
	        puts(" - 1.1.1 RP de sexo, assédio, estupro ou qualquer tipo de situação que cause constrangimento fora do contexto de roleplay.\n");
	        puts(" - 1.1.2 Encenar RPs que contém violência extrema ou tortura excessiva.\n");
	        puts(" - 1.1.3 RPs com tópicos psicológicos sensíveis (RP de doença mental).\n");
	        
			puts("---------------------------------------------- ");
			
			if (desejaContinuar("1.0.0 Regras Gerais de Roleplay")) {
                goto inicio;
            };
            
	        system("cls");
	        break;	
		}
	 	if (opcao == "2"){
	    	puts("---------------------------------------------- ");
	        cout << "         1.2.0 Perma-Death: " << endl; 
	        puts("---------------------------------------------- ");
	        
	        cout << "Uma Morte Permanente(PD) pode ocorrer quando, durante um RP, um personagem morre permanentemente perante a lore do servidor.\n" << endl;
	
	        puts(" - 1.2.1 Caso seja solicitado o PD através de ticket do próprio dono do personagem.\n");
	        puts(" - 1.2.2 Caso um jogador conscientemente coloque seu personagem em uma cargo arriscado (aceitar um cargo de risco como Governador ou Imperador, à critério da administração).\n");
	        puts(" - 1.2.3 Quando suas ações podem gerar impactos negativos extremos (ex: participar de ações terroristas ou extremas).\n");
	    	puts(" - 1.2.4 Caso um jogador espontaneamente coloque seu personagem em uma situação de risco extremo (ex: um jogador coloca seu personagem em contato prolongado com uma doença desconhecida ou que as autoridades recomendaram distância).\n");
			puts(" - 1.2.5 A Administração se reserva o direito de forçar um PD em situações específicas para manter o funcionamento do servidor.");
			puts(" - 1.2.6 Caso seu personagem sofra PD todos os bens do personagem como itens, dinheiro e níveis de habilidades serão perdidos (salvo itens de membro ou os adquiridos em eventos pois os mesmos continuam vinculados ao jogador).");
			
			puts("---------------------------------------------- ");
			
			if (desejaContinuar("1.0.0 Regras Gerais de Roleplay")) {
                goto inicio;
            };
            
	        system("cls");
	        break;
		}
		if (opcao == "3"){
	    	puts("---------------------------------------------- ");
	        cout << "         1.3.0 Direito Autoral: " << endl; 
	        puts("---------------------------------------------- ");
	        
	        cout << "Seu RP sendo aprovado por ticket ou não, deve ser livre de direito autoral, ao fazer RP no servidor você aceita que seu RP poderá ser usado por outras pessoas e com outros propósitos:\n" << endl;
	
	        puts(" - 1.3.1 Texturas criadas com o propósito de usar dentro do RP devem ser livres de qualquer direito autoral.\n");
	        puts(" - 1.3.2 Lores escritas para o RP também devem ser livres de direto autoral.\n");
	        puts(" - 1.3.3 As mecânicas criadas por conta de RP também devem ser livres de direto autoral.\n");
	    	puts(" - 1.3.4 Qualquer outra coisa criada para o propósito de servir um RP seguirá as mesmas regras.\n");
			puts(" - 1.3.5 Arísia Roleplay se reserva o direito de usar qualquer acontecimento dentro e fora do servidor para fins de publicidade ou produção de conteúdo.");
			
			puts("---------------------------------------------- ");
			
			if (desejaContinuar("1.0.0 Regras Gerais de Roleplay")) {
                goto inicio;
            };
            
	        system("cls");
	        break;	
		}
		if (opcao == "4"){
	    	puts("---------------------------------------------- ");
	        cout << "         1.4.0 Combat Logging: " << endl; 
	        puts("---------------------------------------------- ");
	        
	        cout << "Combat log consiste em sair do jogo ou teleportar para evitar perder itens, ou tirar qualquer benefício disso.\n" << endl;
	
	        puts(" - 1.4.1 Sair do jogo durante um roleplay de confronto PVP.\n");
	        puts(" - 1.4.2 Forçar morte durante um roleplay.\n");
	        puts(" - 1.4.3 Teleportar durante um roleplay.\n");
	    	
			puts("---------------------------------------------- ");
			
			if (desejaContinuar("1.0.0 Regras Gerais de Roleplay")) {
                goto inicio;
            };
            
	        system("cls");
	        break;	
		}
		if (opcao == "5"){
	    	puts("---------------------------------------------- ");
	        cout << "         1.5.0 Metagaming: " << endl; 
	        puts("---------------------------------------------- ");
	        
	        cout << "Utilizar informação de fora do roleplay, o qual seu personagem não sabe, ou não conseguiria saber.\n" << endl;
	
	        puts(" - 1.5.1 Usar informações obtidas fora do jogo para influenciar suas ações dentro do jogo.\n");
	        puts(" - 1.5.2 Lembrar eventos que ocorreram durante uma ação em que você foi derrubado (salvo caso tenha sido socorrido por um médico).\n");
	        puts(" - 1.5.3 Reconhecer alguém usando máscara ou invisível.\n");
	    	
			puts("---------------------------------------------- ");
			
			if (desejaContinuar("1.0.0 Regras Gerais de Roleplay")) {
                goto inicio;
            };
            
	        system("cls");
	        break;	
		}
		if (opcao == "6"){
	    	puts("---------------------------------------------- ");
	        cout << "         1.6.0 Anti-RP: " << endl; 
	        puts("---------------------------------------------- ");
	        
	        cout << "Realizar ações que quebram a imersão no roleplay, ou que estrague a experiência de algum usuário.\n" << endl;
	
	        puts(" - 1.6.1 Não valorizar sua vida dentro do jogo, por exemplo, não reagir adequadamente a um sequestro quando seu oponente tem uma vantagem maior.\n");
	        puts(" - 1.6.2 Agir de maneira diferente de como seu personagem agiria.\n");
	        puts(" - 1.6.3 Usar skins não condizentes com a de seu personagem/raça.\n");
	        puts(" - 1.6.4 RDM (matar alguém sem motivo dentro do RP).\n");
	        puts(" - 1.6.5 Não respeitar a lore.\n");
	        puts(" - 1.6.6 Forçar morte quando há possibilidade de salvamento.\n");
	        puts(" - 1.6.7 Finalizar um amigo para voltar para o combate.\n");
	        puts(" - 1.6.8 Falar quando derrubado.\n");
	        puts(" - 1.6.9 Teleportar durante um roleplay.\n");
	        puts(" - 1.6.10 Passar informação ou se comunicar com outros jogadores enquanto se encontra desmaiado ou sem acesso ao seu celular.\n");
	        puts(" - 1.6.11 Quebrar a imersão durante um roleplay (ex: fazer piadas durante um roleplay sério).\n");
	        puts(" - 1.6.12 Atacar os oficiais dentro do interrogatório uma vez que, estando lá dentro, você já se encontra rendido.\n");
	    	
			puts("---------------------------------------------- ");
			
			if (desejaContinuar("1.0.0 Regras Gerais de Roleplay")) {
                goto inicio;
            };
            
	        system("cls");
	        break;	
		}
		if (opcao == "7"){
	    	puts("---------------------------------------------- ");
	        cout << "         1.7.0 CallBait: " << endl; 
	        puts("---------------------------------------------- ");
	        
	        cout << "Realizar chamados para polícia ou médicos com o intuito de realizar confronto PVP.\n" << endl;
	
	        puts(" - 1.7.1 Chamar a polícia através de ocorrência apenas para entrar em confronto.\n");
	        puts(" - 1.7.2 Chamar médico através de ocorrência para iniciar confronto PVP.\n");
	        
			puts("---------------------------------------------- ");
			
			if (desejaContinuar("1.0.0 Regras Gerais de Roleplay")) {
                goto inicio;
            };
            
	        system("cls");
	        break;	
		}
		if (opcao == "8"){
	    	puts("---------------------------------------------- ");
	        cout << "         1.8.0 Roleplay de Assalto: " << endl; 
	        puts("---------------------------------------------- ");
	        
	        cout << "Todo e qualquer roleplay de assalto ou furto deve seguir as regras de  roleplay, de comportamento, de Uso de chaves e cadeados e as demais regras de Arísia Roleplay.\n" << endl;
	
	        puts(" - 1.8.1 Caso a vítima tenha problemas com conexão de internet e o jogo pare de funcionar.\n");
	        puts(" - 1.8.2 Para assaltar, é necessário fazer um roleplay de rendição. Não é permitido sair correndo batendo nos cidadãos com a besta de assalto.\n");
	        puts(" - 1.8.3 Não é permitido fazer com que a vítima retire seu dinheiro do banco para ser roubado.\n");
	        puts(" - 1.8.4 Não é permitido obrigar a vítima a entregar algum item a não ser que ela esteja de acordo.\n");
	        puts(" - 1.8.5 Roubos não devem acontecer a menos que haja pelo menos 2 policiais acordados no momento.\n");
	        puts(" - 1.8.6 Não é permitido roubar itens sem fins ou vantagens pessoais, a fim de apenas incomodar ou prejudicar outro jogador, assim como jogar fora os itens roubados a fim de que os mesmos sejam apagados com o tempo.\n");
	    	puts(" - 1.8.7 Não é permitido arrombar portas e baús sem o intuito de roubar o local, apenas para quebrar o cadeado alheio sem fins vantajosos próprios.\n");
	        puts(" - 1.8.8 Não é permitido roubar o mesmo local sem um intervalo de, no mínimo, 7 dias, sob pena de ter a ação revertida e punições aplicadas.\n");
	        puts(" - 1.8.9 Não é permitido roubar itens exclusivos e limitados, livros escritos por jogadores, itens de decoração (armaduras em suportes de armadura, livros em estantes de livros).\n");
	    	puts(" - 1.8.10 Não é permitido sair do servidor durante ou com menos de 15min após uma ação de roleplay criminoso (sair após um roleplay de assalto que a polícia esteja te procurando, ou sair após um roleplay de atentado invisível, etc…).\n");
	        puts(" - 1.8.11 Qualquer ação que envolva 3 ou mais criminosos será considerada Facção, e portanto precisará de ticket de RP aprovado.\n");
	    	
	    	
			puts("---------------------------------------------- ");
			
			if (desejaContinuar("1.0.0 Regras Gerais de Roleplay")) {
                goto inicio;
            };
            
	        system("cls");
	        break;	
		}
		if (opcao == "9"){
	    	puts("---------------------------------------------- ");
	        cout << "         1.9.0 Roleplay de Facção: " << endl; 
	        puts("---------------------------------------------- ");
	        
	        cout << "Fundação de facção.\n" << endl;
	
	        puts(" - Para fundar uma facção, é necessário entrar em contato com os Criadores e adquirir permissão para criar uma facção. Se for possível, os criadores darão continuidade ao processo de fundação. Tenha em mente o nome da sua organização. Saiba que uma vez escolhido, não será possível alterar. Também é importante especificar o nome do dono. \n");
	        
			puts("---------------------------------------------- ");
			
			if (desejaContinuar("1.0.0 Regras Gerais de Roleplay")) {
                goto inicio;
            };
            
	        system("cls");
	        break;	
		}
		if (opcao == "10"){
    	puts("---------------------------------------------- ");
        cout << "         1.10.0 Safe Zones: " << endl; 
        puts("---------------------------------------------- ");
        
        cout << "Esses locais são protegidos, e atividades ilegais são proibidas. Todas as safe zones estão representadas em imagem.\n" << endl;

        puts(" - 1.10.1 É proibido roleplays de roubo, sequestro, agressões e assassinatos\n");
        puts(" - 1.10.2 É proibido correr para safezone durante um roleplay de confronto. Caso aconteça, a ação continuará e o jogador que cometeu o ato será advertido.\n");
        puts(" - 1.10.3 É proibido ficar ao redor da safe zone, esperando jogadores saírem para iniciar os roleplays de confronto.\n");
    	puts(" - 1.10.4 Um oficial pode exigir que alguém saia de dentro de uma Safe Zone para iniciar uma ação policial. Caso a pessoa se recuse a sair mesmo com os avisos, o oficial pode iniciar um confronto dentro do local.\n");
    	
		puts("---------------------------------------------- ");
		
		if (desejaContinuar("1.0.0 Regras Gerais de Roleplay")) {
                goto inicio;
            };
            
	        system("cls");;
        break;	
		}
	}
	
	return 0;
}

/*
	Name: Algoritmo de Regras de Roleplay
	Copyright: Arisia Roleplay
	Author: DuqueIguro
	Date: 26/01/25 21:57
	Description: Um Algoritmo que exibe as regras de roleplay separadas por categoria.
*/
