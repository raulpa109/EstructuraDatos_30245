#include <iostream>
using namespace std;
struct Alumno{
    string nombre;
    int edad;
    float nota;

};



int main() {
    Alumno al = {"Juan", 20, 8.5};
    Alumno *p = &al;
    cout << "Datos del alumno:" << endl;
    cout << "Nombre: " << p->nombre << endl;
    cout << "Edad: " << p->edad << endl;
    cout << "Nota: " << p->nota << endl;

    system("pause");
    return 0;
}
