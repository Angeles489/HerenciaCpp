//Ejercicio 4: Herencia múltiple - De diagrama a código
#include <iostream>
using namespace std;

// Completa las clases según el diagrama
class ReproductorMultimedia{
    protected:
    string multi;
    public:
    ReproductorMultimedia(const string& mul):multi(mul){
        cout<<"Dispositivo:"<<multi<<endl;
    }
};

class ReproductorAudio: public ReproductorMultimedia{
    public:
    ReproductorAudio(const string& mul):ReproductorMultimedia(mul){
    }
    void reproducir(){
          cout<<multi<<" reproduce audio"<<endl;
    }
};

class ReproductorVideo: public ReproductorMultimedia{
    public:
    ReproductorVideo(const string& mul):ReproductorMultimedia(mul){
    }
    void mostrar(){
        cout<<multi<<" reproduce video"<<endl;
    }
};

int main(){
    ReproductorAudio b("Bocina");
    b.reproducir();
    ReproductorVideo c("Cámara");
    c.mostrar();
    
    return 0;
}

