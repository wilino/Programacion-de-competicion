#include <cstdio>

long long calcularProducto(long long num, long long den) {
    if (num == den) return 1; // Caso trivial: num! / num! = 1
    if (num == den + 1) return num; // Caso directo: num! / den! = num

    long long producto = 1;
    for (long long i = num; i > den; --i) {
        producto *= i;
    }
    return producto;
}

void procesarCasos() {
    long long num, den;
    while (scanf("%lld %lld", &num, &den) == 2) {
        if (num < den) break; // Condición de salida
        printf("%lld\n", calcularProducto(num, den));
    }
}

int main() {
    procesarCasos();
    return 0;
}
