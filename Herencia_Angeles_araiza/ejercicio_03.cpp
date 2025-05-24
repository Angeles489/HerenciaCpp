//Ejercicio 3: Herencia privada - Detección y corrección de errores

#include <iostream>
using namespace std;

class Vehiculo {
protected:
    string marca;
public:
Vehiculo(const string& m):marca(m){}

    void encender() {
        cout << "Vehículo"<<marca<< "encendido" << endl;
    }
};

class Coche : private Vehiculo {
    public:
    Coche(const string& m): Vehiculo(m){}
    
    void encender_dos(){
        cout<< "Se esta encendiendo el vehiculo "<<marca<<endl;
    }
};

int main() {
    Coche miCoche("Toyota");
    miCoche.encender_dos(); // ¿Por qué falla?
    return 0;
}
