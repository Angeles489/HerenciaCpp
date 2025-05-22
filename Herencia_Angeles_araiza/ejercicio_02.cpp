// Ejercicio 2:  Herencia protegida - Completación de código
#include <iostream>
using namespace std;

class Persona {
protected:
    string nombre;
    int edad;
public:
   Persona(const string& n, const int& e)
        : nombre(n), edad(e) {}
};

class Empleado : protected Persona {
public:
     Empleado(const string& n, const int& e)
        : Persona(n, e) {}
    void mostrarDatos() {
        // Completa para mostrar nombre y edad
        cout<<"Empleado: "<<nombre<<endl;
        cout<<"Edad: "<<edad<<" años"<<endl;
    }
};

int main() {
    Empleado emp("Juan", 22);
    emp.mostrarDatos();
    return 0;
}
