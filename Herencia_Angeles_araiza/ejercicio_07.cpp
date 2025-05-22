// Ejercicio 7: Herencia pública - Código incompleto con override
#include <iostream>
using namespace std;

class Instrumento {
public:
    virtual void tocar() {
        cout<<"El instrumento suena..."<<endl;
    }
};

class Guitarra : public Instrumento {
public:
    void tocar() override {
        cout<<"La guitarra suena..."<<endl;
    }
};

void probar(Instrumento* inst) {
    inst->tocar();
}

int main() {
    Guitarra g;
    probar(&g);
    return 0;
}
