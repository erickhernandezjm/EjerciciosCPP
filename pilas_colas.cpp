#include <iostream>
#include <queue>
#include <stack>

using namespace std;

struct Estudiante
{
    stack<double> calificaciones_pila;
    queue<double> calificaciones_cola;
} estudiante;

int main()
{
    int i;
    /*Agregando 5 registros a la pila*/
    estudiante.calificaciones_pila.push(10);
    estudiante.calificaciones_pila.push(9);
    estudiante.calificaciones_pila.push(8);
    estudiante.calificaciones_pila.push(10);
    estudiante.calificaciones_pila.push(7);

    /* Eliminar 3 registros de la pila*/
    for (i = 0; i < 3; i++)
    {
        estudiante.calificaciones_pila.pop();
    }

    /*Agregando 5 registros a la cola*/
    estudiante.calificaciones_cola.push(10);
    estudiante.calificaciones_cola.push(9);
    estudiante.calificaciones_cola.push(8);
    estudiante.calificaciones_cola.push(10);
    estudiante.calificaciones_cola.push(7);

    /*Eliminar 3 registros de la cola*/
    for (i = 0; i < 3; i++)
    {
        estudiante.calificaciones_cola.pop();
    }

    cout << "Las calificaciones en la pila son:\n";
    while (!estudiante.calificaciones_pila.empty())
    {
        cout << estudiante.calificaciones_pila.top() << "\n";
        estudiante.calificaciones_pila.pop();
    }

    cout << "Las calificaciones en la cola son:\n";
    while (!estudiante.calificaciones_cola.empty())
    {
        cout << estudiante.calificaciones_cola.front() << "\n";
        estudiante.calificaciones_cola.pop();
    }

    return 0;
}
