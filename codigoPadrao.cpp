/* Questão X do Grupo Y
	
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
    cout << " Deseja [...] [s/n] ";
    cin >> reset;

    if (reset == 's' || reset == 'S') {
        system("cls");
        return true; 
    }
    return false; 
}

int main(){
	SetConsoleOutputCP(CP_UTF8);
	
	inicio:
	
	return 0;
}

/*
	Name: 
	Author: 
	Date: XX/XX/XX 00:00
	Description: 
*/
