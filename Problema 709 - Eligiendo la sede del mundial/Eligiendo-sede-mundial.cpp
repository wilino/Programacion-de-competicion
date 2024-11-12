#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;

// Función para leer votos y contarlos en un mapa
unordered_map<string, int> leerVotos(int N) {
    unordered_map<string, int> votos;
    string candidatura;
    for (int i = 0; i < N; ++i) {
        cin >> candidatura;
        votos[candidatura]++;
    }
    return votos;
}

// Función que actualiza el máximo de votos y verifica si hay empate
void actualizarMaximo(const pair<string, int>& par, int& maxVotos, string& ganador, bool& empate) {
    if (par.second > maxVotos) {
        maxVotos = par.second;
        ganador = par.first;
        empate = false;
    } else if (par.second == maxVotos) {
        empate = true;
    }
}

// Función para determinar el ganador o empate
string determinarGanador(const unordered_map<string, int>& votos) {
    int maxVotos = 0;
    string ganador;
    bool empate = false;

    for (const auto& par : votos) {
        actualizarMaximo(par, maxVotos, ganador, empate);
    }

    return empate ? "EMPATE" : ganador;
}

// Función que procesa cada caso de prueba
bool casoDePrueba() {
    int N;
    cin >> N;

    if (N == 0) return false;

    // Leer los votos y contarlos
    unordered_map<string, int> votos = leerVotos(N);

    // Determinar el resultado y mostrarlo
    cout << determinarGanador(votos) << '\n';

    return true;
}

int main() {
    while (casoDePrueba());
    return 0;
}
