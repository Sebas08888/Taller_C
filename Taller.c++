#include <iostream>
using namespace std;

void sumar(); 
int ProbarPersona();
int main() {
    cout << "Hola Mundo" << endl;
    
    sumar(); 
    ProbarPersona();
    return 0;
}


void sumar() { 
    int a, b;
    cout << "Ingrese dos numeros: ";
    cin >> a >> b;
    cout << "La suma es: " << a + b << endl;
}

class Persona{
    public:
    string nombre;
    int edad;
    void mostrar(){
        cout << "Nombre:" <<nombre <<", Edad: " << edad << endl;
    }
};
 
int ProbarPersona(){
    Persona p;
    p.nombre = "ana";
    p.edad = 20;
    p.mostrar();
    return 0;
}