#include <iostream>
#include <algorithm>

using namespace std;

int calcularSaltosMinimos(int canalA, int canalB) {
    // Distancia al avanzar de A a B
    int avance = (canalB >= canalA) ? (canalB - canalA) : (99 - canalA + canalB);
    
    // Distancia al retroceder de A a B
    int retroceso = (canalA >= canalB) ? (canalA - canalB) : (canalA + 99 - canalB);
    
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
