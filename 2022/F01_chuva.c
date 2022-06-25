#include <stdio.h>

int main() {
    int N, S, intervalos=0;
    scanf("%d%d", &N, &S);
    int X[N];
    
    if (N < 1 || N > 100000) return 0;
    if (S < 0 || S > 1000000) return 0;

    for (int i=0; i < N; i++) {
        scanf("%d", &X[i]);
        if (X[i] > 10) return 0;
    }

    for (int i=0; i < N; i++) {
        int aux = 0;
        for (int j=i; j < N; j++) {
            aux += X[j];
            if (aux == S) intervalos++;            
        }
    }

    printf("%d\n", intervalos);
    return 0;
}
