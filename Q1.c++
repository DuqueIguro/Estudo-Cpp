// Fazer um programa em C que pergunta um valor em metros e imprime o correspondente em decímetros, centímetros e milímetros.

#include <iostream>
using namespace std;

int main() {
    float metro, deci, centi, mili;

    cout << "Digite um valor em metros: ";
    cin >> metro;

    // Calculando os valores correspondentes
    deci = metro * 10;
    centi = metro * 100;
    mili = metro * 1000;

    // Exibindo os resultados
    cout << "O valor informado em metros foi: " << metro << " m" << endl;
    cout << "Que equivalem a: " << deci << " dm" << endl;
    cout << "Equivalem a: " << centi << " cm" << endl;
    cout << "Equivalem a: " << mili << " mm" << endl;

    return 0;
}

