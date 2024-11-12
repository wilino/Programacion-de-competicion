#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>

using namespace std;

bool esDiabolico(const vector<vector<int>>& cuadrado, int n, int& constanteMagica) {
    vector<int> sumas;
    int suma_diagonal1 = 0, suma_diagonal2 = 0;

    // Sumas de filas y columnas
    for (int i = 0; i < n; ++i) {
        int suma_fila = 0, suma_columna = 0;
        for (int j = 0; j < n; ++j) {
            suma_fila += cuadrado[i][j];
            suma_columna += cuadrado[j][i];
        }
        sumas.push_back(suma_fila);
        sumas.push_back(suma_columna);
        suma_diagonal1 += cuadrado[i][i];
        suma_diagonal2 += cuadrado[i][n - i - 1];
    }
    sumas.push_back(suma_diagonal1);
    sumas.push_back(suma_diagonal2);

    // Comprobar si todas las sumas son iguales
    if (all_of(sumas.begin(), sumas.end(), [&](int val){ return val == sumas[0]; })) {
        constanteMagica = sumas[0];
        return true;
    }
    return false;
}

bool esEsoterico(const vector<vector<int>>& cuadrado, int n, int constanteMagica) {
    if (n < 2) return false; // n debe ser al menos 2 para formar un cuadrado
    int constanteMagica2 = 4 * constanteMagica / n;
    vector<int> numeros(n * n);
    iota(numeros.begin(), numeros.end(), 1); // Generar números del 1 al n^2

    // Verificar que contiene todos los números del 1 al n^2
    vector<int> todosLosNumeros;
    for (int i = 0; i < n; ++i) {
        todosLosNumeros.insert(todosLosNumeros.end(), cuadrado[i].begin(), cuadrado[i].end());
    }
    sort(todosLosNumeros.begin(), todosLosNumeros.end());
    if (todosLosNumeros != numeros) return false;

    // Suma de esquinas
    int sumaEsquinas = cuadrado[0][0] + cuadrado[0][n-1] + cuadrado[n-1][0] + cuadrado[n-1][n-1];
    if (sumaEsquinas != constanteMagica2) return false;

    // Suma de centros
    if (n % 2 == 1) {  // n impar
        int centro = cuadrado[n / 2][n / 2];
        if (4 * centro != constanteMagica2) return false;
    } else {  // n par
        int sumaCentrales = cuadrado[n / 2 - 1][n / 2 - 1] + cuadrado[n / 2 - 1][n / 2]
                          + cuadrado[n / 2][n / 2 - 1] + cuadrado[n / 2][n / 2];
        if (sumaCentrales != constanteMagica2) return false;
    }

    return true;
}

int main() {
    int n;
    while (cin >> n && n != 0) {
        vector<vector<int>> cuadrado(n, vector<int>(n));
        for (int i = 0; i < n; ++i)
            for (int j = 0; j < n; ++j)
                cin >> cuadrado[i][j];

        int constanteMagica;
        if (esDiabolico(cuadrado, n, constanteMagica)) {
            if (esEsoterico(cuadrado, n, constanteMagica)) {
                cout << "ESOTERICO\n";
            } else {
                cout << "DIABOLICO\n";
            }
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}
