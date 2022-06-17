#include <stdio.h>

int M, A, B, C;

int main() {
    scanf("%d%d%d", &M, &A, &B);
    if (M < 40 || M > 110) return 0;
    if (A < 1 || A >= M) return 0;
    if (B < 1 || B >= M) return 0;
    if (A == B) return 0;
    
    C = M-(A+B);

    if (A > B && A > C) printf("%d", A);
    else if (B > C) printf("%d", B);
    else printf("%d", C);
    
    return 0;
}
