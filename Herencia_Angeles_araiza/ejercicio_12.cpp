//Ejercicio 12: Herencia híbrida - De diagrama a código con virtual

#include <iostream>
using namespace std;

// Completa aquí las clases con herencia virtual

class Dispositivo{
    public:
    string marca;
    Dispositivo(const string& m):marca(m){}
};

class TV: public virtual Dispositivo{
    public:
    TV(const string& m):Dispositivo(m){}
    void encendida(){
        cout<<"La TV "<<marca<<" está encendida"<<endl;
    }
};

class DVD: public virtual Dispositivo{
    public:
    DVD(const string& m):Dispositivo(m){}
    void reproduce(){
        cout<<"El DVD "<<marca<<" esta reproduciendo"<<endl;
    }
};

class ControlRemoto: public TV, public DVD{
    public:
    ControlRemoto(const string& m): Dispositivo(m), TV(m), DVD(m){}
    
    void control(){
        cout<<"Control remoto marca "<<marca<<endl;
    }
};

int main(){
    ControlRemoto ctl("Samsung");
    ctl.encendida();
    ctl.reproduce();
    ctl.control();
    return 0;
}
