#include <iostream>
using namespace std;

int main() {
    int casos;
    cin >> casos;

    // Array de últimos dígitos predefinidos para factoriales de 0 a 4
    int ultimosDigitos[5] = {1, 1, 2, 6, 4};

    while (casos--) {
        int n;
        cin >> n;
        if (n >= 5) {
            cout << 0 << endl;  // Para n >= 5, el último dígito siempre es 0
        } else {
            cout << ultimosDigitos[n] << endl;  // Para n < 5, accede al array
        }
    }

    return 0;
}
