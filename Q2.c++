#include <stdio.h>

int main() {

    int i, j;

    // Loop para as linhas da tabela (tabuada de 1 a 9)
    for (i = 1; i <= 9; i++) {

        // Imprime a tabuada de i no formato desejado
        for (j = 1; j <= 10; j++) {

            printf("%d x %d = %d\n", i, j, i * j);

        }
        
        // Adiciona uma linha em branco entre as tabuadas
        printf("\n");
    }

    return 0;
}
