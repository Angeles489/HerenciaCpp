//Ejercicio 9: Herencia privada - Implementación parcial + análisis

#include <iostream>
using namespace std;

class Sensor {
protected:
    string tipo;
    void detectarMovimiento() {
        cout << "Movimiento detectado por " <<tipo<< endl;
    }
public:
    Sensor(const string& t):tipo(t){}
};

class SistemaAlarma : private Sensor {
public:
    SistemaAlarma(const string& t): Sensor(t){
        cout<<"Sistema de alarma iniciado"<<endl;
    }
    void verificar() {
        detectarMovimiento();
            cout<<"Sistema activado"<<endl;
    }
};

int main() {
    SistemaAlarma sa("Infrarrojo");
    sa.verificar();
    //sa.detectarMovimiento();
    return 0;
}
