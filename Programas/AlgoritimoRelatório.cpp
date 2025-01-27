/* Questão 3 do Grupo Arísia
	Gerar um algoritmo que receba uma lista de regras e converta em um warn/elatório de punição.
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

void lerPunicoes(string punicoes[], int &i) {
    puts("---------------------------------------------- ");
    
	cout << "Digite as numerações das infrações (separados por vírgulas e sem espaços): ";
	
	string linha;
    
    getline(cin, linha); 

    stringstream ss(linha); 
    
    string infracoes;
	
    puts("\n---------------------------------------------- ");
    
    while (getline(ss, infracoes, ',')) { 
        if (i < 4) {
            punicoes[i] = infracoes;
            i++;
        } 
		else {
            break;
        }
    }
}

int main() {
	SetConsoleOutputCP(CP_UTF8);

	// Cria um mapa para armazenar as regras
	map<string, string> regras;

	{
		// Insere as regras no mapa
		regras["1.1.1"] = "Trate todos os membros da comunidade com respeito e cortesia. Não faça comentários ofensivos, discriminatórios, ameaçadores ou abusivos.";
		regras["1.1.2"] = "Respeite as opiniões e perspectivas dos outros, mesmo que você discorde delas. Evite ataques pessoais ou linguagem ofensiva.";
		regras["1.1.3"] = "Respeite a privacidade dos membros. Não compartilhe informações pessoais de outros membros sem consentimento explícito. Não peça ou compartilhe informações pessoais sensíveis.";
		regras["1.1.4"] = "Use uma linguagem adequada e evite palavrões, linguagem obscena ou conteúdo vulgar. Mantenha o uso de linguagem adequada a todas as idades.";
		regras["1.1.4.1"] = "Exceção: Caso você esteja com um grupo limitado de amigos, onde todos se sintam confortáveis com o linguajar. Não abuse do mesmo, e tenha certeza de que todos os presentes não se incomodam.";
		regras["1.1.5"] = "Encorajamos debates e discussões saudáveis, desde que sejam respeitosos e construtivos. Evite ataques pessoais, brigas ou confrontos desnecessários. Lembre-se de que é possível discordar sem desrespeitar os outros membros.";

		regras["1.2.1"] = "Mantenha-se focado no tema da comunidade e evite desvios irrelevantes.";
		regras["1.2.2"] = "Evite spam, não faça publicidade não solicitada e nem compartilhe conteúdo promocional não autorizado. Isso também vale para o privado dos membros.";
		regras["1.2.3"] = "Não compartilhe conteúdo ilegal, difamatório, obsceno, perturbador, pornográfico ou que viole os direitos autorais. ";
		regras["1.2.4"] = "Não se envolva em atividades fraudulentas, como phishing, hacking ou disseminação de malware.";
		regras["1.2.5"] = "Fingir ser outra pessoa ou criar contas falsas é estritamente proibido.";
		regras["1.2.6"] = "Evite mencionar ou mandar mensagem no privado da Staff sem ser solicitado, o mesmo serve para dentro do jogo quando o membro da staff não está com a tag depois do nome.";
		regras["1.2.7"] = "Não compartilhe conteúdo privado dos membros ou da staff. Isso inclui mas não se limita a: questões de tickets, advertências ou punições, informações dos chats da staff.";

		regras["1.3.1"] = "Respeite as decisões dos moderadores e administradores da comunidade.";
		regras["1.3.2"] = "Se você encontrar um conteúdo inadequado ou violações das regras, informe os moderadores imediatamente";
		regras["1.3.3"] = "Não contorne intencionalmente as regras ou as ações dos moderadores.";
		regras["1.3.3.1"] = "Exemplo: Em caso de banimento, criar outra conta para ter acesso ao servidor.";
		regras["1.3.4"] = "Ao sair do servidor do Discord principal de Arísia você abdica de todo o seu progresso dentro do jogo, a administração não necessariamente irá apagar todos os seus dados, mas isso pode ser feito caso necessário, por conta da impossibilidade de comunicação com o dono da conta.";

		regras["1.4.1"] = "Caso um dos indivíduos tenha 16 anos ou mais, e já tenha uma relação amorosa (namoro) com o outro usuário fora do servidor";
		regras["1.4.2"] = "Entre maiores é permitido, se ambos tiverem consentimento";
		regras["1.4.3"] = "Entre menores de idade é permitido, se a diferença de idade não ultrapassar três anos, e ambos tiverem mais de 14 anos e consentem com a relação.";

		regras["1.5.1"] = "Para utilizar contas secundárias, tanto no jogo quanto no Discord, é necessário ter permissão dos ADMs. Caso não haja permissão, uma advertênci pode ser dada na conta principal.";

		regras["2.1.1"] = "Utilize os canais apropriados para cada tipo de discussão, evitando desviar ou interromper conversas em andamento. Respeite as regras específicas de cada canal.";
		regras["2.1.2"] = "Se houver canais específicos designados para a promoção de produtos, serviços ou conteúdos pessoais, utilize-os adequadamente. Respeite as regras e limites estabelecidos para esses canais e evite fazer autopromoção em outros canais.";
		regras["2.1.3"] = "A menção de moderador e administração sem um motivo válido, é inapropriado e não deve ser feito. O mesmo vale para spam de menção, ficar marcando pessoas deliberadamente,  sem contexto ou com o intuito de incomodar e atrapalhar, é inapropriado e não deve ser feito.";

		regras["2.2.1"] = "Ao utilizar canais de voz, seja cortês e evite interrupções excessivas ou comportamento disruptivo. Permita que todos tenham a oportunidade de falar e ouvir. Evite a utilização de áudio em alto volume, sons perturbadores ou qualquer tipo de comportamento invasivo.";

		regras["2.3.1"] = "Além das regras específicas da comunidade, também é importante cumprir as diretrizes e termos de serviço do Discord. Isso inclui não enviar mensagens em massa, não criar spam ou realizar atividades que violem as políticas do Discord e também ter 13 anos ou mais.";

		regras["2.4.1"] = "A criação de servidores que tenham ligações com RPs necessitam de aprovação e da presença de um Diretor de Arísia. Se for descoberto servidores que tenham ligação com RP, e que não tenham aprovação e presença de Diretor de Arísia, os responsáveis estarão sujeitos a punição.";
		regras["2.4.1.1"] = "Exemplos: Criar um servidor de facção; criar um servidor para uma empresa; criar um servidor para um cargo de trabalho (polícia, hospital, tribunal, fazenda, etc).";

		regras["3.1.1"] = "O uso de texturas que proporcionam vantagens é considerado trapaça e é completamente proibido, assim como o uso de outros programas externos. Isso inclui, mas não se limita a: x-ray, fly, speed, kill aura, entre outros.";
		regras["3.1.1.1"] = "Qualquer mod, textura ou programa externo que proporcione vantagens injustas, ou informações privilegiadas dentro do contexto do roleplay.";
		regras["3.1.1.2"] = "Qualquer programa ou mod catalogado na nossa lista de mods proibidos.";

		regras["3.2.1"] = "Qualquer roleplay que entre nos seguintes critérios deve ser aprovado por um membro da Staff";
		regras["3.2.1.1"] = "Roleplays de corrupto em qualquer área de atuação";
		regras["3.2.1.2"] = "Roleplays que envolvam criação de grupos ou facções.";
		regras["3.2.1."] = "Roleplays de criminosos que precisam de acesso aos crafts ocultos.";
		regras["3.2.1."] = "Roleplays de criminosos que querem roubar locais governamentais (delegacia, hospital, tabelionato e afins).";

		regras["3.3.1"] = "Não use o chat de voz para tocar música, sons ou modificar sua voz de maneira irritante para outros jogadores. Isso se aplica tanto ao Discord quanto ao chat de voz do jogo.";
		regras["3.3.2"] = "Os jogadores não devem roubar itens de outros jogadores ou de baús nos casos a seguir:";
		regras["3.3.3"] = "Usar de algum cargo alto para abrir um baú alheio.";
		regras["3.3.4"] = "Obrigar alguém a te dar um item de apoiador ou item de evento durante um assalto.";
		regras["3.3.5"] = "Obrigar alguém a entregar itens pessoais ou irrelevanteséação.";
		regras["3.3.5.1"] = "Tais itens não devem ser utilizados durante a ação caso a vítima já tenha sido rendida. ";
		regras["3.3.6"] = "Usar de seu cargo para chantagear/coagir alguém para te dar algum item.";
		regras["3.3.6.1"] = "Com exceção da polícia que pode confiscar itens ilegais, itens confiscados não devem ser usados para benefício práprio.";
		regras["3.3.7"] = "Usar o mercado negro com um codinome semelhante ao de um jogador existente.";
		regras["3.3.8"] = "Usar o mercado negro como um chat anônimo sem fins de RP ilegal.";
		regras["3.3.9"] = "Spawn Kill: Derrubar alguém logo após a pessoa teleportar.";

		regras["3.4.1"] = "Se teletransportar usando comandos evitando um roleplay.";
		regras["3.4.2"] = "Abusar de permissão de construção para invadir e roubar um local.";
		regras["3.4.3"] = "Usar as algemas e scanners policiais sem um devido rp (revistar ou prender uma pessoa sem aviso prévio ou consentimento).";
		regras["3.4.4"] = "Usar Ender Pearl para atravessar blocos.";
		regras["3.4.5"] = "Usar cargo alto para acessar lugares que não deveriam (um juiz acessar a prisão sem permissão da defesa).";
		regras["3.4.6"] = "Usar comandos para contornar ou ter vantagens em ações.";
		regras["3.4.7"] = "Usar emotes que escondem sua presença ou identidade.";
		regras["3.4.8"] = "Abusar da proteção anti-griefing das cidades para bloquear portas e esconder baús atrás de blocos de maneira que alguém que não tem permissão de construção não conseguia acessá-los.";

		regras["3.5.1"] = "Não é permitido forçar um cidadão a entregar suas chaves, sejam elas pessoais ou de trabalho.";
		regras["3.5.2"] = "É permitido roubar uma chave que esteja dentro de baús, sendo de responsabilidade do dono manté-la segura.";
		regras["3.5."] = "É proibido colocar um cadeado em um baú de outrem sem a permissão do mesmo (ex: ao arrombar um baú com lockpick colocar um cadeado para que o dono não possa acessar seus itens ou colocar um cadeado novo).";
		regras["3.5.4"] = "É proibido colocar um cadeado em portas de outrem sem a permissão do mesmo (ex: ao arrombar uma porta com lockpick, colocar um cadeado nela para que o dono não possa mais ter acesso a sua casa).";
		regras["3.5.5"] = "Cadeados devem quebrar com um lockpick bem sucedido, caso o mesmo não quebre por motivos de bug ou erro, o cadeado deve ser descartado, sendo proibido usá-lo para descobrir a senha de alguém.";
		regras["3.5.6"] = "O Abuso de qualquer mecânica das chaves e cadeados, assim como quebrar as regras acima descritas, ocasionará em puniçães á critério da moderação.";
		regras["3.5.7"] = "Roubos não devem acontecer a menos que haja pelo menos 2 policiais acordados no momento.";
		regras["3.5.8"] = "Não é permitido roubar itens sem fins ou vantagens pessoais, a fim de apenas incomodar ou prejudicar outro jogador, assim como jogar fora os itens roubados a fim de que os mesmos sejam apagados com o tempo.";
		regras["3.5.9"] = "Não é permitido roubar o mesmo local sem um intervalo de, no mínimo, 7 dias, sob pena de ter a ação revertida e punições aplicadas.";
		regras["3.5.10"] = "Não é permitido roubar itens exclusivos e limitados, livros escritos por jogadores, itens de decoração (armaduras em suportes de armadura, livros em estantes de livros)";

		regras["3.6.1"] = "Não construa estruturas inapropriadas, que possam ser ofensivas, obscenas, racistas ou de natureza discriminatória.";
		regras["3.6.2"] = "Não é permitido o roubo de itens decorativos exclusivos, como móveis ou objetos personalizados e exclusivos dentro ou fora de cidades protegidas.";
		regras["3.6.3"] = "Ao destruir ou construir alguma coisa tem alguns critérios que você deve seguir para que não seja considerado griefing.Entende-se como griefing:";
		regras["3.6.3.1"] = "Griefing de Terreno: Destruição deliberada/inconsequente/exagerada dos terrenos pelo mapa de Arísia. O fator determinante da punição é baseado no motivo e tamanho da destruição, sendo julgado pelos ADMs de Arísia. Toda e qualquer destruição que venha a envolver um RP, a comunicação aos Criadores de Arísia é necessária para evitar problemas.";
		regras["3.6.3.2"] = "Griefing de Bases/Casas em áreas desprotegidas: Toda e qualquer base/casa construída no ''Interior de Arísia' (Terreno não protegido) está sujeita a Griefing, não existindo uma punição. Exceçães de quando a destruição danifica de forma exagerada. Nesse caso pode se enquadrar em 'Griefing de Terreno', dependendo do julgamento do(s) ADM(s) responsável(veis).";
		regras["3.6.3.3"] = "Griefing de cidades: Construço ou destruição em cidade protegida sem a permissão do prefeito da cidade e dono do terreno será considerado griefing e poderá ocasionar em advertências.";
		regras["3.6.3.4"] = "Griefing em casas dentro de cidades: Destruição de blocos para invadir propriedades ou danificar sua estrutura (mesmo o prefeito da cidade precisa de permissão do dono do terreno), roubar artigos de decoração, sendo eles blocos colocados, artigos equipados em suporte de armaduras, itens colocados em item-frames e qualquer item que não esteja dentro de um baú/barril/fornalha, fazendo este parte da decoração do local, animais e/ou pets, será considerado griefing e poderá ocasionar em advertências.";
		regras["3.6.3.5"] = "Griefing dconstruções públicas: Qualquer destruição ou construção feita para deteriorar ou obstruir uma estrada, placa ou caminho para alguma cidade oficial é considerado griefing.";
		regras["3.6.3.6"] = "Griefing de construções Governamentais: Uso de permissão de cargo (engenheiros durante reforma, chefes ou secretários que tenham permissão de destruir ou construir em seu local de trabalho)  para invadir, danificar, obstruir, roubar ou modificar uma construção governamental sem a devida autorização ou ticket aprovado.";

		regras["3.7.1"] = "É proibida a construção de farms de xp e mobtrap. A construção de qualquer farm de xp e/ou mobtrap acarretará em advertência.";

		regras["3.8.1"] = "É proibida a construção de qualquer farm automática. Para farms semiautomáticas, abra um ticket para que um membro da administração avalie sua ideia.";
	}

	string escolha;
    int i = 0;

    puts("---------------------------------------------- ");
    puts("\n");
    puts(" - Pressione 1 caso deseje aplicar uma advertncia.\n");
    puts(" - Pressione 2 caso deseje produzir um relatório.\n");
    puts(" - Digite 'exit' para sair.");
    puts("\n");
    puts("---------------------------------------------- ");

    cout << "Digite a opção desejada ou 'exit' para sair: "; 
    cin >> escolha;
    cin.ignore(); 
    
    if (escolha == "exit") { 
        return 0; 
    }
    if (escolha == "1"){ // Advertencia
        lerPunicoes(punicoes, i); /
        for (int j = 0; j < i; j++) { 
            cout << "[...]. Punição aplicada perante as regras " << punicoes[j] << " do documento de Regras e Diretrizes da Comunidade. Recomanda-se a releitura do mesmo para evitar problematicas futuras." << endl;
        }
    } 
    else if (escolha == "2"){ // Relatório
        lerPunicoes(punicoes, i);
        for (int j = 0; j < i; j++) {
            cout << "O jogador [...].Punição foi aplicada perante á regra(s) " << punicoes[j] << " do documento de Regras e Diretrizes da Comunidade. " << endl;
        }
    } 
    else {
        cout << "Opção inválida!" << endl;
    }

	/* Itera pelo mapa e imprime as regras
	for (const auto& regra : regras) {
	    cout << " - " << regra.first << " " << regra.second << endl;
	}
	*/

	return 0;
}

/*
	Name: Algoritmo de Aplicação de Punição e Criação de Relatório
	Copyright: Arísia Roleplay
	Author: DuqueIguro
	Date: 25/01/25 23:03
	Description: É um algoritmo que recebe a numeração das infrações e gera uma advertencia ou relatório com as infrações informadas;
*/

