//Ejercicio 6: Herencia multinivel - Aplicación directa del concepto
#include <iostream>
using namespace std;

// Completa aquí las clases:

class Usuario {
protected:
    string persona;
public:
    Usuario(const string& p):persona(p){}
    void login() {
        cout << "Usuario "<<persona<<" ha iniciado sesión." << endl;
    }
};

class Moderador : public Usuario {
protected:
    string tarea;
public:
    Moderador(const string& p, const string& t):Usuario(p),tarea(t){}
    void moderar() {
        cout << "Moderador "<<persona<<" está revisando el contenido "<<tarea << endl;
    }
};

class Admin : public Moderador {
public:
    Admin(const string& p,const string& t): Moderador(p,t){}
    void banear() {
        cout << "Admin ha baneado a un usuario en " <<tarea<< endl;
    }
};

int main() {
    Admin admin1("Carlos","Comentarios inapropiados");
    admin1.login();     
    admin1.moderar();   
    admin1.banear();    

    return 0;
}
