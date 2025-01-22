// Fazer um programa que solicita um número decimal e imprime o  correspondente em hexa e octal.

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

using namespace std;

int octalParaDecimal(int numeroOctal);

int main()
{
   int numeroOctal;
   cout << "Digite um numero octal: ";
   cin >> numeroOctal;
   cout << numeroOctal << " em octal = " << octalParaDecimal(numeroOctal) << " em decimal";
   
   return 0;
}

// Converte Octal para Decimal
int octalParaDecimal(int numeroOctal)
{
    int numeroDecimal = 0, i = 0, rem;
    while (numeroOctal != 0)
    {
        rem = numeroOctal % 10;
        numeroOctal /= 10;
        numeroDecimal += rem * pow(8, i);
        ++i;
    }
    return numeroDecimal;
}

