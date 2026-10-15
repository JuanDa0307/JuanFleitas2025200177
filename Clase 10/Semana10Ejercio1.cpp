#include <iostream>

using namespace std;

int main() {
    char caracter;

    do {
        cout << "Introduce un caracter: ";
        cin >> caracter;
    } while (caracter != 'a' && caracter != 'e' && caracter != 'i' && caracter != 'o' && caracter != 'u');

    cout << "¡Correcto! Has introducido la vocal minuscula: " << caracter << endl;

    return 0;
}
