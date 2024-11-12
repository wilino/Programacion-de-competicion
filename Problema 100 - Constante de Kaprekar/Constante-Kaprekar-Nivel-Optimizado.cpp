#include <iostream>
#include <array>
#include <algorithm>

using namespace std;

// Extrae los dígitos del número y los devuelve en un array.
array<int, 4> extraerDigitos(int numero) {
    array<int, 4> digitos;
    for (int i = 3; i >= 0; --i) {
        digitos[i] = numero % 10;
        numero /= 10;
    }
    return digitos;
}

// Convierte un array de dígitos de vuelta a un número entero.
int convertirANumero(const array<int, 4>& digitos) {
    int num = 0;
    for (int digito : digitos) {
        num = num * 10 + digito;
    }
    return num;
}

// Función que realiza la rutina de Kaprekar y devuelve el número de iteraciones.
int rutinaKaprekar(int numero) {
    const int CONSTANTE_KAPREKAR = 6174;
    if (numero == CONSTANTE_KAPREKAR) {
        return 0;
    }
    
    int contador = 0;
    while (numero != CONSTANTE_KAPREKAR && numero != 0) {
        auto digitos = extraerDigitos(numero);
        sort(digitos.begin(), digitos.end());
        
        int asc = convertirANumero(digitos);
        int desc = convertirANumero({digitos[3], digitos[2], digitos[1], digitos[0]});
        
        numero = desc - asc;
        contador++;
    }
    
    if (numero == 0) {
        return 8; // Caso especial para repdigits que no son 6174.
    }
    
    return contador;
}

int main() {
    int casos, numero;
    cin >> casos;
    
    while (casos--) {
        cin >> numero;
        cout << rutinaKaprekar(numero) << endl;
    }

    return 0;
}
