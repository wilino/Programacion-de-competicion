#include <iostream>
#include <string>
#include <algorithm>
#include <set>  // Necesario para utilizar set y detectar repdigits.

using namespace std;

// Función para formatear un número a cuatro dígitos.
string formatearNumero(int numero) {
    string numStr = to_string(numero);
    while (numStr.length() < 4) {
        numStr = "0" + numStr;  // Añade ceros al principio si es necesario.
    }
    return numStr;
}

// Función para verificar si todos los dígitos son iguales (repdigit).
bool esRepDigit(int numero) {
    string numStr = formatearNumero(numero);
    set<char> digitos(numStr.begin(), numStr.end());
    return digitos.size() == 1;
}

// Función para ordenar dígitos de un número en orden ascendente.
int ordenAscendente(int numero) {
    string numStr = formatearNumero(numero);
    sort(numStr.begin(), numStr.end());
    return stoi(numStr);
}

// Función para ordenar dígitos de un número en orden descendente.
int ordenDescendente(int numero) {
    string numStr = formatearNumero(numero);
    sort(numStr.rbegin(), numStr.rend());
    return stoi(numStr);
}

// Función que realiza la rutina de Kaprekar y devuelve el número de iteraciones.
int rutinaKaprekar(int numero) {
    const int CONSTANTE_KAPREKAR = 6174;
    if (numero == CONSTANTE_KAPREKAR) {
        return 0;  // El número ya es la constante de Kaprekar.
    }
    if (esRepDigit(numero)) {
        return 8;  // Si todos los dígitos son iguales, retorna 8 según el ejemplo proporcionado.
    }

    int contador = 0;
    while (numero != CONSTANTE_KAPREKAR) {
        int desc = ordenDescendente(numero);
        int asc = ordenAscendente(numero);
        numero = desc - asc;
        contador++;
    }
    return contador;
}

int main() {
    int casos;
    cin >> casos;
    for (int i = 0; i < casos; i++) {
        int numero;
        cin >> numero;
        cout << rutinaKaprekar(numero) << endl;
    }
    return 0;
}
