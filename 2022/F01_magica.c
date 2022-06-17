#include <stdio.h>

int main() {
    int N, i, j, m, n, P, linha, coluna;
    scanf("%d", &N);
    if (N < 3 || N > 10) return 0;
    int M[N][N];
    
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

    int k=1;
    for (i=0; i < N; i++) {
        for (j=0; j < N; j++) {
            if (M[linha][j] == k) {
                k++;
                i=0;
                break;
            }
            for (n=0; n < N; n++) {
                if (M[n][coluna] == k) {
                    k++;
                    i=0;
                    break;
                }
                if (linha == coluna) {
                    for (m=0; m < N; m++) {
                        if (M[m][m] == k) {
                            k++;
                            i=0;
                            break;
                        }
                    }

                }
            }
        }
    }

    printf("%d", k);
    return 0;
}
