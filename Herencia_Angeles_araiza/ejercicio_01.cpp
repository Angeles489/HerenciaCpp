// Ejercicio 1

#include <iostream>
using namespace std;

// Completa aquí las clases:

class Animal {
public:
    string nombre;
    Animal(string _nom) {
        nombre=_nom;
    }
    void comer() {
        cout << "El " << nombre<<" come"<< endl;
    }
};

class Perro : public Animal {
public:
    Perro(string nombre):Animal(nombre) {}

    void ladrar() {
        cout << "El "<<nombre<< " esta ladrando" << endl;
    }
};

int main() {

    Perro miPerro("Firulais");
    miPerro.comer();
    miPerro.ladrar();
    return 0;
}

