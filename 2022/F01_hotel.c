#include <stdio.h>

int main() {
    int D, A, N;
    scanf("%d%d%d", &D, &A, &N);
    if (D < 1 || D > 1000) return 0;
    if (A < 1 || A > 1000) return 0;
    if (N < 1 || N > 31) return 0;
    
    int aux = N;

    if (aux > 15) aux = 15;

    printf("%d\n", (32 - N)*(D+(aux-1)*A));

    return 0;
}
