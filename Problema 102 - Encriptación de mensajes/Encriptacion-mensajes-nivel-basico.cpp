#include <iostream>
#include <string>
#include <cctype>

using namespace std;

// Función para calcular el desplazamiento necesario para que el carácter dado se convierta en 'p'
int calcularDesplazamiento(char primerCaracter) {
    int desplazamiento = primerCaracter - 'p';
    return desplazamiento;
}

// Función para decodificar un mensaje usando el desplazamiento dado
string decodificarMensaje(const string& mensajeCodificado, int desplazamiento) {
    string mensajeDecodificado;
    for (char c : mensajeCodificado) {
        if (isalpha(c)) { // Solo decodificar letras
            char base = islower(c) ? 'a' : 'A';
            c = base + (c - base - desplazamiento + 26) % 26;
        }
        mensajeDecodificado += c;
    }
    return mensajeDecodificado;
}

// Función para verificar si un carácter es una vocal
bool esVocal(char c, const char vocales[], int tamanoVocales) {
    for (int i = 0; i < tamanoVocales; i++) {
        if (c == vocales[i]) {
            return true;
        }
    }
    return false;
}

// Función para contar las vocales en un mensaje decodificado
int contarVocales(const string& mensaje) {
    const char vocales[] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};  // Array con las vocales
    int contadorVocales = 0;
    int tamanoVocales = sizeof(vocales) / sizeof(vocales[0]);

    // Recorrer cada carácter en el mensaje decodificado
    for (char c : mensaje) {
        // Utilizar el nuevo método esVocal para verificar si c es una vocal
        if (esVocal(c, vocales, tamanoVocales)) {
            contadorVocales++;
        }
    }
    return contadorVocales;
}

int main() {
    string linea;
    while (getline(cin, linea)) {
        if (linea.empty()) continue;

        // Primer carácter define el desplazamiento, el resto es el mensaje codificado
        char primerCaracter = linea[0];
        string mensajeCodificado = linea.substr(1);

        // Calcular desplazamiento
        int desplazamiento = calcularDesplazamiento(primerCaracter);

        // Decodificar el mensaje
        string mensajeDecodificado = decodificarMensaje(mensajeCodificado, desplazamiento);

        // Verificar si el mensaje decodificado es "FIN" para detener el programa
        if (mensajeDecodificado == "FIN") {
            break;
        }

        // Contar vocales en el mensaje decodificado
        int cantidadVocales = contarVocales(mensajeDecodificado);

        // Imprimir la cantidad de vocales no acentuadas
        cout << cantidadVocales << endl;
    }

    return 0;
}
