#include <iostream>
#include <algorithm>

using namespace std;

int calcularSaltosMinimos(int canalA, int canalB) {
    int avance = 0, retroceso = 0;
    
    // Contar los saltos al avanzar de canalA a canalB
    for (int i = canalA; i != canalB; i = (i % 99) + 1) {
        avance++;
    }
    
    // Contar los saltos al retroceder de canalA a canalB
    for (int i = canalA; i != canalB; i = (i == 1) ? 99 : i - 1) {
        retroceso++;
    }
    
    // Retornar el mínimo entre ambos
    return min(avance, retroceso);
}

int main() {
    int canalA, canalB;
    while (cin >> canalA >> canalB) {
        if (canalA == 0 && canalB == 0) break; // Terminar si ambos son 0
        
        cout << calcularSaltosMinimos(canalA, canalB) << endl;
    }
    
    return 0;
}
