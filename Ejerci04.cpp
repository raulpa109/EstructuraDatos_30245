#include <iostream>
#include <string>
using namespace std;

struct Alumno {
    string nombre;
    int edad;
    float nota;
};

int main() {
    int n;
    cout << "Ingrese el numero de alumnos: ";
    cin >> n;
    cin.ignore();

    Alumno *p = new Alumno[n];

    for (int i = 0; i < n; i++) {
        cout << "Ingrese el nombre del alumno ";
        getline(cin, p[i].nombre);

        cout << "Ingrese la edad del alumno " ;
        cin >> p[i].edad;
        cin.ignore();

        cout << "Ingrese la nota del alumno " ;
        cin >> p[i].nota;
        cin.ignore();
    }

    cout << "\n--- Datos de los alumnos ---\n";
    for (int i = 0; i < n; i++) {
        cout << "Nombre: " << p[i].nombre << endl;
        cout << "Edad: " << p[i].edad << endl;
        cout << "Nota: " << p[i].nota << endl << endl;
    }

    delete[] p;
    system("pause");
    return 0;
}
