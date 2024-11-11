#include <iostream>
#include <string>
#include <set>
using namespace std;

// Función para rellenar el número con ceros hasta tener 4 dígitos.
string formatearNumero(int numero) {
    string s = to_string(numero);
    return string(4 - s.length(), '0') + s;
}

// Función para realizar una pasada del ordenamiento de burbuja y construir una nueva cadena.
string realizarPasada(const string &s, bool ascendente) {
    string resultado = s;
    int n = resultado.length();
    for (int i = 0; i < n - 1; i++) {
        if (ascendente ? resultado[i] > resultado[i + 1] : resultado[i] < resultado[i + 1]) {
            // Intercambia los caracteres en la nueva cadena.
            char temp = resultado[i];
            resultado[i] = resultado[i + 1];
            resultado[i + 1] = temp;
        }
    }
    return resultado;
}

// Función para ordenar una cadena utilizando ordenamiento de burbuja.
string ordenarBurbuja(string s, bool ascendente) {
    string anterior = s;
    string nuevo;
    do {
        nuevo = realizarPasada(anterior, ascendente);
        if (nuevo == anterior) {
            break;
        }
        anterior = nuevo;
    } while (true);
    return nuevo;
}

// Función para verificar si todos los dígitos son iguales.
bool sonRepDigits(const string &s) {
    return set<char>(s.begin(), s.end()).size() == 1;
}

// Función para procesar un caso de prueba de la constante de Kaprekar.
void casoDePrueba() {
    const int CONSTANTE_KAPREKAR = 6174;
    int numero;
    cin >> numero;

    string s = formatearNumero(numero);
    if (numero == CONSTANTE_KAPREKAR) {
        cout << 0 << '\n';
        return;
    }
    if (sonRepDigits(s)) {
        cout << 8 << '\n';
        return;
    }

    int contador = 0;
    int numero_actual = numero;
    
    while (numero_actual != CONSTANTE_KAPREKAR) {
        s = formatearNumero(numero_actual);
        string ascendente = ordenarBurbuja(s, true);
        string descendente = ordenarBurbuja(s, false);
        
        numero_actual = stoi(descendente) - stoi(ascendente);
        contador++;
        
        if (numero_actual == CONSTANTE_KAPREKAR) {
            break;
        }
    }
    
    cout << contador << '\n';
}

int main() {
    unsigned int numCasos;
    cin >> numCasos;
    for (unsigned int i = 0; i < numCasos; ++i) {
        casoDePrueba();
    }
    return 0;
}
