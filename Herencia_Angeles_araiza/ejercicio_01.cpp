#include <iostream>
using namespace std;

// Completa aquí las clases:
class Animal {
public:
    void comer() {
        cout<<"El animal come"<<endl;
        // ...
    }
};

class Perro : public Animal {
public:
    void ladrar() {
        cout<<"El perro ladra";
    }
};

int main() {
    Perro miPerro;
    miPerro.comer();
    miPerro.ladrar();
    return 0;
}
