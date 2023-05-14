#include <iostream>
#include <string>
#include <conio.h>
#include <stdlib.h>

using namespace std;

struct Alumno
{
    // Máximo 12 alumnos por clase
    string nombre[12];
    string apellido[12];
    string matricula[12]; // ID del alumno alfanumérico
    string grupo[12];
    float cal[12]; // Calificación
} alumno;          // variable de estructura

struct Materia
{
    // Máximo 12 registros
    string nombre[12];
    int idmat[12]; // Identificador de la materia numérico
} mat;             // variable de estructura

// Prototipos
int registroAlumnos();
void imprimeAlumnos(Alumno, Materia, int);

// Funcion para registrar alumnos y materias
int registroAlumnos()
{
    int cantidad;
    
    int i;

    do
    {
        cout << "¿Cuantos alumnos desea registrar? (Max 12 por materia)" << endl; // 12 es el tamaño del array
        cin >> cantidad;
        if (cantidad<0 || cantidad>12)
        {
            cout << "Dato fuera del rango admitido, intente de nuevo" << endl;
        }
        

    } while (cantidad<0 || cantidad>12);
    
    
    for (i = 0; i <= cantidad-1; i++) //El -1 es para que el array coincida con la cantidad, arrays comienzan en cero.
    {
        cout << "\n ---------- \n"; // Separador
        cout << "Ingrese el nombre del alumno: "<<endl;
        getline(cin >> ws, alumno.nombre[i]);
        cout << "Ingrese el apellido del alumno: " << endl;
        getline(cin, alumno.apellido[i]);
        cout << "Ingrese la matricula: " << endl;
        getline(cin >> ws, alumno.matricula[i]);
        cout << "Ingrese el grupo: " << endl;
        getline(cin, alumno.grupo[i]);
        cout << "Ingrese calificacion de la materia: " << endl;
        cin >> alumno.cal[i];
        cout << "Ingrese nombre de la materia: " << endl;
        getline(cin >> ws, mat.nombre[i]);
        cout << "Ingrese el ID de la materia: " << endl;
        cin >> mat.idmat[i];

    }
    imprimeAlumnos(alumno, mat, cantidad);
    return cantidad;
}

void imprimeAlumnos(Alumno a, Materia m, int c)
{
    int i;
    cout <<"LISTA DE ALUMNOS REGISTRADOS: \n";
    for (i = 0; i <= c-1; i++) 
    {
        cout << "\n ############## \n"; // Separador
        cout << "Nombre del alumno: " << a.nombre[i] << endl;
        cout << "Apellido del alumno: " << a.apellido[i] << endl;
        cout << "Matricula: " << a.matricula[i] << endl;
        cout << "Grupo: " << a.grupo[i] << endl;
        cout << "Calificacion: " << a.cal[i] << endl;
        cout << "Materia: " << m.nombre[i] << endl;
        cout << "ID de la materia: " << m.idmat[i] << endl;
    }
}

int main()
{
    registroAlumnos();
    system("pause");
    return 0;
}