//Ejercicio 11: Herencia virtual - De código a diagrama + mejora

#include <iostream>
using namespace std;

class Dispositivo { 
    public: string marca; };
    
class Tablet : public virtual Dispositivo {};
class Telefono : virtual public Dispositivo {};
class Smartphone : public Tablet, public Telefono {};

int main() {
    Smartphone s;
    s.marca = "MiMarca";
    cout << s.marca << endl;
    return 0;
}
