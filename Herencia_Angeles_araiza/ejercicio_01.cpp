#include <iostream>
using namespace std;

// Completa aquí las clases:
class Animal {
public:
    void comer() {
        cout<<"El animal come";
        // ...
    }
};

class Perro : public Animal {
public:
    void ladrar() {
        cout<<"\nEl perro ladra";
    }
};

int main() {
    Perro miPerro;
    miPerro.comer();
    miPerro.ladrar();
    return 0;
}
