#include <stdio.h>

int fat(int n, int d) {
    if (n < 10) return d+n;
    d += n%10;
    fat(n/10, d);
}

int main() {
    int N, M, S, I=-1, aux;
    scanf("%d%d%d", &N, &M, &S);

    if (M < 1 || M > 10000) return 0;
    if (N < 1 || N > M) return 0;
    if (S < 1 || S > 36) return 0;

    for (int i=N; i < M; i++) {
        aux = fat(i, 0);
        if (aux == S) I = i; 
    }
    
    printf("%d\n", I);
    return 0;
}
