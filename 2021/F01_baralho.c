#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int saida(int *cartas) {
    if (cartas[13] == 1) {
        printf("erro\n");
        return 0;
    }
    int qtdFaltando = 0;
    
    for (int i=0; i < 13; i++) {
        if (cartas[i] == 0) qtdFaltando++;
    }
    printf("%d\n", qtdFaltando);
    return 0;
}

int main() {
    char entrada[155];
    char aux[3], naipe;
    int qtd;
    int copas[14], espadas[14], ouros[14], paus[14];
    
    scanf("%s", entrada);
    
    int tamanhoEntrada = strlen(entrada);

    if (tamanhoEntrada < 3 || tamanhoEntrada > 156) return 0;

    for (int i=0; i < 14; i++) {
        copas[i] = 0;
        espadas[i] = 0;
        ouros[i] = 0;
        paus[i] = 0;
    }

    for (int i=0; i < tamanhoEntrada/3; i++) {
        strncpy(aux, &entrada[i*3], 2);
        naipe = entrada[i*3+2];
        qtd = atoi(aux);

        if (qtd < 1 || qtd > 13) return 0;

        if (naipe == 'C') {
            if (copas[qtd-1] == 0) copas[qtd-1] = qtd;
            else copas[13] = 1;
        }
        else if (naipe == 'E') {
            if (espadas[qtd-1] == 0) espadas[qtd-1] = qtd;
            else espadas[13] = 1;
        }
        else if (naipe == 'U') {
            if (ouros[qtd-1] == 0) ouros[qtd-1] = qtd;
            else ouros[13] = 1;
        }
        else {
            if (paus[qtd-1] == 0) paus[qtd-1] = qtd;
            else paus[13] = 1;
        }
    }
    
    saida(copas);
    saida(espadas);
    saida(ouros);
    saida(paus);

    return 0;

}
