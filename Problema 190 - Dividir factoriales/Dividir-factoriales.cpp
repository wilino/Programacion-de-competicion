#include <iostream>
using namespace std;

// Función que calcula el producto de num a den + 1
long long calcularProducto(long long num, long long den) {
    long long producto = 1;
    for (long long i = num; i > den; --i) {
        producto *= i;
    }
    return producto;
}

// Función principal para procesar casos de prueba
void procesarCasos() {
    long long num, den;
    while (cin >> num >> den) {
        if (num < den) break; // Terminar si num < den
        cout << calcularProducto(num, den) << endl;
    }
}

int main() {
    procesarCasos();
    return 0;
}
