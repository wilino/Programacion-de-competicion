#include <cstdio>
#include <algorithm>

int main() {
    int canalA, canalB;
    while (scanf("%d %d", &canalA, &canalB) == 2) {
        if (canalA == 0 && canalB == 0) break; // Terminar si ambos son 0

        int avance = (canalB - canalA + 99) % 99;
        int retroceso = (canalA - canalB + 99) % 99;

        printf("%d\n", std::min(avance, retroceso));
    }
    
    return 0;
}
