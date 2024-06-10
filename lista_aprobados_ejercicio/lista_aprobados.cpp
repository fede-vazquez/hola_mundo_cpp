#include <iostream>
#include <vector>

using namespace std;

/*
    consigna:
    Se le pide al desarrollador (ustedes) que cree el siguiente programa:

    El docente deberá ingresar la cantidad de alumnos que rindieron el examen.
    Luego deberá ingresar el apellido del alumno
    Luego las notas de cada uno de los 4 ejercicio.

    El programa deberá Sumar las 4 notas de los ejercicios. y validar si el alumno aprobó o no.
    El programa deberá mostrar una lista con los alumnos aprobados con su respectiva nota y una lista con todos los alumnos que rindieron con su respectiva nota.
*/

int main()
{

    // Pedimos al docente la cantidad de alumnos y la guardamos en una variable
    int cantAlumnos = 0;
    cout << "Ingrese la cantidad de alumnos: ";
    cin >> cantAlumnos;

    // Iniciar 2 vectores, uno para los apellidos de los alumnos, y otra para la nota final.
    // Y una variable que guarde la cantidad de alumnos aprobados.
    vector<string> apellidos;
    vector<float> notas;
    int totalAprobados = 0;

    // Iterar ese n�mero, desde el 0 hasta uno antes.
    for (int i = 0; i < cantAlumnos; i++)
    {
        cout << endl;
        // Pedir al docente el apellido del alumno y agregarlo al vector de apellidos.
        string apellido;
        cout << "Ingrese el apellido del alumno nro " << i + 1 << ": ";
        cin >> apellido;
        apellidos.push_back(apellido);

        // Iniciar variable contadora con el total de la nota del alumno.
        float notaAlumno = 0;

        // Iterar 4 veces, pidiendo al docente la nota de cada ejercicio (del 1 al 4). Sumando cada nota al contador.
        for (int j = 1; j <= 4; j++)
        {
            float notaEjercicio = 0;
            cout << "Ingrese la nota del ejercicio " << j << " del alumno " << i + 1 << ": ";
            cin >> notaEjercicio;
            notaAlumno += notaEjercicio;
        }
        // Cuando termine la iteracion, agregamos el contador al vector de notas de alumnos.
        notas.push_back(notaAlumno);
    }

    // Iteramos nuevamente, para mostrar a los alumnos aprobados.
    cout << endl
         << "Alumnos aprobados:" << endl;

    for (int i = 0; i < cantAlumnos; i++)
    {
        // Preguntar si el estudiante aprobó o no con dicha nota.
        if (notas[i] >= 3)
        {
            // Si aprobó, lo mostramos en la terminal y sumamos uno al contador de aprobados.
            cout << apellidos[i] << ": " << notas[i] << endl;
            totalAprobados++;
        }
    }
    // Mostramos el total de aprobados
    cout << "Total de alumnos aprobados: " << totalAprobados << endl;

    // Volvemos a iterar, mostrando todos los alumnos con sus notas.
    cout << endl
         << "Nota de todos los alumnos:" << endl;
    for (int i = 0; i < cantAlumnos; i++)
    {
        cout << apellidos[i] << ": " << notas[i] << endl;
    }

    return 0;
}
