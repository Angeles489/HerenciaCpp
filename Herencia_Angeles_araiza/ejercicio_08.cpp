//Ejercicio 8: Herencia protegida - Corrección de errores y adaptación

#include <iostream>
using namespace std;

class Persona {
protected:
    string nombre;
public:
    Persona(const string& n) : nombre(n){}
};

class Cliente : protected Persona {
public:
    Cliente(const string& n):
    Persona(n){}
    
    void mostrar() {
        cout << "Cliente: "<<nombre << endl; // Error si se cambia a private
    }
};

int main() {
    Cliente c("Carlos");
    c.mostrar();
    return 0;
}
