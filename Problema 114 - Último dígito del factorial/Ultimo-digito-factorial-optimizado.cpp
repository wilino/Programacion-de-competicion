#include <cstdio>

int main() {
    int casos;
    scanf("%d", &casos);

    int ultimosDigitos[5] = {1, 1, 2, 6, 4}; // Últimos dígitos para n = 0, 1, 2, 3, 4

    while (casos--) {
        int n;
        scanf("%d", &n);
        printf("%d\n", (n >= 5) ? 0 : ultimosDigitos[n]);
    }

    return 0;
}
