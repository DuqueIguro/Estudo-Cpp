// Criar um algoritmo que mostre as regras do documento de regras com base no tópico escolhido.
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

    string opcao;
    int escolha;
    bool continuar = true; 

    while (continuar) { 
        puts("---------------------------------------------- ");
        puts("\n");
        puts(" - Pressione 1 caso deseje visualizar as Regras gerais da Comunidade.\n");
        puts(" - Pressione 2 caso deseje visualizar as Regras do Discord.\n");
        puts(" - Pressione 3 caso deseje visualizar as Regras do Minecraft.\n");
        puts(" - Pressione 4 caso deseje visualizar as Exceções para Apoiadores.\n");
        puts(" - Digite 'exit' para sair.");
        puts("\n");
        puts("---------------------------------------------- ");
    
        cout << " Digite a opção desejada ou 'exit' para sair: "; 
        cin >> opcao; 

        if (opcao == "exit") { // Verifica se o usuário deseja sair
            continuar = false; 
            break; 
        }

        if (opcao == "1") { // Exibe os topicos de Regras Gerais da Comunidade
            puts("---------------------------------------------- ");
            cout << "      1.0.0 Regras Gerais da comunidade: " << endl; 
            puts("---------------------------------------------- ");
            puts(" - 1.1.0 Respeito e Tolerância.\n");
            puts(" - 1.2.0 Comportamento Adequado.\n");
            puts(" - 1.3.0 Moderação e Cumprimento das Regras.\n");
            puts(" - 1.4.0 Interação entre maiores e menores de idade.\n");
            puts(" - 1.5.0 Contas secundárias.\n");
            puts("---------------------------------------------- ");
            
            cout << " Digite a numeração do tópico que deseja visualizar (Segunda casa Decimal): ";
            cin >> escolha;
            
        	switch (escolha) { // Tópicos de 1.0.0 Regras Gerais da comunidade
			    case 1: // Exibe as regras referentes ao Respeito e Tolerancia
			        puts("---------------------------------------------- ");
			        cout << "         1.1.0 Respeito e Tolerância: " << endl; 
			        puts("---------------------------------------------- ");
			        
			        puts(" - 1.1.1 Trate todos os membros da comunidade com respeito e cortesia. Não faça comentários ofensivos, discriminatórios, ameaçadores ou abusivos.\n");
			        puts(" - 1.1.2 Respeite as opiniões e perspectivas dos outros, mesmo que você discorde delas. Evite ataques pessoais ou linguagem ofensiva. \n");
			        puts(" - 1.1.3 Respeite a privacidade dos membros. Não compartilhe informações pessoais de outros membros sem consentimento explícito. Não peça ou compartilhe informações pessoais sensíveis.\n");
			        puts(" - 1.1.4 Use uma linguagem adequada e evite palavrões, linguagem obscena ou conteúdo vulgar. Mantenha o uso de linguagem adequada a todas as idades.");
			        puts(" --> 1.1.4.1 Excessão: Caso você esteja com um grupo limitado de amigos, onde todos se sintam confortáveis com o linguajar. Não abuse do mesmo, e tenha certeza de que todos os presentes não se incomodam.\n");
			        puts(" - 1.1.5 Encorajamos debates e discussões saudáveis, desde que sejam respeitosos e construtivos. Evite ataques pessoais, brigas ou confrontos desnecessários. Lembre-se de que é possível discordar sem desrespeitar os outros membros.\n");
			        
			        puts("---------------------------------------------- ");
			        
			        system("pause");
			        system("cls");
			        break;	
			    
			    case 2: // Exibe as regras referentes ao Comportamento Adequado
			        puts("---------------------------------------------- ");
			        cout << "        1.2.0 Comportamento Adequado: " << endl; 
			        puts("---------------------------------------------- ");
			        
			        puts(" - 1.2.1 Mantenha-se focado no tema da comunidade e evite desvios irrelevantes. \n");
			        puts(" - 1.2.2 Evite spam, não faça publicidade não solicitada e nem compartilhe conteúdo promocional não autorizado. Isso também vale para o privado dos membros. \n");
			        puts(" - 1.2.3 Não compartilhe conteúdo ilegal, difamatório, obsceno, perturbador, pornográfico ou que viole os direitos autorais.\n");
			        puts(" - 1.2.4 Não se envolva em atividades fraudulentas, como phishing, hacking ou disseminação de malware.\n");
			        puts(" - 1.2.5 Fingir ser outra pessoa ou criar contas falsas é estritamente proibido.\n");
			        puts(" - 1.2.6 Evite mencionar ou mandar mensagem no privado da Staff sem ser solicitado, o mesmo serve para dentro do jogo quando o membro da staff não está com a tag depois do nome. \n");
			        puts(" - 1.2.7 Não compartilhe conteúdo privado dos membros ou da staff. Isso inclui mas não se limita a: questões de tickets, advertências ou punições, informações dos chats da staff.\n");
			        
			        puts("---------------------------------------------- ");                
			        
			        system("pause");
			        system("cls");
			        break;
			    
			    case 3: // Exibe as regras referentes a Moderação e ao Cumprimento das Regras
			        puts("---------------------------------------------- ");
			        cout << "1.3.0 Moderação e Cumprimento das Regras: " << endl; 
			        puts("---------------------------------------------- ");
			        
			        puts("As decisões dos moderadores e administradores do servidor são finais. Se você discordar de uma ação tomada, acesse o servidor de suporte e abra um ticket à equipe de moderação de forma respeitosa e adequada para resolver qualquer problema ou mal-entendido.");
			        puts("\n ");
			        
			        puts(" - 1.3.1 Respeite as decisões dos moderadores e administradores da comunidade. \n");
			        puts(" - 1.3.2 Encontrar um conteúdo inadequado ou violações das regras, e não informar os moderadores imediatamente.\n");
			        puts(" - 1.3.3 Não contorne intencionalmente as regras ou as ações dos moderadores.");
			        puts(" --> 1.3.3.1 Exemplo: Em caso de banimento, criar outra conta para ter acesso ao servidor.\n");
			        puts(" - 1.3.4 Ao sair do servidor do Discord principal de Arísia você abdica de todo o seu progresso dentro do jogo, a administração não necessariamente irá apagar todos os seus dados, mas isso pode ser feito caso necessário, por conta da impossibilidade de comunicação com o dono da conta.\n");
			        
			        puts("---------------------------------------------- "); 
			        
			        system("pause");
			        system("cls");
			        break;
			    
			    case 4: // Exibe as regras referentes aos Menores de Idade
			        puts("---------------------------------------------- ");
			        cout << " 1.4.0 Interação entre maiores e menores de idade: " << endl; 
			        puts("---------------------------------------------- ");
			        
			        puts(" Realização de RPs e interações de cunho “amoroso”, que ultrapasse os limites do considerado “amizade”, ou qualquer interação suspeita entre um usuário maior de idade e menor de idade, é proibido. Independente de relação fora do servidor, seja ela namoro ou amizade, esse tipo de contato não pode ocorrer.");
			        puts("\n ");
			        
			        puts(" Algumas exceções são:\n");
			        
			        puts(" - 1.4.1 Caso um dos indivíduos tenha 16 anos ou mais, e já tenha uma relação amorosa (namoro) com o outro usuário fora do servidor;\n");
			        puts(" - 1.4.2 Entre maiores é permitido, se ambos tiverem consentimento;\n");
			        puts(" - 1.4.3 Entre menores de idade é permitido, se a diferença de idade não ultrapassar três anos, e ambos tiverem mais de 14 anos e consentem com a relação.\n");
			        
			        puts(" Caso esta regra não seja cumprida, haverá o banimento de ambos os usuários. Se for comprovado que um dos jogadores mentiu a própria idade, apenas o mesmo será banido.\n");
			        
			        puts("---------------------------------------------- ");
			        
			        system("pause");
			        system("cls");
			        break;
			    
			    case 5: // Exibe as regras referentes às contas alternativas
			        puts("---------------------------------------------- ");
			        cout << "         1.5.0 Contas secundárias: " << endl; 
			        puts("---------------------------------------------- ");
			        
			        puts(" Para utilizar contas secundárias, tanto no jogo quanto no Discord, é necessário ter permissão dos ADMs. Caso não haja permissão, uma advertência pode ser dada na conta principal.");
			        
			        system("pause");
			        system("cls");
			        break;
			    
			    default:
			        cout << "Opção inválida!" << endl;
			        break;
			}
		} 
		
		else if (opcao == "2") {
            puts("---------------------------------------------- ");
            cout << "      2.0.0 Regras de Discord: " << endl; 
            puts("---------------------------------------------- ");
            puts(" - 2.1.0 Canais Relevantes e de Texto.\n");
            puts(" - 2.2.0 Comportamento Responsável em Voz.\n");
            puts(" - 2.3.0 Respeito às Normas do Discord.\n");
            puts(" - 2.4.0 Servidores Relacionados a RPs.\n");
            puts("---------------------------------------------- ");
			            
            cout << " Digite a numeração do tópico que deseja visualizar (Segunda casa Decimal): ";
            cin >> escolha;
            
            switch (escolha) { // Tópicos de 2.0.0 Regras de Discord
			    case 1: // Exibe as regras referentes aos Canais Relevantes e de Texto
			        puts("---------------------------------------------- ");
			        cout << "2.1.0 Canais Relevantes e de Texto: " << endl; 
			        puts("---------------------------------------------- ");
			        
			        puts(" - 2.1.1 Utilize os canais apropriados para cada tipo de discussão, evitando desviar ou interromper conversas em andamento. Respeite as regras específicas de cada canal.\n");
			        puts(" - 2.1.2 Se houver canais específicos designados para a promoção de produtos, serviços ou conteúdos pessoais, utilize-os adequadamente. Respeite as regras e limites estabelecidos para esses canais e evite fazer autopromoção em outros canais.\n");
			        puts(" - 2.1.3 A menção de moderador e administração sem um motivo válido, é inapropriado e não deve ser feito. O mesmo vale para spam de menção, ficar marcando pessoas deliberadamente,  sem contexto ou com o intuito de incomodar e atrapalhar, é inapropriado e não deve ser feito.\n");

			        puts("---------------------------------------------- ");
			        
			        system("pause");
			        system("cls");
			        break;
			    
			    case 2: // Exibe as regras referentes ao Comportamento em canais de Voz
			        puts("---------------------------------------------- ");
			        cout << "2.2.0 Comportamento Responsável em Voz: " << endl; 
			        puts("---------------------------------------------- ");
			        
			        puts(" - 2.2.1 Ao utilizar canais de voz, seja cortês e evite interrupções excessivas ou comportamento disruptivo. Permita que todos tenham a oportunidade de falar e ouvir. Evite a utilização de áudio em alto volume, sons perturbadores ou qualquer tipo de comportamento invasivo.\n");
			        
			        puts("---------------------------------------------- ");                
			        
			        system("pause");
			        system("cls");
			        break;
			    
			    case 3: // Exibe as regras referentes às Normas do Discord
			        puts("---------------------------------------------- ");
			        cout << "2.3.0 Respeito às Normas do Discord: " << endl; 
			        puts("---------------------------------------------- ");
			        
			        puts(" - 2.3.1 Além das regras específicas da comunidade, também é importante cumprir as diretrizes e termos de serviço do Discord. Isso inclui não enviar mensagens em massa, não criar spam ou realizar atividades que violem as políticas do Discord e também ter 13 anos ou mais.\n");
			        
			        puts("---------------------------------------------- "); 
			        
			        system("pause");
			        system("cls");
			        break;
			    
			    case 4: // Exibe as regras referentes aos Servidores complementares para RP
			        puts("---------------------------------------------- ");
			        cout << "2.4.0 Servidores Relacionados a RPs: " << endl; 
			        puts("---------------------------------------------- ");
			        
			        puts(" - 2.4.1 A criação de servidores que tenham ligações com RPs necessitam de aprovação e da presença de um Diretor de Arísia. Se for descoberto servidores que tenham ligação com RP, e que não tenham aprovação e presença de Diretor de Arísia, os responsáveis estarão sujeitos a punição.\n");
			        puts(" --> 2.4.1.1 Exemplos: Criar um servidor de facção; criar um servidor para uma empresa; criar um servidor para um cargo de trabalho (polícia, hospital, tribunal, fazenda, etc).\n");
			        
			        puts("---------------------------------------------- ");
			        
			        system("pause");
			        system("cls");
			        break;
			    
			    default:
			        cout << "Opção inválida!" << endl;
			        break;
			}
		}
		
		else if (opcao == "3") {
            puts("---------------------------------------------- ");
            cout << "      3.0.0 Regras de Minecraft: " << endl; 
            puts("---------------------------------------------- ");
            
            puts(" - 3.1.0 Uso de cheats.\n");
            puts(" - 3.2.0 Roleplays autorizados.\n");
            puts(" - 3.3.0 Anti-jogo / Anti-RP.\n");
            puts(" - 3.4.0 Abuso de Mecânica.\n");
            puts(" - 3.5.0 Uso das Chaves e Cadeados.\n");
            puts(" - 3.6.0 Griefing/Construções irregulares.\n");
			puts(" - 3.7.0 Construção de Farms.\n");
			puts(" - 3.8.0 Construção de farm automática/semiautomática.\n");	
			
            puts("---------------------------------------------- ");
			            
            cout << " Digite a numeração do tópico que deseja visualizar (Segunda casa Decimal): ";
            cin >> escolha;
            
            switch (escolha) { // Tópicos de 3.0.0 Regras de Minecraft
			    case 1: // Exibe as regras referentes ao Uso de cheats
			        puts("---------------------------------------------- ");
					puts("               3.1.0 Uso de cheats.");
			        puts("---------------------------------------------- ");
			        
			        puts(" - 3.1.1 O uso de texturas que proporcionam vantagens é considerado trapaça e é completamente proibido, assim como o uso de outros programas externos. Isso inclui, mas não se limita a: x-ray, fly, speed, kill aura, entre outros.");
			        puts(" --> 3.1.1.1 Qualquer mod, textura ou programa externo que proporcione vantagens injustas, ou informações privilegiadas dentro do contexto do roleplay.");
			        puts(" --> 3.1.1.2 Qualquer programa ou mod catalogado na nossa lista de mods proibidos.");
			        
					system("pause");
			        system("cls");
			        break;
			    
			    case 2: // Exibe as regras referentes aos Roleplays autorizados
			        puts("---------------------------------------------- ");
					puts("          3.2.0 Roleplays autorizados.");
			        puts("---------------------------------------------- ");
			        
			        puts(" - 3.2.1 Qualquer roleplay que entre nos seguintes critérios deve ser aprovado por um membro da Staff\n");
			        puts(" --> 3.2.1.1 Roleplays de corrupto em qualquer área de atuação\n");
			        puts(" --> 3.2.1.2 Roleplays que envolvam criação de grupos ou facções.\n");
			        puts(" --> 3.2.1.Roleplays de criminosos que precisam de acesso aos crafts ocultos.\n");
			        puts(" --> 3.2.1.Roleplays de criminosos que querem roubar locais governamentais (delegacia, hospital, tabelionato e afins).\n");
			        
					system("pause");
			        system("cls");
			        break;
			    
			    case 3: // Exibe as regras referentes ao Anti-jogo / Anti-RP
			        puts("---------------------------------------------- ");
					puts("          3.3.0 Anti-jogo / Anti-RP.");
			        puts("---------------------------------------------- ");
			        
					system("pause");
			        system("cls");
			        break;
			    
			    case 4: // Exibe as regras referentes ao Abuso de Mecânica
			        puts("---------------------------------------------- ");
					puts("           3.4.0 Abuso de Mecânica.");
			        puts("---------------------------------------------- ");
			        
					system("pause");
			        system("cls");
			        break;
			    
			    case 5: // Exibe as regras referentes ao Uso das Chaves e Cadeados
			        puts("---------------------------------------------- ");
					puts("        3.5.0 Uso das Chaves e Cadeados.");
			        puts("---------------------------------------------- ");
			        
					system("pause");
			        system("cls");
			        break;
			    
			    case 6: // Exibe as regras referentes ao Griefing/Construções irregulares
			        puts("---------------------------------------------- ");
					puts("    3.6.0 Griefing/Construções irregulares.");
			        puts("---------------------------------------------- ");
			        
			        system("pause");
			        system("cls");
			        break;
			    
			    case 7: // Exibe as regras referentes à Construção de Farms
			        puts("---------------------------------------------- ");
					puts("           3.7.0 Construção de Farms.");
			        puts("---------------------------------------------- ");
			        
			        puts(" É proibida a construção de farms de xp e mobtrap. A construção de qualquer farm de xp e/ou mobtrap acarretará em advertência.");
			        
					system("pause");
			        system("cls");
			        break;
			    
			    case 8: // Exibe as regras referentes à Construção de farms automática/semiautomática
			        puts("---------------------------------------------- ");
					puts(" 3.8.0 Construção de farms automática/semiautomática.");
			        puts("---------------------------------------------- ");
			        
			        puts(" É proibida a construção de qualquer farm automática. Para farms semiautomáticas, abra um ticket para que um membro da administração avalie sua ideia.");
			        
			        system("pause");
			        system("cls");
			        break;
			    
			    default:
			        cout << "Opção inválida!" << endl;
			        break;
			}
        } 
		
		else if (opcao == "4") {
            puts("---------------------------------------------- ");
            cout << "      4.0 Exceções para Apoiadores: " << endl; 
            puts("---------------------------------------------- ");
            
            puts(" - 4.1 As regras descritas aqui neste algoritimo servem para todos os membros, e isso inclui quem nos apoia, sendo com doação monetária ou com impulso no servidor do Discord. Ao apoiar o servidor de Arísia RP, nenhuma exceção é imposta. Ao quebrar as regras, a punição é aplicada independentemente de suporte, sendo doação ou impulso de servidor.\n");
            puts(" Você tem total direito de utilizar os cosméticos fornecidos pelo sistema de apoiador, porém, isso pode ser impedido no caso de descumprimento de regras e na ocasião de ban.\n");
            
            system("pause");
            system("cls");
        } 
		
		else {
            cout << "Opção inválida!" << endl;
        }
    }

    return 0;
}