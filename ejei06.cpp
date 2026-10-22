#include <iostream>
using namespace std;

struct Curso

{
    string nombreCurso;
    int creditos;
};
struct Alumno
{
    string nombreAlumno;
    int edad;
    Curso *curso;
};

int main (){
    Curso c={"Estructura de Datos", 4};
    Alumno al={"Juan", 20,&c};


    //crear un puntero aa las 2 extructuras
    Alumno *p =&al;
    Curso *pc=al.curso;
    // msotrar los datos del alumno y del curso usando los punteros
    cout << "Nombre del alumno: " << p->nombreAlumno << endl;
    cout << "Edad: " << p->edad << endl;
    //mostar los datos del curso usando el puntero al curso
    cout << "Datos del curso: " << endl;
    cout << "Nombre: " << pc->nombreCurso << endl;
    cout << "Creditos: " << pc->creditos << endl;
    return 0;
}


