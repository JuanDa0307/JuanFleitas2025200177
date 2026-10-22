#include <iostream>
#include <string>

using namespace std;

struct Personaje {
    string nombre;
    int poderPelea;
};

void batalla(const Personaje& p1, const Personaje& p2) {
    cout << "           BATALLA DE PODER!    " << endl;
    cout << p1.nombre << " -> Nivel de Fuerza: " << p1.poderPelea << endl;
    cout << p2.nombre << " -> Nivel de Fuerza: " << p2.poderPelea << endl;

    if (p1.poderPelea > p2.poderPelea) {
        cout << "Increible! " << p1.nombre << " ha superado a su oponente." << endl;
        cout << "El ganador de la batalla es " << p1.nombre << "!" << endl;
    } else if (p2.poderPelea > p1.poderPelea) {
        cout << "Impresionante! " << p2.nombre << " ha superado a su oponente." << endl;
        cout << "El ganador de la batalla es " << p2.nombre << "!" << endl;
    } else {
        cout << "Es un choque de poderes legendario! Ambos tienen exactamente el mismo ki. Empate!" << endl;
    }
}

int main() {
    Personaje luchador1 = {"Goku", 17000000};
    Personaje luchador2 = {"Jiren", 16000000};

    batalla(luchador1, luchador2);

    return 0;
}
