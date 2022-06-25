#include <stdio.h>

int main() {
    int N, i, j, k, linha, coluna, soma, numeroIlegivel;
    
    scanf("%d", &N);
    
    if (N < 3 || N > 10) return 0;
    
    int M[N][N];
    int X[N];
    
    for (i=0; i < N; i++) {
        for (j=0; j < N; j++){
            scanf("%d", &M[i][j]);
        }
    }
 
    for (i=0; i < N; i++) {
        for (j=0; j < N; j++) {
            if (M[i][j] == 0) {
                linha = i;
                coluna = j;
            }
        }
    }
    
    for (i=0; i < N; i++) {
        X[i] = 0;
        for (j=0; j < N; j++) {
            X[i] += M[i][j];
        }
    }
    
    if (X[N] == X[0]) soma = X[N];
    else if (X[N] > X[0]) soma = X[N];
    else soma = X[0];

    for (i=0; i < N; i++) {
        if (X[i] != soma) {
            numeroIlegivel = X[i] - soma;
            if (numeroIlegivel < 0) numeroIlegivel *= -1;
            break;
        }
    }
    
    printf("%d\n%d\n%d\n", numeroIlegivel, linha+1, coluna+1);
    return 0;
}
