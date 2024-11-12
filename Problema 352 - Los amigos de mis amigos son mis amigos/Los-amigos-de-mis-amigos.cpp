#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Estructura de Union-Find para representar el grafo de amigos
class UnionFind {
    vector<int> padre, rango, tamano;
    int tamanoMaximo; // Para almacenar el tamaño del componente más grande

public:
    UnionFind(int n) : padre(n), rango(n, 0), tamano(n, 1), tamanoMaximo(1) {
        for (int i = 0; i < n; ++i) {
            padre[i] = i;
        }
    }

    int encontrar(int u) {
        if (padre[u] != u) {
            padre[u] = encontrar(padre[u]); // Compresión de caminos
        }
        return padre[u];
    }

    void unir(int u, int v) {
        int raizU = encontrar(u);
        int raizV = encontrar(v);

        if (raizU != raizV) {
            // Unión por rango
            if (rango[raizU] > rango[raizV]) {
                padre[raizV] = raizU;
                tamano[raizU] += tamano[raizV];
                tamanoMaximo = max(tamanoMaximo, tamano[raizU]);
            } else {
                padre[raizU] = raizV;
                tamano[raizV] += tamano[raizU];
                tamanoMaximo = max(tamanoMaximo, tamano[raizV]);
                if (rango[raizU] == rango[raizV]) {
                    rango[raizV]++;
                }
            }
        }
    }

    int obtenerTamanoMaximo() const {
        return tamanoMaximo;
    }
};

int main() {
    int casos;
    cin >> casos;

    while (casos--) {
        int numPersonas, numAmistades;
        cin >> numPersonas >> numAmistades;

        UnionFind uf(numPersonas);

        for (int i = 0; i < numAmistades; ++i) {
            int personaA, personaB;
            cin >> personaA >> personaB;
            uf.unir(personaA - 1, personaB - 1); // Convertimos a índices 0 para el array
        }

        cout << uf.obtenerTamanoMaximo() << endl;
    }

    return 0;
}
