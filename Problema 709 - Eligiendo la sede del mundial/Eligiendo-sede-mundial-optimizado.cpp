#include <cstdio>
#include <unordered_map>
#include <string>

using namespace std;

bool casoDePrueba() {
    int N;
    if (scanf("%d", &N) != 1 || N == 0) return false;

    unordered_map<string, int> votos;
    char nombre[101];

    // Leer y contar votos
    for (int i = 0; i < N; ++i) {
        scanf("%s", nombre);
        votos[string(nombre)]++;
    }

    // Determinar el ganador o si hay empate
    int maxVotos = 0;
    string ganador;
    bool empate = false;

    for (const auto& par : votos) {
        if (par.second > maxVotos) {
            maxVotos = par.second;
            ganador = par.first;
            empate = false;
        } else if (par.second == maxVotos) {
            empate = true;
        }
    }

    // Imprimir el resultado
    if (empate) {
        printf("EMPATE\n");
    } else {
        printf("%s\n", ganador.c_str());
    }

    return true;
}

int main() {
    while (casoDePrueba());
    return 0;
}
